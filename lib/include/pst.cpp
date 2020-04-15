#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("pst", 4, 24, 24);

	 // vertex 0 located at (0.0, 0.0, 0.0)
	 // vertex 1 located at (0.5, 0.0, 0.5)
	 // vertex 2 located at (0.5, 0.5, 0.0)
	 // vertex 3 located at (0.0, 0.5, 0.5)

	 unit_cell->SetEdge(0, 0, 2, 0, 0, 0);
	 unit_cell->SetEdge(1, 1, 3, 0, -1, 0);
	 unit_cell->SetEdge(2, 2, 0, 1, 0, 0);
	 unit_cell->SetEdge(3, 3, 1, -1, 1, 0);
	 unit_cell->SetEdge(4, 0, 3, 0, 0, 0);
	 unit_cell->SetEdge(5, 1, 2, 0, -1, 1);
	 unit_cell->SetEdge(6, 2, 1, 0, 0, -1);
	 unit_cell->SetEdge(7, 3, 0, 0, 1, 0);
	 unit_cell->SetEdge(8, 0, 1, 0, 0, 0);
	 unit_cell->SetEdge(9, 2, 3, 1, 0, -1);
	 unit_cell->SetEdge(10, 3, 2, -1, 0, 0);
	 unit_cell->SetEdge(11, 1, 0, 0, 0, 1);
	 unit_cell->SetEdge(12, 0, 2, -1, -1, 0);
	 unit_cell->SetEdge(13, 1, 3, 1, 0, 0);
	 unit_cell->SetEdge(14, 2, 0, 0, 1, 0);
	 unit_cell->SetEdge(15, 3, 1, 0, 0, 0);
	 unit_cell->SetEdge(16, 0, 3, 0, -1, -1);
	 unit_cell->SetEdge(17, 1, 2, 0, 0, 0);
	 unit_cell->SetEdge(18, 2, 1, 0, 1, 0);
	 unit_cell->SetEdge(19, 3, 0, 0, 0, 1);
	 unit_cell->SetEdge(20, 0, 1, -1, 0, -1);
	 unit_cell->SetEdge(21, 2, 3, 0, 0, 0);
	 unit_cell->SetEdge(22, 3, 2, 0, 0, 1);
	 unit_cell->SetEdge(23, 1, 0, 1, 0, 0);

	 unit_cell->SetFace(0, 3);
	 unit_cell->SetEdgeInFace(0, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 8, 0, 0, 0);

	 unit_cell->SetFace(1, 3);
	 unit_cell->SetEdgeInFace(1, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 14, 0, -1, 1);
	 unit_cell->SetEdgeInFace(1, 2, 11, 0, 0, 0);

	 unit_cell->SetFace(2, 3);
	 unit_cell->SetEdgeInFace(2, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 13, 0, 0, -1);
	 unit_cell->SetEdgeInFace(2, 2, 9, 0, 0, 0);

	 unit_cell->SetFace(3, 3);
	 unit_cell->SetEdgeInFace(3, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 12, 0, 1, 0);
	 unit_cell->SetEdgeInFace(3, 2, 10, 0, 0, 0);

	 unit_cell->SetFace(4, 3);
	 unit_cell->SetEdgeInFace(4, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 0, 0, 0, 0);

	 unit_cell->SetFace(5, 3);
	 unit_cell->SetEdgeInFace(5, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 16, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 2, 1, 0, 0, 0);

	 unit_cell->SetFace(6, 3);
	 unit_cell->SetEdgeInFace(6, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 19, 1, 0, -1);
	 unit_cell->SetEdgeInFace(6, 2, 2, 0, 0, 0);

	 unit_cell->SetFace(7, 3);
	 unit_cell->SetEdgeInFace(7, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 18, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 3, 0, 0, 0);

	 unit_cell->SetFace(8, 3);
	 unit_cell->SetEdgeInFace(8, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 4, 0, 0, 0);

	 unit_cell->SetFace(9, 3);
	 unit_cell->SetEdgeInFace(9, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 20, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 2, 6, 0, 0, 0);

	 unit_cell->SetFace(10, 3);
	 unit_cell->SetEdgeInFace(10, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 23, -1, 1, 0);
	 unit_cell->SetEdgeInFace(10, 2, 7, 0, 0, 0);

	 unit_cell->SetFace(11, 3);
	 unit_cell->SetEdgeInFace(11, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 22, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 2, 5, 0, 0, 0);

	 unit_cell->SetFace(12, 3);
	 unit_cell->SetEdgeInFace(12, 0, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 3, 0, -1, -1);
	 unit_cell->SetEdgeInFace(12, 2, 20, 0, 0, 0);

	 unit_cell->SetFace(13, 3);
	 unit_cell->SetEdgeInFace(13, 0, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 2, 23, 0, 0, 0);

	 unit_cell->SetFace(14, 3);
	 unit_cell->SetEdgeInFace(14, 0, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 1, 0, 1, 0);
	 unit_cell->SetEdgeInFace(14, 2, 21, 0, 0, 0);

	 unit_cell->SetFace(15, 3);
	 unit_cell->SetEdgeInFace(15, 0, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 1, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(15, 2, 22, 0, 0, 0);

	 unit_cell->SetFace(16, 3);
	 unit_cell->SetEdgeInFace(16, 0, 20, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 1, 5, -1, 0, -1);
	 unit_cell->SetEdgeInFace(16, 2, 12, 0, 0, 0);

	 unit_cell->SetFace(17, 3);
	 unit_cell->SetEdgeInFace(17, 0, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 1, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(17, 2, 13, 0, 0, 0);

	 unit_cell->SetFace(18, 3);
	 unit_cell->SetEdgeInFace(18, 0, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 1, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 2, 14, 0, 0, 0);

	 unit_cell->SetFace(19, 3);
	 unit_cell->SetEdgeInFace(19, 0, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 1, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(19, 2, 15, 0, 0, 0);

	 unit_cell->SetFace(20, 3);
	 unit_cell->SetEdgeInFace(20, 0, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 1, 9, -1, -1, 0);
	 unit_cell->SetEdgeInFace(20, 2, 16, 0, 0, 0);

	 unit_cell->SetFace(21, 3);
	 unit_cell->SetEdgeInFace(21, 0, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 1, 8, 0, 1, 0);
	 unit_cell->SetEdgeInFace(21, 2, 18, 0, 0, 0);

	 unit_cell->SetFace(22, 3);
	 unit_cell->SetEdgeInFace(22, 0, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 1, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 2, 19, 0, 0, 0);

	 unit_cell->SetFace(23, 3);
	 unit_cell->SetEdgeInFace(23, 0, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(23, 1, 10, 1, 0, 0);
	 unit_cell->SetEdgeInFace(23, 2, 17, 0, 0, 0);

	 return unit_cell;
}
