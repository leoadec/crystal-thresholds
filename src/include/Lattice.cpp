#include <iostream>
#include <cmath>

#include "Lattice.h"
#include "extra_math.h"

#ifdef DEBUG
#include <cassert>
#endif


Lattice::Lattice(int side, UnitCell *unit_cell) {
  #ifdef DEBUG
  assert (side>0);
  assert (unit_cell != NULL);
  #endif

  L = side; // assign size of the lattice

  vpc = unit_cell->GetVertices(); // vertices per cell
  epc = unit_cell->GetEdges(); // edges per cell
  fpc = unit_cell->GetFaces(); // faces per cell

  #ifdef DEBUG
  assert (vpc>0);
  assert (epc>0);
  assert (fpc>=0);
  #endif

  cells = L*L*L; // number of translations of the unit cell

  // Counts the upper limit of the number of red edges in a unit cell:
  // there are at least (edges-1) per face
  repc = 0;
  for (int f=0; f<fpc; f++) {
    repc += unit_cell->GetEdgesInFace(f)-1;
  };

  #ifdef DEBUG
  assert (repc>=fpc);
  #endif

  vertices = cells*vpc; // exact number of vertices in the lattice
  edges = cells*epc; // exact number of edges in the lattice
  faces = cells*fpc; // exact number of faces in the lattice

  #ifdef DEBUG
  assert (vertices>0);
  assert (edges>0);
  assert (faces>=0);
  #endif

  // upper limit on the total number of red edges in the lattice
  // is replaced by the exact number later
  red_edges = cells*repc;

  #ifdef DEBUG
  assert (red_edges>=faces);
  #endif

  PX = 0.; // the lattice only will need to store px explicitly if the red edge option is set to 3

  v_excited = new bool[vertices]; // this list will store whether the vertices are excited
  e_error = new bool[edges]; // this list will store whether the edges have errors

  // Same, but for red edges
  if (red_edges > 0) e_red_error = new bool[red_edges];

  e_start = new int[edges]; // list of vertices in which the edges start
  e_end = new int[edges]; // list of vertices in which the edges end

  has_poly = unit_cell->HasPolyEdges();
  if (has_poly) {
    e_poly = new int [edges];
  };

  #ifdef DEBUG
  assert (v_excited != NULL);
  assert (e_error != NULL);
  assert (e_red_error != NULL);
  assert (e_start != NULL);
  assert (e_end != NULL);
  #endif

  #ifdef DEBUG
  bool *assigned = new bool[edges];
  for (int e=0; e<edges; e++) assigned[e] = false;
  int assigned_count = 0;
  #endif


  // Creates all the black edges of the full lattice
  for (int n=0; n<epc; n++) {
    int v0 = unit_cell->GetEdgeStart(n);
    int v1 = unit_cell->GetEdgeEnd(n);
    int dx = unit_cell->GetEdgeDX(n);
    int dy = unit_cell->GetEdgeDY(n);
    int dz = unit_cell->GetEdgeDZ(n);

    int poly;
    if (has_poly) {
      poly = unit_cell->GetPolyWeight(n);
    };

    #ifdef DEBUG
    assert (v0>=0 and v0<vpc);
    assert (v1>=0 and v1<vpc);
    assert (dx>=-1 and dx<=1);
    assert (dy>=-1 and dy<=1);
    assert (dz>=-1 and dz<=1);
    #endif

    for (int k=0; k<L; k++) for (int j=0; j<L; j++) for (int i=0; i<L; i++) {
      int e = edge_id(n, i, j, k); // current edge ID
      e_start[e] = vertex_id(v0, i, j, k); // ID of the starting vertex
      e_end[e] = vertex_id(v1, i+dx, j+dy, k+dz); // ID of the ending vertex
      if (has_poly) { e_poly[e] = poly; }

      #ifdef DEBUG
      assert(e>=0 and e<edges);
      assert(e_start[e]>=0 and e_start[e]<vertices);
      assert(e_end[e]>=0 and e_end[e]<vertices);

      assert (assigned[e]==false);
      assigned[e] = true;
      assigned_count ++;
      #endif
    };
  };

  #ifdef DEBUG
  delete [] assigned;
  assert (assigned_count==edges);
  #endif

  // No weights assigned by this point
  has_weights = false;
  // nor has the lookup table been allocateds
  has_lookup_table = false;

  if (faces>0) {
    f_length = new int[faces]; // stores number of edges in face
    f_edges = new int*[faces]; // stores list of edges in face
  };


  #ifdef DEBUG
  assert (f_length != NULL);
  assert (f_edges != NULL);

  assigned = new bool[faces];
  for (int f=0; f<faces; f++) assigned[f] = false;
  assigned_count = 0;
  #endif

  // Creates list of faces of the full lattice
  for (int n=0; n<fpc; n++) {
    int nb_e = unit_cell->GetEdgesInFace(n); // number of edges in the nth face of the unit cell

    #ifdef DEBUG
    assert (nb_e>=3 and nb_e<=2*epc);
    #endif

    for (int k=0; k<L; k++) for (int j=0; j<L; j++) for (int i=0; i<L; i++) {
      int f = face_id(n, i, j, k); // current face ID

      f_length[f] = nb_e;
      f_edges[f] = new int[nb_e];

      #ifdef DEBUG
      assert (f_edges[f] != NULL);
      assert (assigned[f] == false);
      assigned[f] = true;
      assigned_count++;
      #endif

      for (int m=0; m<nb_e; m++) {
        int e = unit_cell->GetEdgeInFace(n, m); // number of the edge in the fundamental cell
        // Coordinates of the displacement from the fundamental cell
        int dx = unit_cell->GetEdgeCellXInFace(n, m);
        int dy = unit_cell->GetEdgeCellYInFace(n, m);
        int dz = unit_cell->GetEdgeCellZInFace(n, m);

        int edge = edge_id(e, i+dx, j+dy, k+dz); // ID of the black edge in the full lattice

        #ifdef DEBUG
        assert (e>=0 and e<epc);
        assert (dx>=-2 and dx<=2);
        assert (dy>=-2 and dy<=2);
        assert (dz>=-2 and dz<=2);
        assert (edge < edges);
        #endif

        f_edges[f][m] = edge; // specifies an edge that is part of the face
      };
    };
  };

  #ifdef DEBUG
  delete [] assigned;
  assert (assigned_count==faces);
  #endif
};





