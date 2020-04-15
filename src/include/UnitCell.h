#include <string>

class UnitCell {
private:
	short vertices; // number of vertices per unit cell
	short edges; // number of edges per unit cell
	short faces; // number of faces per unit cell

 	std::string name; // name of the lattice

  // edges are always assumed to start at the (0,0,0) cell
	short *e_start; // list of starting vertices of the edges
	short *e_end; // list of starting vertices of the edges
	short *e_Dx; // displacement in the x direction
	short *e_Dy; // displacement in the y direction
	short *e_Dz; // displacement in the z direction
	bool poly_edges; // whether we have double edges
	short *e_poly; // the weight of each edge (e.g. single or double)

	// faces are collections of edges
	short *f_length; // list of number of edges per face
	short **f_edges; // list of edges in the face
	short **f_Dx; // displacement in the x direction
	short **f_Dy; // displacement in the y direction
	short **f_Dz; // displacement in the z direction

public:
	UnitCell(std::string _name, short v, short e);
	UnitCell(std::string _name, short v, short e, short f);

	~UnitCell();

	bool TilingInfo();

	void AllowPolyEdges();
	bool HasPolyEdges();

	std::string Name();

	short GetVertices();
	short GetEdges();
	short GetFaces();

	short GetEdgeStart(short e);
	short GetEdgeEnd(short e);
	short GetEdgeDX(short e);
	short GetEdgeDY(short e);
	short GetEdgeDZ(short e);
	short GetPolyWeight(short e);

	bool SetEdge(short e, short v1, short v2, short cx, short cy, short cz);
	bool SetDoubleEdge(short e, short v1, short v2, short cx, short cy, short cz);

	short GetEdgesInFace(short f);
	short GetEdgeInFace(short f, short n);
	short GetEdgeCellXInFace(short f, short n);
	short GetEdgeCellYInFace(short f, short n);
	short GetEdgeCellZInFace(short f, short n);

	bool SetFace(short f, short e);
	bool SetEdgeInFace(short f, short n, short e, short cx, short cy, short cz);
};

extern UnitCell* _UnitCell();
