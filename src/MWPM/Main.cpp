#include <iostream>
#include <cstring>
#include <chrono>
#include <ctime>

#include "CompleteGraph.h"

#include "../../contrib/blossom5-v2.05.src/PerfectMatching.h" // Blossom V
#include "../../contrib/RngStream/RngStream.h" // random number generator

#ifdef DEBUG
#include <cassert>
#endif


int main (int argc, char **argv) {
  // PART 0: READING INPUT
  if ( argc < 7 ) {
    std::cerr << "Usage: " << argv[0] << " (L) (p_x) (p_z) (spam_error) (number of trials) (red edge format)" << std::endl;
    return 1;
  };

  int L = atoi(argv[1]); // parameter 1, side of the cluster
  long double px = atof(argv[2]); // parameter 2, X error probability
  long double pz = atof(argv[3]); // parameter 3, Z error probability
  long double spam_error = atof(argv[4]); // parameter 4, SPAM error probability
  int trials = atoi(argv[5]); // parameter 5, number of trials

  int red_edge_option = 0;

  if (strcmp(argv[6], "off")==0) {
    red_edge_option = 0;
  } else if (strcmp(argv[6], "none")==0) {
    red_edge_option = 0;
  } else if (strcmp(argv[6], "fixed")==0) {
    red_edge_option = 1;
  } else if (strcmp(argv[6], "sequential")==0) {
    red_edge_option = 2;
  } else if (strcmp(argv[6], "random")==0) {
    red_edge_option = 3;
  } else {
    std::cerr << "Valid red edge options are: 'none', 'fixed', 'sequential', and 'random'. " << std::endl;
    return 1;
  }

  if ( L<3 ) {
    std::cerr << "Lattice has to have at least size 3 to avoid edge collision." << std::endl;
    return 1;
  };

  if ( trials<1 ) {
    std::cerr << "Number of trials has to be at least 1." << std::endl;
    return 1;
  };

  if ( px<0. or px>1. or pz<0. or pz>1. or spam_error<0. or spam_error>1. ) {
    std::cerr << "Probabilities must have values between 0 and 1." << std::endl;
    return 1;
  };

  // PART 1: LATTICE CREATION
  auto time_start = clock(); // times the execution of each part of the code

  // creates unit cell using an external function
  UnitCell *unit_cell = _UnitCell();
  // translates it to create an LxLxL periodic lattice
  Lattice *lattice = new Lattice(L, unit_cell);

  #ifdef DEBUG
  assert (unit_cell != NULL);
  assert (lattice != NULL);
  #endif

  // Aborts if no faces are defined
  if (not lattice->TilingInfo() ) {
    std::cerr << "Tiling information not available for lattice "
              << unit_cell->Name() << "." << std::endl;
    delete unit_cell;
    delete lattice;
    return 1;
  };

  std::cout << "# " << unit_cell->Name() << std::endl;
  std::cout << "# Red edge option: " << red_edge_option << std::endl;

  // assigns random seeds

  long unsigned int seeds[6];
  seeds[0] = std::chrono::high_resolution_clock::now().time_since_epoch().count()%4294967087;
  seeds[1] = seeds[0];
  seeds[2] = seeds[0];
  seeds[3] = std::chrono::high_resolution_clock::now().time_since_epoch().count()%429494444;
  seeds[4] = seeds[3];
  seeds[5] = seeds[3];

  RngStream::SetPackageSeed(seeds); // always do this before initilizing the RngStream
  RngStream *rng = new RngStream();

  // assigns weights to each edge
  lattice->AssignWeights(px, pz, spam_error, red_edge_option, rng);

  // creates lookup table of edges given the vertices
  lattice->MakeLookupTable();

  // PART2: COMPLETE GRAPH CREATION
  // copies number of vertices
  int vertices = lattice->Vertices();
  CompleteGraph *complete_graph = new CompleteGraph(vertices);
  // copies edges and distances from the lattice
  complete_graph->DetermineNeighbors(lattice);
  // applies Dijkstra's algorithm
  complete_graph->Dijkstra();

  #ifdef DEBUG
  assert (vertices>0);
  assert (complete_graph!=NULL);
  #endif

  // initializes counter for the failure rate
  long double failure_rate = 0.;

  // initializes time counters for the different parts of the code below
  long double time_prep = 0.;
  long double time_errors = 0.;
  long double time_blossom = 0.;
  long double time_correction = 0.;

  // counts the time that parts 1 and 2 took to run
  auto time_end = clock();
  time_prep = (1.*time_end - 1.*time_start)/CLOCKS_PER_SEC;

  for (int run=0; run<trials; run++) {
    // PART 3: ASSIGNING ERRORS TO THE LATTICE
    time_start = clock();

    lattice->AssignErrors(rng); // assigns errors to edges
    lattice->ExciteVertices(); // assigns excitations to vertices

    #ifdef DEBUG
    int errors= 0;
    for (int e=0; e<lattice->GetEdges(); e++)
    if (lattice->HasError(e)) errors++;

    int* problematic_edges= new int[errors];
    int i =0;
    for (int e=0; e<lattice->GetEdges(); e++)
    if (lattice->HasError(e)) { problematic_edges[i]= e; i++; };
    #endif

    int excitations = lattice->GetNumberOfExcitations();

    #ifdef DEBUG
    std::cout << "# EXCITATIONS: " << excitations << std::endl;
    assert(excitations>0);
    #endif

    // creates list of excited vertices
    int *excited_to_complete = new int[excitations];

    int x=0;
    for (int v=0; v<vertices; v++) {
      if (lattice->IsExcited(v)) {
        excited_to_complete[x] = v;
        x++;
      };
    };

    #ifdef DEBUG
    assert(excited_to_complete != NULL);
    assert(x==excitations);
    #endif

    // measures time spent so far
    time_end = clock();
    time_errors += (1.*time_end - 1.*time_start)/CLOCKS_PER_SEC;
    time_start = clock();

    // PART 4: BLOSSOM V
    // number of edges of the complete graph that connect two excited vertices:
    int c_edges = .5*excitations*(excitations-1);

    #ifdef DEBUG
    std::cout << "# EDGES FOR BLOSSOM: " << c_edges << std::endl;
    assert(c_edges>0);
    #endif

    // reserves space for a complete graph with only excited vertices:
    PerfectMatching *pm = new PerfectMatching(excitations, c_edges);

    #ifdef DEBUG
    assert(pm!=NULL);
    #endif

    // Mike's options for Blossom V:
    struct PerfectMatching::Options options;
    options.verbose = false;
    options.update_duals_before = false;
    options.update_duals_after  = true;
    pm->options = options;

    // adds all the edges of the complete graph that connect two excited vertices
    // to the perfect matching graph
    for (int v0=0; v0<excitations; v0++) for (int v1=0; v1<v0; v1++) {
      long double distance = complete_graph->GetDistance(excited_to_complete[v0], excited_to_complete[v1]);
      #ifdef DEBUG
      assert(distance > 0.);
      #endif
      pm->AddEdge(v0, v1, distance);
    };

    // calls Blossom V to solve Perfect Matching problem
    pm->Solve();

    time_end = clock();
    time_blossom += (1.*time_end - 1.*time_start)/CLOCKS_PER_SEC;
    time_start = clock();

    #ifdef DEBUG
    int crossings0X = 0;
    int crossings0Y = 0;
    int crossings0Z = 0;
      for (int e=0; e<lattice->GetEdges(); e++) {
        if (lattice->HasError(e)) {
          int v0 = lattice->GetEdgeStart(e);
          int v1 = lattice->GetEdgeEnd(e);
          if (abs(lattice->GetVertexCellX(v0)-lattice->GetVertexCellX(v1))>1)
            crossings0X++;
          if (abs(lattice->GetVertexCellY(v0)-lattice->GetVertexCellY(v1))>1)
            crossings0Y++;
          if (abs(lattice->GetVertexCellZ(v0)-lattice->GetVertexCellZ(v1))>1)
            crossings0Z++;
          assert(v0>=0 and v0<vertices);
          assert(v1>=0 and v1<vertices);
          assert(lattice->GetVertexCellX(v0)>=0 and lattice->GetVertexCellX(v0)<L);
          assert(lattice->GetVertexCellY(v0)>=0 and lattice->GetVertexCellY(v0)<L);
          assert(lattice->GetVertexCellZ(v0)>=0 and lattice->GetVertexCellZ(v0)<L);
          assert(lattice->GetVertexCellX(v1)>=0 and lattice->GetVertexCellX(v1)<L);
          assert(lattice->GetVertexCellY(v1)>=0 and lattice->GetVertexCellY(v1)<L);
          assert(lattice->GetVertexCellZ(v1)>=0 and lattice->GetVertexCellZ(v1)<L);
      };
    };

    assert(crossings0X>=0);
    assert(crossings0Y>=0);
    assert(crossings0Z>=0);
    #endif




    // Flips edges in the minimum path between matched excited vertices
    for (int v0=0; v0<excitations; v0++) {
      int v1 = pm->GetMatch(v0);
      if (v1 < v0) {
        complete_graph->FlipTree(lattice, excited_to_complete[v0], excited_to_complete[v1]);
      };
    };

    // delete pm;

    // number of crossings prior to correction in each direction
    int crossingsX = 0;
    int crossingsY = 0;
    int crossingsZ = 0;

    // counts how many edges with error start at x=L and finish at x=0 (or vice versa)
    // this is the same as counting the edges that cross the plane x=0
    for (int e=0; e<lattice->GetEdges(); e++) {
      if (lattice->HasError(e)) {
        int v0 = lattice->GetEdgeStart(e);
        int v1 = lattice->GetEdgeEnd(e);

        // setting the surfces at the borders of the lattice
        // if (abs(lattice->GetVertexCellX(v0) - lattice->GetVertexCellX(v1))>1)
        //   crossingsX++;
        // if (abs(lattice->GetVertexCellY(v0) - lattice->GetVertexCellY(v1))>1)
        //   crossingsY++;
        // if (abs(lattice->GetVertexCellZ(v0) - lattice->GetVertexCellZ(v1))>1)
        //   crossingsZ++;

        int middle = floor(L/2);

        // setting the surfaces in the middle of the lattice
        if (lattice->GetVertexCellX(v0)==middle and lattice->GetVertexCellX(v1)==middle+1)
          crossingsX++;
        if (lattice->GetVertexCellX(v0)==middle+1 and lattice->GetVertexCellX(v1)==middle)
          crossingsX++;
        if (lattice->GetVertexCellY(v0)==middle and lattice->GetVertexCellY(v1)==middle+1)
          crossingsY++;
        if (lattice->GetVertexCellY(v0)==middle+1 and lattice->GetVertexCellY(v1)==middle)
          crossingsY++;
        if (lattice->GetVertexCellZ(v0)==middle and lattice->GetVertexCellZ(v1)==middle+1)
          crossingsZ++;
        if (lattice->GetVertexCellZ(v0)==middle+1 and lattice->GetVertexCellZ(v1)==middle)
          crossingsZ++;

        #ifdef DEBUG
          assert(v0>=0 and v0<vertices);
          assert(v1>=0 and v1<vertices);
          assert(lattice->GetVertexCellX(v0)>=0 and lattice->GetVertexCellX(v0)<L);
          assert(lattice->GetVertexCellY(v0)>=0 and lattice->GetVertexCellY(v0)<L);
          assert(lattice->GetVertexCellZ(v0)>=0 and lattice->GetVertexCellZ(v0)<L);
          assert(lattice->GetVertexCellX(v1)>=0 and lattice->GetVertexCellX(v1)<L);
          assert(lattice->GetVertexCellY(v1)>=0 and lattice->GetVertexCellY(v1)<L);
          assert(lattice->GetVertexCellZ(v1)>=0 and lattice->GetVertexCellZ(v1)<L);
        #endif
      };
    };

    #ifdef DEBUG
    assert(crossingsX>=0);
    assert(crossingsY>=0);
    assert(crossingsZ>=0);
    #endif

    // an odd number of crossings in any of the three surfaces means failure
    if (crossingsX%2==1 or crossingsY%2==1 or crossingsZ%2==1)
      failure_rate += 1./trials;

    #ifdef DEBUG
    std::cout << "# " <<  unit_cell->Name() << ": " << crossings0X
              << " turned into " << crossingsX << " X crossings";
    if (crossingsX%2) {
      std::cout << " (FAIL)" << std::endl;
      std::cout << "(FAIL) " << errors << " edges had an error." << std::endl;
      std::cout << "(FAIL) " << excitations << " vertices had excitations." << std::endl;
      for (int e=0; e<errors; e++)
      if (problematic_edges[e]<lattice->GetBlackEdges()) {
        std::cout << "(FAIL) Black edge " << problematic_edges[e] << "  had an error at cell ("
        << lattice->GetEdgeCellX(problematic_edges[e])  << ", "
        << lattice->GetEdgeCellY(problematic_edges[e])  << ", "
        << lattice->GetEdgeCellZ(problematic_edges[e])  << ") " << std::endl;
      } else {
        std::cout << "(FAIL) Red edge " << problematic_edges[e] << " had an error." << std::endl;
      };
      for (int v0=0; v0<excitations; v0++) {
        int v1 = pm->GetMatch(v0);
        if (v1 < v0) {
          complete_graph->PrintTree(lattice, excited_to_complete[v0], excited_to_complete[v1]);
        };
      };
      lattice->ExciteVertices ();
      std::cout << "(FAIL) " << lattice->GetNumberOfExcitations () << " vertices had excitations after correction." << std::endl;
    } else {
      std::cout << " (SUCCESS)" << std::endl;
    };

    std::cout << "# " <<  unit_cell->Name() << ": " << crossings0Y
              << " turned into " << crossingsY << " Y crossings";
    if (crossingsY%2) {
      std::cout << " (FAIL)" << std::endl;
      std::cout << "(FAIL) " << errors << " edges had an error." << std::endl;
      std::cout << "(FAIL) " << excitations << " vertices had excitations." << std::endl;
      for (int e=0; e<errors; e++)
      if (problematic_edges[e]<lattice->GetBlackEdges()) {
        std::cout << "(FAIL) Black edge " << problematic_edges[e] << "  had an error at cell ("
        << lattice->GetEdgeCellX(problematic_edges[e])  << ", "
        << lattice->GetEdgeCellY(problematic_edges[e])  << ", "
        << lattice->GetEdgeCellZ(problematic_edges[e])  << ") " << std::endl;
      } else {
        std::cout << "(FAIL) Red edge " << problematic_edges[e] << " had an error." << std::endl;
      };
      for (int v0=0; v0<excitations; v0++) {
        int v1 = pm->GetMatch(v0);
        if (v1 < v0) {
          complete_graph->PrintTree(lattice, excited_to_complete[v0], excited_to_complete[v1]);
        };
      };
      lattice->ExciteVertices ();
      std::cout << "(FAIL) " << lattice->GetNumberOfExcitations () << " vertices had excitations after correction." << std::endl;
    } else {
      std::cout << " (SUCCESS)" << std::endl;
    };

    std::cout << "# " <<  unit_cell->Name() << ": " << crossings0Z
              << " turned into " << crossingsZ << " Z crossings";
    if (crossingsZ%2) {
      std::cout << " (FAIL)" << std::endl;
      std::cout << "(FAIL) " << errors << " edges had an error." << std::endl;
      std::cout << "(FAIL) " << excitations << " vertices had excitations." << std::endl;
      for (int e=0; e<errors; e++)
        if (problematic_edges[e]<lattice->GetBlackEdges()) {
          std::cout << "(FAIL) Black edge " << problematic_edges[e] << "  had an error at cell ("
          << lattice->GetEdgeCellX(problematic_edges[e])  << ", "
          << lattice->GetEdgeCellY(problematic_edges[e])  << ", "
          << lattice->GetEdgeCellZ(problematic_edges[e])  << ") " << std::endl;
        } else {
          std::cout << "(FAIL) Red edge " << problematic_edges[e] << " had an error." << std::endl;
        };
      for (int v0=0; v0<excitations; v0++) {
        int v1 = pm->GetMatch(v0);
        if (v1 < v0) {
          complete_graph->PrintTree(lattice, excited_to_complete[v0], excited_to_complete[v1]);
        };
      };
      lattice->ExciteVertices ();
      std::cout << "(FAIL) " << lattice->GetNumberOfExcitations () << " vertices had excitations after correction." << std::endl;
    } else {
      std::cout << " (SUCCESS)" << std::endl;
    };

    #endif

    #ifdef DEBUG
    lattice->ExciteVertices ();
    if (lattice->GetNumberOfExcitations()>0) {
       std::cout << "FAILURE: OPEN LOOPS with " << lattice->GetNumberOfExcitations() << " excitations." << std::endl;
       std::cout << "OPEN LOOPS FAILURE: " << errors << " edges had an error." << std::endl;
       std::cout << "OPEN LOOPS FAILURE: " << excitations << " vertices had excitations." << std::endl;
       for (int e=0; e<errors; e++)
       std::cout << "OPEN LOOPS FAILURE: Edge " << problematic_edges[e] << " with weight " <<
       lattice->GetEdgeWeight(problematic_edges[e]) << " originally had an error." << std::endl;
       for (int e=0; e<lattice->GetEdges(); e++)
       if (lattice->HasError(e))
       std::cout << "OPEN LOOPS FAILURE: Edge " << e << " with weight " <<
       lattice->GetEdgeWeight(e) << " had an error after correction." << std::endl;
       for (int v0=0; v0<excitations; v0++) {
         int v1 = pm->GetMatch(v0);
         if (v1 < v0) {
           std::cout << "OPEN LOOPS FAILURE: Match of " << v0 << " is " << v1 << std::endl;
           complete_graph->PrintTree(lattice, excited_to_complete[v0], excited_to_complete[v1]);
         };
       };
    };
    #endif

    time_end = clock();
    time_correction += (1.*time_end - 1.*time_start)/CLOCKS_PER_SEC;

    delete pm;

    delete [] excited_to_complete;
  };

  std::cout << "# Time spent building the network: " << time_prep << "s" << std::endl;
  std::cout << "# Time spent distributing the errors: " << time_errors << "s" << std::endl;
  std::cout << "# Time spent running the Blossom algorithm: " << time_blossom << "s" << std::endl;
  std::cout << "# Time spent correcting the errors: " << time_correction << "s" << std::endl;

  std::cout.precision(6);

  std::cout << "# L \t p_x \t\t p_z \t\t SPAM \t\t trials \t failure rate" << std::endl;
  std::cout << std::fixed << " " << L << " \t " << px << " \t " << pz << " \t "
      << spam_error << " \t " << trials << " \t\t " << failure_rate << std::endl;

  delete unit_cell;
  delete lattice;
  delete complete_graph;

  return 0;
}