Lattice::~Lattice() {
  #ifdef DEBUG
  assert (v_excited != NULL);
  assert (e_error != NULL);
  assert (e_start != NULL);
  assert (e_end != NULL);
  #endif

  delete [] v_excited;

  delete [] e_error;
  delete [] e_start;
  delete [] e_end;

  if (has_poly) {
    delete [] e_poly;
  }

  if (has_weights) {
    #ifdef DEBUG
    assert (e_weight != NULL);
    #endif
    delete [] e_weight;
  };

  if (has_lookup_table) {
    #ifdef DEBUG
    assert (edge_from_vertices != NULL);
    #endif
    for (int v=0; v<vertices; v++) delete [] edge_from_vertices[v];
    delete [] edge_from_vertices;
  };

  if (faces>0) {
    #ifdef DEBUG
    assert (e_red_error != NULL);
    assert (e_red_start != NULL);
    assert (e_red_end != NULL);
    assert (f_length != NULL);
    assert (f_edges != NULL);
    #endif

    delete [] e_red_error;
    delete [] e_red_start;
    delete [] e_red_end;
    if (has_weights) {
      #ifdef DEBUG
      assert (e_red_weight!=NULL);
      #endif

      delete [] e_red_weight;
    };

    delete [] f_length;
    for (int f = 0; f<faces; f++) {
      #ifdef DEBUG
      assert (f_edges[f] != NULL);
      #endif

      delete [] f_edges[f];
    };
    delete [] f_edges;
  };
};



