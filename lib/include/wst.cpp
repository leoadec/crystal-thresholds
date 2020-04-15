#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("wst", 4, 15, 18);

	 unit_cell->AllowPolyEdges();

	 unit_cell->SetDoubleEdge(0, 0, 0, 0, 0, 1);
	 unit_cell->SetDoubleEdge(1, 0, 0, 1, 0, 0);
	 unit_cell->SetDoubleEdge(2, 0, 0, 0, 1, 0);

	 unit_cell->SetEdge(3, 0, 1, 0, 0, 0);
	 unit_cell->SetEdge(4, 0, 2, 0, 0, 0);
	 unit_cell->SetEdge(5, 0, 3, 0, 0, 0);

	 unit_cell->SetEdge(3, 0, 1, 0, 0, 0);
	 unit_cell->SetEdge(4, 0, 2, 0, 0, 0);
	 unit_cell->SetEdge(5, 0, 3, 0, 0, 0);

	 unit_cell->SetEdge(6, 1, 0, 1, 0, 0);
	 unit_cell->SetEdge(7, 3, 0, 1, 0, 0);

	 unit_cell->SetEdge(8, 2, 0, 0, 1, 0);
	 unit_cell->SetEdge(9, 3, 0, 0, 1, 0);

	 unit_cell->SetEdge(10, 1, 0, 0, 0, 1);
	 unit_cell->SetEdge(11, 2, 0, 0, 0, 1);

	 unit_cell->SetEdge(12, 1, 0, 1, 0, 1);
	 unit_cell->SetEdge(13, 2, 0, 0, 1, 1);
	 unit_cell->SetEdge(14, 3, 0, 1, 1, 0);

	 unit_cell->SetFace(0, 3);
	 unit_cell->SetEdgeInFace(0, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 7, 0, 0, 0);

	 unit_cell->SetFace(1, 3);
	 unit_cell->SetEdgeInFace(1, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 2, 1, 0, 1, 0);

 	 unit_cell->SetFace(2, 3);
 	 unit_cell->SetEdgeInFace(2, 0, 2, 0, 0, 0);
 	 unit_cell->SetEdgeInFace(2, 1, 5, 0, 0, 0);
 	 unit_cell->SetEdgeInFace(2, 2, 9, 0, 0, 0);

	 unit_cell->SetFace(3, 3);
 	 unit_cell->SetEdgeInFace(3, 0, 2, 0, 0, 0);
 	 unit_cell->SetEdgeInFace(3, 1, 5, 0, 0, 0);
 	 unit_cell->SetEdgeInFace(3, 2, 9, 0, 0, 0);

 	 unit_cell->SetFace(4, 3);
	 unit_cell->SetEdgeInFace(4, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 2, 1, 0, 0);

	 unit_cell->SetFace(5, 3);
	 unit_cell->SetEdgeInFace(5, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 2, 2, 1, 0, 0);

	 unit_cell->SetFace(6, 3);
	 unit_cell->SetEdgeInFace(6, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 2, 10, 0, 0, 0);

	 unit_cell->SetFace(7, 3);
	 unit_cell->SetEdgeInFace(7, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 0, 1, 0, 0);

 	 unit_cell->SetFace(8, 3);
 	 unit_cell->SetEdgeInFace(8, 0, 1, 0, 0, 0);
 	 unit_cell->SetEdgeInFace(8, 1, 3, 0, 0, 0);
 	 unit_cell->SetEdgeInFace(8, 2, 6, 0, 0, 0);

	 unit_cell->SetFace(9, 3);
 	 unit_cell->SetEdgeInFace(9, 0, 1, 0, 0, 0);
 	 unit_cell->SetEdgeInFace(9, 1, 3, 0, 0, 0);
 	 unit_cell->SetEdgeInFace(9, 2, 6, 0, 0, 0);

	 unit_cell->SetFace(10, 3);
	 unit_cell->SetEdgeInFace(10, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 2, 1, 0, 0, 1);

	 unit_cell->SetFace(11, 3);
	 unit_cell->SetEdgeInFace(11, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 1, 0, 0, 1);

	 unit_cell->SetFace(12, 3);
	 unit_cell->SetEdgeInFace(12, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 2, 8, 0, 0, 0);

	 unit_cell->SetFace(13, 3);
	 unit_cell->SetEdgeInFace(13, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 2, 2, 0, 0, 1);

	 unit_cell->SetFace(14, 3);
	 unit_cell->SetEdgeInFace(14, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 2, 0, 0, 0, 0);

	 unit_cell->SetFace(15, 3);
	 unit_cell->SetEdgeInFace(15, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 1, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 2, 0, 0, 0, 0);

	 unit_cell->SetFace(16, 3);
	 unit_cell->SetEdgeInFace(16, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 1, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 2, 0, 0, 1, 0);

 	 unit_cell->SetFace(17, 3);
 	 unit_cell->SetEdgeInFace(17, 0, 8, 0, 0, 0);
 	 unit_cell->SetEdgeInFace(17, 1, 13, 0, 0, 0);
 	 unit_cell->SetEdgeInFace(17, 2, 0, 0, 1, 0);

	 return unit_cell;
}
