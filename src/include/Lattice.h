#include <iostream>
#include <cmath>

#include "UnitCell.h"

#include "../../contrib/RngStream/RngStream.h"


class Lattice {
private:
  int L; // lattice size;
  int cells;

  int vpc;
  int epc;
  int repc;
  int fpc;

  int vertices; // total number of vertices
  int edges; // total number of blue edges
  int red_edges; // total number of red edges
  int faces; // total number of faces

  bool has_lookup_table;
  int **edge_from_vertices; // given two vertices, find the id of the edge connecting them

  bool *v_excited; // list of whether each vertex is excited, initializes to false

  bool *e_error; // list of whether each edge has an error, initializes to false
  int *e_start; // on which vertex each edge starts
  int *e_end; // on which vertex each edge ends

  bool has_poly;
  int *e_poly;

  bool *e_red_error;
  int *e_red_start;
  int *e_red_end;

  bool has_weights; // whether weights have been assigned
  long double *e_weight; // weight of each edge
  long double *e_red_weight;

  long double PX; // stores probability of X errors, only used with red_edge option 3, "random"

  int *f_length; // number of edges in each face
  int **f_edges; // list of edges in each face

  int vertex_id(int n, int cell_x, int cell_y, int cell_z) {
    return ( L*L*((L+cell_z)%L) + L*((L+cell_y)%L) + ((L+cell_x)%L) )*vpc + n;
  };

  int edge_id(int n, int cell_x, int cell_y, int cell_z) {
    return ( L*L*((L+cell_z)%L) + L*((L+cell_y)%L) + ((L+cell_x)%L) )*epc + n;
  };

  int red_edge_id(int n, int cell_x, int cell_y, int cell_z) {
    return ( L*L*((L+cell_z)%L) + L*((L+cell_y)%L) + ((L+cell_x)%L) )*repc + n;
  };

  int face_id(int n, int cell_x, int cell_y, int cell_z) {
    return ( L*L*((L+cell_z)%L) + L*((L+cell_y)%L) + ((L+cell_x)%L) )*fpc + n;
  };

  public:
    // returns true if tiling information is available for the lattice
    bool TilingInfo() {
      if (faces>0) return true;
      return false;
    };

    ~Lattice();
    Lattice(int side, UnitCell *unit_cell);


    void MakeLookupTable();
    void AssignWeights(long double px, long double pz, long double spam_error, int red_edge_option, RngStream *rng);
    long double EdgeErrorProbability(int e);
    void AssignErrors(int seed);
    void AssignErrors(RngStream *rng);
    void FlipEdge(int v0, int v1);
    int PrintEdge(int v0, int v1);
    void ExciteVertices();

    // returns number of vertices
    int Vertices() {return vertices;}
    int GetNumberOfExcitations();
    bool IsExcited(int v);

    int GetEdges();
    int GetBlackEdges();
    int GetEdgeStart(int e);
    int GetEdgeEnd(int e);
    long double GetEdgeWeight(int e);

    bool HasError(int e);

    int FirstEdgeInCell(int cx, int cy, int cz);
    int LastEdgeInCell(int cx, int cy, int cz);

    // tells whether two black edges are neighbors
    bool BlackEdgesTouch(int e1, int e2);

    int GetEdgeCellX(int e);
    int GetEdgeCellY(int e);
    int GetEdgeCellZ(int e);

    int GetVertexCellX(int v);
    int GetVertexCellY(int v);
    int GetVertexCellZ(int v);
};