// Assigns error probabilities to each edge
void Lattice::AssignWeights(long double px, long double pz, long double spam_error, int red_edge_option, RngStream *rng) {
  int *omega = new int[edges]; // omegas for black edges
  int *delta = new int[edges];  // deltas for black edges
  int *red_delta = new int[red_edges]; // deltas for red edges

  #ifdef DEBUG
  assert (edges>0);
  assert (red_edges>0);
  assert (omega != NULL);
  assert (delta != NULL);
  assert (red_delta != NULL);
  #endif

  // initally, omegas and deltas are zero
  for (int e=0; e<edges; e++) {
    omega[e] = 0;
    delta[e] = 0;
  };

  for (int re=0; re<red_edges; re++) {
    red_delta[re] = 0;
  };

  e_weight = new long double[edges];
  e_red_start = new int[red_edges];
  e_red_end = new int[red_edges];
  e_red_weight = new long double[red_edges];

  #ifdef DEBUG
  assert (e_weight != NULL);
  assert (e_red_start != NULL);
  assert (e_red_end != NULL);
  assert (e_red_weight != NULL);
  #endif

  has_weights = true; // weight vectors have been allocated now

  #ifdef DEBUG
  int pruned = 0;
  #endif

  // stores statistics for m_{12}
  float avg_length = 0.;
  float max_length = 1.*f_length[0];
  float min_length = 1.*f_length[0];
  int *sorted_length = new int[faces];

  int re = 0; // counts the actual number of red edges
  for (int f=0; f<faces; f++) {
    // if red_edge_option is 1, the red edges are built starting always from a
    // a fixed vertex of the face
    int shift = 0;
    // if red_edge_option is 2, the red edges are built starting from a random vertex
    if (red_edge_option==2) {
      shift = (int) floor(rng->RandU01()*f_length[f]);
    }

    int v0 = e_start[f_edges[f][(0+shift)%f_length[f]]]; // first vertex of the ring
    int v1 = v0; // second vertex of the ring

    // calculates statistics for m_{12}
    avg_length += 1.*f_length[f];
    if (f_length[f]>max_length) max_length = f_length[f];
    if (f_length[f]<min_length) min_length = f_length[f];
    int g = f;
    sorted_length[g] = f_length[g];
    while (g>0 and sorted_length[g-1]>sorted_length[g]) {
      int aux = sorted_length[g];
      sorted_length[g] = sorted_length[g-1];
      sorted_length[g-1] = aux;
      g--;
    };

    // selects as v0 the vertex that does not appear in the next edge
    if ((e_start[f_edges[f][(1+shift)%f_length[f]]]==v0) or (e_end[f_edges[f][(1+shift)%f_length[f]]]==v0)) {
      v0 = e_end[f_edges[f][(0+shift)%f_length[f]]];
      v1 = v0;
    };

    for (int n=0; n<f_length[f]; n++) {
      int e = f_edges[f][(n+shift)%f_length[f]];
      omega[e] += 1; // increases omega by 1 for each face to which the edge e belongs

      #ifdef DEBUG
      assert(e>=0 and e<edges);
      assert(omega[e]>0);
      #endif


      // if red edges are allowed in this scheme
      if (red_edge_option==1 or red_edge_option==2) {
      // add one red edge for each black edge of the face, except the last one
      if (n<f_length[f]-1) {
        bool prune = false; // whether the red edge is repeated

        // chooses next vertex v1 as the one belonging to the current black edge
        // that is different from the previous v1
        if (e_end[e]==v1) {
          v1 = e_start[e];
        } else {
          v1 = e_end[e];
        };

        #ifdef DEBUG
        assert (v0!=v1);
        assert (v0>=0 and v0<vertices);
        assert (v1>=0 and v1<vertices);
        assert (re>=0 and re<red_edges);
        #endif


        // compares current v0 and v1 with black and red edges
        for (int m=0; (m<re or m<edges) and not prune; m++) {
          // prunes it if it coincides with a black edge
          if (m<edges)
          if ((v0==e_start[m] and v1==e_end[m])
              or (v1==e_start[m] and v0==e_end[m])) {
                #ifdef DEBUG
                assert (e_start[m]>=0 and e_start[m]<vertices);
                assert (e_end[m]>=0 and e_end[m]<vertices);
                assert (prune==false);
                assert (delta[m]>=0);
                #endif

                delta[m] += 1;
                prune = true;
          };

            // prunes it if it coincides with a red edge
          if (m<re)
          if ((v0==e_red_start[m] and v1==e_red_end[m])
              or (v1==e_red_start[m] and v0==e_red_end[m])) {
                #ifdef DEBUG
                assert (e_red_start[m]>=0 and e_red_start[m]<vertices);
                assert (e_red_end[m]>=0 and e_red_end[m]<vertices);
                assert (prune==false);
                assert (red_delta[m]>=0);
                #endif

                red_delta[m] += 1;
                prune = true;
          };
        };

        // adds a red edge that starts at v0 and ends at v1, if no other
        // edges between those two vertices have been found
        if (not prune) {
          e_red_start[re] = v0;
          e_red_end[re] = v1;
          red_delta[re] += 1;
          re++;

          #ifdef DEBUG
          assert (re<=red_edges);
        } else {
          pruned++;
          #endif
        };

      }; };
    };
  };

  // print statistics for m_{12}
  float median_length;
  if (faces%2==0) {
    median_length = .5*( sorted_length[faces/2] + sorted_length[(faces/2)-1] );
  } else {
    median_length = 1.*sorted_length[(faces+1)/2];
  };
  delete[] sorted_length;
  avg_length /= faces;
  std::cout << "# Average number of black edges per face: " << avg_length << std::endl;
  std::cout << "# Median number of black edges per face: " << median_length << std::endl;
  std::cout << "# Maximum number of black edges per face: " << max_length << std::endl;
  std::cout << "# Minimum number of black edges per face: " << min_length << std::endl;

  #ifdef DEBUG
  assert (re+pruned==red_edges or red_edge_option==0 or red_edge_option==3);
  #endif

  // updates the value of the red edge counter
  // this value now excludes the pruned
  red_edges = re;

  // stores the value of px, if the red edge option is 3
  if (red_edge_option==3) PX = px;

  // calculates error probability for all the black edges
  for (int e=0; e<edges; e++) {
    if ( has_poly ) if ( e_poly[e]>1. ) {
      omega[e] = omega[e]/e_poly[e];
      delta[e] = delta[e]/e_poly[e];
    };
    long double probability = spam_error *
                 (1.-.5*(1.-pow(1.-2.*pz,omega[e]))*.5*(1.+pow(1.-2.*px,delta[e]))
                 -.5*(1.+pow(1.-2.*pz,omega[e]))*.5*(1.-pow(1.-2.*px,delta[e])) )
                 + (1.-spam_error)*
                 (.5*(1.-pow(1.-2.*pz,omega[e]))*.5*(1.+pow(1.-2.*px,delta[e]))
                 +.5*(1.+pow(1.-2.*pz,omega[e]))*.5*(1.-pow(1.-2.*px,delta[e])));
    if ( has_poly ) if ( e_poly[e]>1. ) {
      probability = .5*(1. - pow(1.-2*probability,e_poly[e])); // increases probability for poly edges
    };
    e_weight[e] = -log(probability); // weights are negative log of the probability

    #ifdef DEBUG
    std::cout << "# probability of black edge " << e << " is " << probability << std::endl;
    std::cout << "# weight of black edge " << e << " is " << e_weight[e] << std::endl;
    #endif

    #ifdef DEBUG
    assert(probability>=0. and probability<1.);
    assert(e_weight[e]>=0. and e_weight[e]<1e100);
    #endif
  };


  // print statistics about m_{12} of the lattice
  float avg_omega = 0;
  int *sorted = new int[edges];
  float min_omega = omega[0];
  float max_omega = omega[0];
  for (int e=0; e<edges; e++) {
    avg_omega += 1.*omega[e];
    if (omega[e]<min_omega) min_omega = omega[e];
    if (omega[e]>max_omega) max_omega = omega[e];

    int f = e;
    sorted[f] = omega[f];
    while (f>0 and sorted[f-1]>sorted[f]) {
      int aux = sorted[f];
      sorted[f] = sorted[f-1];
      sorted[f-1] = aux;
      f--;
    };
  };
  float median_omega;
  if (edges%2==0) {
    median_omega = .5*( sorted[edges/2] + sorted[(edges/2)-1] );
  } else {
    median_omega = 1.*sorted[(edges+1)/2];
  };
  delete[] sorted;
  avg_omega /= edges;
  std::cout << "# Average number of faces per black edge: " << avg_omega << std::endl;
  std::cout << "# Median number of faces per black edge: " << median_omega << std::endl;
  std::cout << "# Maximum number of faces per black edge: " << max_omega << std::endl;
  std::cout << "# Minimum number of faces per black edge: " << min_omega << std::endl;

  // calculated error probability for all red edges
  for (int e=0; e<red_edges; e++) {
    long double red_probability = .5*(1.-pow(1.-2.*px,red_delta[e]));
    e_red_weight[e] = -log(red_probability); // weights are negative log of the probability

    #ifdef DEBUG
    assert(red_probability>=0. and red_probability<1.);
    assert(e_red_weight[e]>=0.);
    #endif
  };

  #ifdef DEBUG
  assert(omega!=NULL);
  assert(delta!=NULL);
  assert(red_delta!=NULL);
  #endif

  delete [] omega;
  delete [] delta;
  delete [] red_delta;

  return;
}



