#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("lcy", 4, 12, 12);

	 // vertex 0 located at (0.375, 0.375, 0.375)
	 // vertex 1 located at (0.875, 0.125, 0.625)
	 // vertex 2 located at (0.125, 0.625, 0.875)
	 // vertex 3 located at (0.625, 0.875, 0.125)

	 unit_cell->SetEdge(0, 0, 2, 0, 0, -1);
	 unit_cell->SetEdge(1, 1, 3, 0, -1, 0);
	 unit_cell->SetEdge(2, 2, 0, 0, 0, 0);
	 unit_cell->SetEdge(3, 3, 1, 0, 1, -1);
	 unit_cell->SetEdge(4, 0, 1, -1, 0, 0);
	 unit_cell->SetEdge(5, 1, 2, 1, -1, 0);
	 unit_cell->SetEdge(6, 2, 3, 0, 0, 1);
	 unit_cell->SetEdge(7, 3, 0, 0, 1, 0);
	 unit_cell->SetEdge(8, 1, 0, 0, 0, 0);
	 unit_cell->SetEdge(9, 2, 1, -1, 0, 0);
	 unit_cell->SetEdge(10, 3, 2, 1, 0, -1);
	 unit_cell->SetEdge(11, 0, 3, 0, 0, 0);

	 unit_cell->SetFace(0, 5);
	 unit_cell->SetEdgeInFace(0, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 5, -1, 1, 0);
	 unit_cell->SetEdgeInFace(0, 2, 1, -1, 1, 0);
	 unit_cell->SetEdgeInFace(0, 3, 10, -1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 4, 0, 0, 0, 0);

	 unit_cell->SetFace(1, 5);
	 unit_cell->SetEdgeInFace(1, 0, 3, 0, -1, 1);
	 unit_cell->SetEdgeInFace(1, 1, 6, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 2, 2, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 3, 11, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 4, 1, 0, 0, 0);

	 unit_cell->SetFace(2, 5);
	 unit_cell->SetEdgeInFace(2, 0, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 1, 7, 0, -1, 1);
	 unit_cell->SetEdgeInFace(2, 2, 3, 0, -1, 1);
	 unit_cell->SetEdgeInFace(2, 3, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 4, 2, 0, 0, 0);

	 unit_cell->SetFace(3, 5);
	 unit_cell->SetEdgeInFace(3, 0, 1, 0, 1, 0);
	 unit_cell->SetEdgeInFace(3, 1, 4, 1, 1, 0);
	 unit_cell->SetEdgeInFace(3, 2, 0, 1, 1, 0);
	 unit_cell->SetEdgeInFace(3, 3, 9, 1, 1, -1);
	 unit_cell->SetEdgeInFace(3, 4, 3, 0, 0, 0);

	 unit_cell->SetFace(4, 5);
	 unit_cell->SetEdgeInFace(4, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 3, 0, -1, 1);
	 unit_cell->SetEdgeInFace(4, 2, 6, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 3, 5, -1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 4, 4, 0, 0, 0);

	 unit_cell->SetFace(5, 5);
	 unit_cell->SetEdgeInFace(5, 0, 9, 1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 0, 1, 0, 1);
	 unit_cell->SetEdgeInFace(5, 2, 7, 1, -1, 1);
	 unit_cell->SetEdgeInFace(5, 3, 6, 1, -1, 0);
	 unit_cell->SetEdgeInFace(5, 4, 5, 0, 0, 0);

	 unit_cell->SetFace(6, 5);
	 unit_cell->SetEdgeInFace(6, 0, 10, -1, 0, 1);
	 unit_cell->SetEdgeInFace(6, 1, 1, -1, 1, 1);
	 unit_cell->SetEdgeInFace(6, 2, 4, 0, 1, 1);
	 unit_cell->SetEdgeInFace(6, 3, 7, 0, 0, 1);
	 unit_cell->SetEdgeInFace(6, 4, 6, 0, 0, 0);

	 unit_cell->SetFace(7, 5);
	 unit_cell->SetEdgeInFace(7, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 5, -1, 1, 0);
	 unit_cell->SetEdgeInFace(7, 3, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(7, 4, 7, 0, 0, 0);

	 unit_cell->SetFace(8, 5);
	 unit_cell->SetEdgeInFace(8, 0, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 0, 1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 4, 8, 0, 0, 0);

	 unit_cell->SetFace(9, 5);
	 unit_cell->SetEdgeInFace(9, 0, 5, -1, 1, 0);
	 unit_cell->SetEdgeInFace(9, 1, 1, -1, 1, 0);
	 unit_cell->SetEdgeInFace(9, 2, 11, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 3, 8, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 4, 9, 0, 0, 0);

	 unit_cell->SetFace(10, 5);
	 unit_cell->SetEdgeInFace(10, 0, 6, 0, 0, -1);
	 unit_cell->SetEdgeInFace(10, 1, 2, 0, 0, -1);
	 unit_cell->SetEdgeInFace(10, 2, 8, 0, 0, -1);
	 unit_cell->SetEdgeInFace(10, 3, 9, 1, 0, -1);
	 unit_cell->SetEdgeInFace(10, 4, 10, 0, 0, 0);

	 unit_cell->SetFace(11, 5);
	 unit_cell->SetEdgeInFace(11, 0, 7, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 1, 3, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 2, 9, 1, 0, -1);
	 unit_cell->SetEdgeInFace(11, 3, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 4, 11, 0, 0, 0);

	 return unit_cell;
}
