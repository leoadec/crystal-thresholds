#include <iostream>
#include <cassert>

#include "CompleteGraph.h"

#define MAX_NEIGHBORS 50

CompleteGraph::~CompleteGraph() {
  for (int i=0; i<vertices; i++) {
      delete [] distance[i];
      delete [] tree[i];
      delete [] neighbors[i];
      delete [] weight[i];
  };

  delete [] distance;
  delete [] tree;
  delete [] neighbors;
  delete [] weight;
};




CompleteGraph::CompleteGraph(int v) {
  vertices = v;

  neighbors = new int*[vertices];
  tree = new int*[vertices];
  distance = new long double*[vertices];
  weight = new long double*[vertices];

  #ifdef DEBUG
  assert(vertices>0);
  assert(neighbors!=NULL);
  assert(tree!=NULL);
  assert(distance!=NULL);
  assert(weight!=NULL);
  #endif

  for (int i=0; i<vertices; i++) {
    distance[i] = new long double[vertices];
    tree[i] = new int[vertices];
    distance[i][i] = 0.;
    tree[i][i] = -1;
    for (int j=0; j<i; j++) {
      distance[i][j] = -1.;
      distance[j][i] = -1.;
      tree[i][j] = -1;
      tree[j][i] = -1;
    };

    #ifdef DEBUG
    assert(distance[i]!=NULL);
    assert(tree[i]!=NULL);
    #endif
  };

  for (int i=0; i<vertices; i++) {
    neighbors[i] = new int[MAX_NEIGHBORS+1];
    weight[i] = new long double[MAX_NEIGHBORS];
    neighbors[i][0] = 0;
  };
};



// Makes a list of neighbors for each vertex
void CompleteGraph::DetermineNeighbors (Lattice *lattice) {

  // for (int e=0; e<lattice->GetBlackEdges(); e++) {
  for (int e=0; e<lattice->GetEdges(); e++) {
    int v0 = lattice->GetEdgeStart(e);
    int v1 = lattice->GetEdgeEnd(e);

    long double w = lattice->GetEdgeWeight(e);

    if (w<1e100) {

    #ifdef DEBUG
    assert (v0>=0 and v0<vertices);
    assert (v1>=0 and v1<vertices);
    assert (w>0. and w<1e100);

    for (int i=1; i<=neighbors[v0][0]; i++) {
      assert(neighbors[v0][i]!=v0);
      assert(neighbors[v0][i]!=v1);
    };

    for (int i=1; i<=neighbors[v1][0]; i++) {
      assert(neighbors[v1][i]!=v0);
      assert(neighbors[v1][i]!=v1);
    };
    #endif

    neighbors[v0][0] += 1;
    neighbors[v1][0] += 1;

    neighbors[v0][neighbors[v0][0]] = v1;
    neighbors[v1][neighbors[v1][0]] = v0;

    #ifdef DEBUG
    assert(neighbors[v0][0] < MAX_NEIGHBORS);
    assert(neighbors[v1][0] < MAX_NEIGHBORS);
    #endif

    weight[v0][neighbors[v0][0]-1] = w;
    weight[v1][neighbors[v1][0]-1] = w;

    if (e==lattice->GetBlackEdges()-1) {
      // stores statistics for m_{01}
      float avg_nbs = 0.;
      float max_nbs = 1.*neighbors[0][0];
      float min_nbs = 1.*neighbors[0][0];
      int *sorted_nbs = new int[vertices];

      // calculates statistics for m_{01}
      for (int v=0; v<vertices; v++) {
        avg_nbs += 1.*neighbors[v][0];
        if (neighbors[v][0]>max_nbs) max_nbs = neighbors[v][0];
        if (neighbors[v][0]<min_nbs) min_nbs = neighbors[v][0];
        int w = v;
        sorted_nbs[w] = neighbors[w][0];
        while (w>0 and sorted_nbs[w-1]>sorted_nbs[w]) {
          int aux = sorted_nbs[w];
          sorted_nbs[w] = sorted_nbs[w-1];
          sorted_nbs[w-1] = aux;
          w--;
        };
      };

      // print statistics for m_{01}
      float median_nbs;
      if (vertices%2==0) {
        median_nbs = .5*( sorted_nbs[vertices/2] + sorted_nbs[(vertices/2)-1] );
      } else {
        median_nbs = 1.*sorted_nbs[(vertices+1)/2];
      };
      delete[] sorted_nbs;
      avg_nbs /= vertices;
      std::cout << "# Average number of neighbors per vertex (only black edges): "
          << avg_nbs << std::endl;
      std::cout << "# Median number of neighbors per vertex (only black edges): "
          << median_nbs << std::endl;
      std::cout << "# Maximum number of neighbors per vertex (only black edges): "
          << max_nbs << std::endl;
      std::cout << "# Minimum number of neighbors per vertex (only black edges): "
          << min_nbs << std::endl;
  };

  // same thing as above, but the statics are for all the edges, black and red
  if (e==lattice->GetEdges()-1) {
    float avg_nbs = 0.;
    float avg_sq = 0.;
    long double avg_weight = 0.;
    long double weight_sq = 0.;
    float max_nbs = 1.*neighbors[0][0];
    float min_nbs = 1.*neighbors[0][0];
    int *sorted_nbs = new int[vertices];

    for (int v=0; v<vertices; v++) {
      avg_nbs += 1.*neighbors[v][0];
      avg_sq += pow(neighbors[v][0], 2.);

      long double vertex_weight = 0.;
      for (int k=0; k<neighbors[v][0]; k++) vertex_weight += weight[v][k];
      avg_weight += vertex_weight;
      weight_sq += pow(vertex_weight, 2.);

      if (neighbors[v][0]>max_nbs) max_nbs = neighbors[v][0];
      if (neighbors[v][0]<min_nbs) min_nbs = neighbors[v][0];
      int w = v;
      sorted_nbs[w] = neighbors[w][0];
      while (w>0 and sorted_nbs[w-1]>sorted_nbs[w]) {
        int aux = sorted_nbs[w];
        sorted_nbs[w] = sorted_nbs[w-1];
        sorted_nbs[w-1] = aux;
        w--;
      };
    };

    float median_nbs;
    if (vertices%2==0) {
      median_nbs = .5*( sorted_nbs[vertices/2] + sorted_nbs[(vertices/2)-1] );
    } else {
      median_nbs = 1.*sorted_nbs[(vertices+1)/2];
    };
    delete[] sorted_nbs;
    avg_nbs /= vertices;
    avg_sq /= vertices;
    avg_weight /= vertices;
    weight_sq /= vertices;

    // a little hack below:
    // it prevents rounding errors from causing the square of the first moment
    // to be greater than the second moment
    if (abs(sqrt(weight_sq) - avg_weight) < 1e-15) {
       avg_weight -= 1e-14;
     };

    std::cout << "# Average number of neighbors per vertex (all edges): "
        << avg_nbs << std::endl;
    std::cout << "# Median number of neighbors per vertex (all edges): "
        << median_nbs << std::endl;
    std::cout << "# Maximum number of neighbors per vertex (all edges): "
        << max_nbs << std::endl;
    std::cout << "# Minimum number of neighbors per vertex (all edges): "
        << min_nbs << std::endl;
    std::cout << "# Std deviation of the number of neighbors per vertex (all edges): "
        << sqrt(avg_sq - pow(avg_nbs,2.)) << std::endl;
    std::cout << "# Average vertex weight: " << avg_weight << std::endl;
    std::cout << "# Std deviation of vertex weight: " << sqrt(weight_sq - pow(avg_weight,2)) << std::endl;
  };

  };

  };

  return;
};