void Lattice::MakeLookupTable() {
  has_lookup_table = true;

  edge_from_vertices = new int* [vertices];
  for (int v0=0; v0<vertices; v0++) {
    edge_from_vertices[v0] = new int[vertices];

    for (int v1=0; v1<vertices; v1++) edge_from_vertices[v0][v1] = -1;
  };

  for (int e=0; e<edges; e++) {
    int v0 = e_start[e];
    int v1 = e_end[e];

    edge_from_vertices[v0][v1] = e;
    edge_from_vertices[v1][v0] = e;
  };

  for (int re=0; re<red_edges; re++) {
    int v0 = e_red_start[re];
    int v1 = e_red_end[re];

    edge_from_vertices[v0][v1] = edges + re;
    edge_from_vertices[v1][v0] = edges + re;
  };

  return;
}





// Error probability is the exponential of negative weight
long double Lattice::EdgeErrorProbability(int e) {
  // // Forces probabilities to be probabilties for 0.50%
  // // Delete this later
  // if (e>edges) return 0.;
  // if (e%6<4) return 0.0292599;
  // return 0.019702;
  // // Delete this later


  #ifdef DEBUG
  assert(e>=0 and e<edges+red_edges);
  #endif

  if (e<edges) {
    #ifdef DEBUG
    assert(exp(-e_weight[e])>=0. and exp(-e_weight[e])<=1.);
    #endif

    return exp(-e_weight[e]);
  };

  #ifdef DEBUG
  assert(exp(-e_red_weight[e-edges])>=0. and exp(-e_red_weight[e-edges])<=1.);
  #endif

  return exp(-e_red_weight[e-edges]);
}


