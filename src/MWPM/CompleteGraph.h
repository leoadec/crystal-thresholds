#include "../include/Lattice.h"

class CompleteGraph {
private:
  int vertices;
  int **neighbors;
  int **tree;
  long double **distance;
  long double **weight;

  bool neighbors_allocated;

public:
  ~CompleteGraph();
  CompleteGraph(int v);

  int GetSize(){ return vertices; }

  long double GetDistance(int v0, int v1) { return distance[v0][v1]; }

  int GetEdges(){ return .5*vertices*(vertices-1); }

  void DetermineNeighbors(Lattice *lattice);
  void Dijkstra();

  void FlipTree(Lattice *lattice, int origin, int tip);
  void PrintTree(Lattice *lattice, int origin, int tip);
};
