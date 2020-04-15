#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("smt", 6, 18, 18);

	 // vertex 0 located at (0.47005, 0.10599, 0.0)
	 // vertex 1 located at (0.36406000000000005, 0.47005, 0.16666666666666666)
	 // vertex 2 located at (0.89401, 0.36406000000000005, 0.3333333333333333)
	 // vertex 3 located at (0.5299499999999999, 0.89401, 0.5)
	 // vertex 4 located at (0.63594, 0.5299499999999999, 0.6666666666666666)
	 // vertex 5 located at (0.10599, 0.63594, 0.8333333333333334)

	 unit_cell->SetEdge(0, 0, 5, 0, -1, -1);
	 unit_cell->SetEdge(1, 1, 0, 0, 0, 0);
	 unit_cell->SetEdge(2, 2, 1, 1, 0, 0);
	 unit_cell->SetEdge(3, 3, 2, 0, 1, 0);
	 unit_cell->SetEdge(4, 4, 3, 0, 0, 0);
	 unit_cell->SetEdge(5, 5, 4, -1, 0, 0);
	 unit_cell->SetEdge(6, 0, 3, 0, -1, 0);
	 unit_cell->SetEdge(7, 1, 4, 0, 0, 0);
	 unit_cell->SetEdge(8, 2, 5, 1, 0, 0);
	 unit_cell->SetEdge(9, 3, 0, 0, 1, 1);
	 unit_cell->SetEdge(10, 4, 1, 0, 0, 1);
	 unit_cell->SetEdge(11, 5, 2, -1, 0, 1);
	 unit_cell->SetEdge(12, 0, 4, 0, 0, -1);
	 unit_cell->SetEdge(13, 1, 5, 0, 0, -1);
	 unit_cell->SetEdge(14, 2, 0, 0, 0, 0);
	 unit_cell->SetEdge(15, 3, 1, 0, 0, 0);
	 unit_cell->SetEdge(16, 4, 2, 0, 0, 0);
	 unit_cell->SetEdge(17, 5, 3, 0, 0, 0);

	 unit_cell->SetFace(0, 3);
	 unit_cell->SetEdgeInFace(0, 0, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 3, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 2, 6, 0, 0, 0);

	 unit_cell->SetFace(1, 4);
	 unit_cell->SetEdgeInFace(1, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 13, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 2, 15, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 3, 6, 0, 0, 0);

	 unit_cell->SetFace(2, 7);
	 unit_cell->SetEdgeInFace(2, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 17, 0, -1, 0);
	 unit_cell->SetEdgeInFace(2, 2, 5, 0, -1, 0);
	 unit_cell->SetEdgeInFace(2, 3, 4, -1, -1, 0);
	 unit_cell->SetEdgeInFace(2, 4, 3, -1, -1, 0);
	 unit_cell->SetEdgeInFace(2, 5, 2, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 6, 1, 0, 0, 0);

	 unit_cell->SetFace(3, 3);
	 unit_cell->SetEdgeInFace(3, 0, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 7, 0, 0, 0);

	 unit_cell->SetFace(4, 3);
	 unit_cell->SetEdgeInFace(4, 0, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 8, 0, 0, 0);

	 unit_cell->SetFace(5, 3);
	 unit_cell->SetEdgeInFace(5, 0, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 0, 0, 1, 1);
	 unit_cell->SetEdgeInFace(5, 2, 9, 0, 0, 0);

	 unit_cell->SetFace(6, 3);
	 unit_cell->SetEdgeInFace(6, 0, 12, 0, 0, 1);
	 unit_cell->SetEdgeInFace(6, 1, 1, 0, 0, 1);
	 unit_cell->SetEdgeInFace(6, 2, 10, 0, 0, 0);

	 unit_cell->SetFace(7, 3);
	 unit_cell->SetEdgeInFace(7, 0, 13, 0, 0, 1);
	 unit_cell->SetEdgeInFace(7, 1, 2, -1, 0, 1);
	 unit_cell->SetEdgeInFace(7, 2, 11, 0, 0, 0);

	 unit_cell->SetFace(8, 4);
	 unit_cell->SetEdgeInFace(8, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 7, 0, 0, 0);

	 unit_cell->SetFace(9, 4);
	 unit_cell->SetEdgeInFace(9, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 15, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 2, 17, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 3, 8, 0, 0, 0);

	 unit_cell->SetFace(10, 4);
	 unit_cell->SetEdgeInFace(10, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 16, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 2, 12, 0, 1, 1);
	 unit_cell->SetEdgeInFace(10, 3, 9, 0, 0, 0);

	 unit_cell->SetFace(11, 4);
	 unit_cell->SetEdgeInFace(11, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 13, 0, 0, 1);
	 unit_cell->SetEdgeInFace(11, 3, 10, 0, 0, 0);

	 unit_cell->SetFace(12, 4);
	 unit_cell->SetEdgeInFace(12, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 12, -1, 0, 1);
	 unit_cell->SetEdgeInFace(12, 2, 14, -1, 0, 1);
	 unit_cell->SetEdgeInFace(12, 3, 11, 0, 0, 0);

	 unit_cell->SetFace(13, 7);
	 unit_cell->SetEdgeInFace(13, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 12, 0, 0, 1);
	 unit_cell->SetEdgeInFace(13, 2, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(13, 3, 5, 0, -1, 0);
	 unit_cell->SetEdgeInFace(13, 4, 4, -1, -1, 0);
	 unit_cell->SetEdgeInFace(13, 5, 3, -1, -1, 0);
	 unit_cell->SetEdgeInFace(13, 6, 2, -1, 0, 0);

	 unit_cell->SetFace(14, 7);
	 unit_cell->SetEdgeInFace(14, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 13, 1, 0, 1);
	 unit_cell->SetEdgeInFace(14, 2, 1, 1, 0, 1);
	 unit_cell->SetEdgeInFace(14, 3, 0, 1, 0, 1);
	 unit_cell->SetEdgeInFace(14, 4, 5, 1, -1, 0);
	 unit_cell->SetEdgeInFace(14, 5, 4, 0, -1, 0);
	 unit_cell->SetEdgeInFace(14, 6, 3, 0, -1, 0);

	 unit_cell->SetFace(15, 7);
	 unit_cell->SetEdgeInFace(15, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 1, 14, 0, 1, 1);
	 unit_cell->SetEdgeInFace(15, 2, 2, 0, 1, 1);
	 unit_cell->SetEdgeInFace(15, 3, 1, 1, 1, 1);
	 unit_cell->SetEdgeInFace(15, 4, 0, 1, 1, 1);
	 unit_cell->SetEdgeInFace(15, 5, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(15, 6, 4, 0, 0, 0);

	 unit_cell->SetFace(16, 7);
	 unit_cell->SetEdgeInFace(16, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 1, 15, 0, 0, 1);
	 unit_cell->SetEdgeInFace(16, 2, 3, 0, 0, 1);
	 unit_cell->SetEdgeInFace(16, 3, 2, 0, 1, 1);
	 unit_cell->SetEdgeInFace(16, 4, 1, 1, 1, 1);
	 unit_cell->SetEdgeInFace(16, 5, 0, 1, 1, 1);
	 unit_cell->SetEdgeInFace(16, 6, 5, 1, 0, 0);

	 unit_cell->SetFace(17, 7);
	 unit_cell->SetEdgeInFace(17, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 1, 16, -1, 0, 1);
	 unit_cell->SetEdgeInFace(17, 2, 4, -1, 0, 1);
	 unit_cell->SetEdgeInFace(17, 3, 3, -1, 0, 1);
	 unit_cell->SetEdgeInFace(17, 4, 2, -1, 1, 1);
	 unit_cell->SetEdgeInFace(17, 5, 1, 0, 1, 1);
	 unit_cell->SetEdgeInFace(17, 6, 0, 0, 1, 1);

	 return unit_cell;
}