void Lattice::AssignErrors(RngStream *rng) {

    for (int e=0; e<edges; e++ ){
      long double coin_toss = rng->RandU01();

      #ifdef DEBUG
      assert(coin_toss>=0. and coin_toss<=1.);
      #endif

      if (coin_toss < EdgeErrorProbability(e)) {
        e_error[e] = true;
      } else {
        e_error[e] = false;
      };
    };

    for (int re=0; re<red_edges; re++ ){
      long double coin_toss = rng->RandU01();

      #ifdef DEBUG
      assert(coin_toss>=0. and coin_toss<=1.);
      #endif

      if (coin_toss < EdgeErrorProbability(edges+re)) {
        e_red_error[re] = true;
      } else {
        e_red_error[re] = false;
      };
    };

    // run this only under red edge option number 3, when PX>0
    if (PX>0.) {
      // for every face, check the probability of one X error occurring
      // during cluster construction
      for (int f=0; f<faces; f++) {

        // probability of a single X error in a face with size f_length[f]
        long double probability = f_length[f] * PX * pow(1.-PX, f_length[f]-1);
        long double coin_toss = rng->RandU01();

        // in case there is an error, select a random permutation of the edges
        if (coin_toss<probability) {
          // generates a random integer between 0 and (length of the string)!
          // this will be used to determine the size of the subpermutation
          int size = (int) floor((f_length[f])*rng->RandU01());

          // shuffles a subpermutation of the appropriate size
          int *shuffle = new int[f_length[f]];

          for (int i=0; i<f_length[f]; i++) { shuffle[i] = f_edges[f][i]; }

          for (int j=0; j<size; j++) {
            int swap = (int) floor((f_length[f]-j)*rng->RandU01() + j);

            int edge = shuffle[swap]; // selects jth edge of the subpermutation

            e_error[edge] = not e_error[edge]; // flips the seleected edge

            shuffle[swap] = shuffle[j]; // modifies shuffle list so no edge is picked twice
          }

          delete [] shuffle;

        };

      };
    };

    return;
  }