// Applies Dijkstra's algorithm to the graph
void CompleteGraph::Dijkstra() {
  bool *visited = new bool[vertices];

  for (int origin=0; origin<vertices; origin++) {
    // resets list of visited vertices
    for (int v=0; v<vertices; v++) visited[v] = false;
    int current = origin;
    int remaining = vertices;

    #ifdef DEBUG
    assert(distance[current][current] == 0.);
    #endif

    while (remaining>0) {
      for (int i=1; i<=neighbors[current][0]; i++) {
        int v = neighbors[current][i];

        #ifdef DEBUG
        assert(v>=0 and v<vertices);
        assert(distance[origin][current]>0. or origin==current);
        assert(weight[current][i-1]>0. or origin==current);
        #endif

        if ((distance[origin][v] < 0.) or
            (distance[origin][v] > distance[origin][current]+weight[current][i-1])){
          distance[origin][v] = distance[origin][current] + weight[current][i-1];
          tree[origin][v] = current;
        };

        #ifdef DEBUG
        assert (distance[origin][v] >= 0.);
        #endif
      };

      visited[current]=true;
      remaining--;

      // Moves on to the nearest neighbor

      long double min = 1e40;
      int new_current = current;

      for (int v=0; v<vertices; v++) {
        #ifdef DEBUG
        assert(distance[origin][v]<1e40);
        #endif

        if (distance[origin][v]>=0. and distance[origin][v]<min and not visited[v]) {
          min = distance[origin][v];
          new_current = v;
        };
      };

      #ifdef DEBUG
      assert(new_current!=current or remaining==0);
      assert(distance[origin][current]>0. or origin==current);
      #endif
      current = new_current;
    };
  };

  #ifdef DEBUG
  assert(visited!=NULL);
  #endif

  delete [] visited;

  return;
};





// Flip all elements of a tree, starting at its tip and finishing at the origin

void CompleteGraph::FlipTree(Lattice *lattice, int origin, int tip) {
  for (int v=tip; v>=0; v=tree[origin][v] ) {
    #ifdef DEBUG
    assert (v<vertices);
    assert (tree[origin][v]<vertices);
    assert (v!=tree[origin][v]);
    #endif
    if (tree[origin][v]>=0) lattice->FlipEdge(v, tree[origin][v]);
  };
  return;
}

void CompleteGraph::PrintTree(Lattice *lattice, int origin, int tip) {
  std::cout<< "(FAIL) Edges flipped for correction: ";
  for (int v=tip; v>=0; v=tree[origin][v] ) {
    #ifdef DEBUG
    assert (v<vertices);
    assert (tree[origin][v]<vertices);
    assert (v!=tree[origin][v]);
    #endif

    if (tree[origin][v]>=0) std::cout << lattice->PrintEdge(v, tree[origin][v]) << ", ";
  };
  std::cout<< std::endl;
  return;
}