// Puts the edge in a state with error with a probability given by its weight
void Lattice::AssignErrors(int seed) {
  srand(seed);

  for (int e=0; e<edges; e++ ){
    long double coin_toss = ((long double) 1.*rand())/RAND_MAX;

    #ifdef DEBUG
    assert(coin_toss>=0. and coin_toss<=1.);
    #endif

    if (coin_toss < EdgeErrorProbability(e)) {
      e_error[e] = true;
    } else {
      e_error[e] = false;
    };
  };

  for (int re=0; re<red_edges; re++ ){
    long double coin_toss = ((long double) 1.*rand())/RAND_MAX;

    #ifdef DEBUG
    assert(coin_toss>=0. and coin_toss<=1.);
    #endif

    if (coin_toss < EdgeErrorProbability(edges+re)) {
      e_red_error[re] = true;
    } else {
      e_red_error[re] = false;
    };
  };

  return;
}




// MAKE IT FASTER

void Lattice::FlipEdge(int v0, int v1) {
  int e = edge_from_vertices[v0][v1];

  #ifdef DEBUG
  assert (e>=0 and e<edges+red_edges);
  #endif

  if (e<edges) {
    e_error[e] = not e_error[e];
    return;
  };

  e_red_error[e-edges] = not e_red_error[e-edges];
  return;
}


// void Lattice::FlipEdge(int v0, int v1) {
//   bool edge_not_found = true;
//
//   int e=0;
//
//   for (e=0; edge_not_found; e++) {
//
//     #ifdef DEBUG
//     assert (e>=0 and e<edges+red_edges);
//     assert (v0>=0 and v0<vertices);
//     assert (v1>=0 and v1<vertices);
//     #endif
//
//     int v_start = GetEdgeStart(e);
//     int v_end = GetEdgeEnd(e);
//
//     if ((v_start==v0 and v_end==v1) or
//         (v_start==v1 and v_end==v0)) {
//           edge_not_found = false;
//           e--;
//         };
//   };
//
//   if (e<edges) {
//     e_error[e] = not e_error[e];
//     return;
//   };
//
//   e_red_error[e-edges] = not e_red_error[e-edges];
//   return;
// }

int Lattice::PrintEdge(int v0, int v1) {
  int e = edge_from_vertices[v0][v1];

  #ifdef DEBUG
  assert (e>=0 and e<edges+red_edges);
  #endif

  return e;
}







// int Lattice::PrintEdge(int v0, int v1) {
//   bool edge_not_found = true;
//
//   int e=0;
//
//   for (e=0; edge_not_found; e++) {
//
//     #ifdef DEBUG
//     assert (e>=0 and e<edges+red_edges);
//     assert (v0>=0 and v0<vertices);
//     assert (v1>=0 and v1<vertices);
//     #endif
//
//     int v_start = GetEdgeStart(e);
//     int v_end = GetEdgeEnd(e);
//
//     if ((v_start==v0 and v_end==v1) or
//         (v_start==v1 and v_end==v0)) {
//           edge_not_found = false;
//           e--;
//         };
//   };
//
//   return e;
// }




// Iterates over all edges, exciting vertices at extremities of
// edges with errors. Vertex will be excited in the end if it has contact
// with an odd number of edges with errors.
void Lattice::ExciteVertices() {
  // Resets excitations
  for (int v=0; v<vertices; v++) v_excited[v] = false;

  for (int e=0; e<edges; e++) {
    if (e_error[e]) {
      int v0 = e_start[e]; // vertex at one extremity of the edge
      int v1 = e_end[e]; // vertex at the other extremity

      #ifdef DEBUG
      assert(v0>=0 and v0<vertices);
      assert(v1>=0 and v1<vertices);
      #endif

      v_excited[v0] = not v_excited[v0]; // flips excitation of vertex 0
      v_excited[v1] = not v_excited[v1]; // flips excitation of vertex 1
    };
  };

  // Repeats the process for red edges
  for (int re=0; re<red_edges; re++) {
    if (e_red_error[re]) {
      int v0 = e_red_start[re]; // vertex at one extremity of the edge
      int v1 = e_red_end[re]; // vertex at the other extremity

      #ifdef DEBUG
      assert(v0>=0 and v0<vertices);
      assert(v1>=0 and v1<vertices);
      #endif

      v_excited[v0] = not v_excited[v0]; // flips excitation of vertex 0
      v_excited[v1] = not v_excited[v1]; // flips excitation of vertex 1
    };
  };

  return;
}



// returns number of vertices
int Lattice::GetNumberOfExcitations() {
  int excitations = 0;
  for (int v=0; v<vertices; v++) if (v_excited[v]) excitations++;

  #ifdef DEBUG
  assert(excitations>=0 and excitations<=vertices);
  #endif

  return excitations;
}

bool Lattice::IsExcited(int v){
  #ifdef DEBUG
  assert (v<vertices);
  #endif
  return v_excited[v];
}

int Lattice::GetBlackEdges() { return edges; }

int Lattice::GetEdges() { return edges+red_edges; }

int Lattice::GetEdgeStart(int e) {
  #ifdef DEBUG
  assert(e>=0 and e<edges+red_edges);
  #endif

  if (e<edges)
    return e_start[e];

  return e_red_start[e-edges];
}

int Lattice::GetEdgeEnd(int e) {
  #ifdef DEBUG
  assert(e>=0 and e<edges+red_edges);
  #endif

  if (e<edges)
    return e_end[e];

  return e_red_end[e-edges];
}

long double Lattice::GetEdgeWeight(int e) {
  #ifdef DEBUG
  assert(e>=0 and e<edges+red_edges);
  #endif

  if (e<edges)
    return e_weight[e];

  return e_red_weight[e-edges];
}


bool Lattice::HasError(int e) {
  #ifdef DEBUG
  assert (e<edges+red_edges);
  #endif

  if (e<edges) {
    return e_error[e];
  };

  return e_red_error[e-edges];
}





// Only use these functions for blue edges
int Lattice::GetEdgeCellX(int e){
  #ifdef DEBUG
  assert(e<edges);
  #endif
  return ((int) floor(e/epc))%L;
}

int Lattice::GetEdgeCellY(int e){
  #ifdef DEBUG
  assert(e<edges);
  #endif
  return ((int) floor(e/(L*epc)))%L;
}

int Lattice::GetEdgeCellZ(int e){
  #ifdef DEBUG
  assert(e<edges);
  #endif
  return ((int) floor(e/(L*L*epc)))%L;
}

int Lattice::GetVertexCellX(int v){
  #ifdef DEBUG
  assert(v<vertices);
  #endif
  return ((int) floor(v/vpc))%L;
}

int Lattice::GetVertexCellY(int v){
  #ifdef DEBUG
  assert(v<vertices);
  #endif
  return ((int) floor(v/(L*vpc)))%L;
}

int Lattice::GetVertexCellZ(int v){
  #ifdef DEBUG
  assert(v<vertices);
  #endif
  return ((int) floor(v/(L*L*vpc)))%L;
}

int Lattice::FirstEdgeInCell(int cx, int cy, int cz){return edge_id(0,cx,cy,cz);}
int Lattice::LastEdgeInCell(int cx, int cy, int cz){return edge_id(epc-1,cx,cy,cz);}


bool Lattice::BlackEdgesTouch(int e1, int e2){
  if (e_start[e1]==e_start[e2]) return true;
  if (e_start[e1]==e_end[e2]) return true;
  if (e_end[e1]==e_start[e2]) return true;
  if (e_end[e1]==e_end[e2]) return true;

  return false;
}
