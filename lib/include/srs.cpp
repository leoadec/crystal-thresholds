#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("srs", 8, 12, 12);

	 // vertex 0 located at (0.125, 0.125, 0.125)
	 // vertex 1 located at (0.125, 0.875, 0.375)
	 // vertex 2 located at (0.375, 0.875, 0.625)
	 // vertex 3 located at (0.375, 0.125, 0.875)
	 // vertex 4 located at (0.625, 0.375, 0.875)
	 // vertex 5 located at (0.875, 0.375, 0.125)
	 // vertex 6 located at (0.875, 0.625, 0.375)
	 // vertex 7 located at (0.625, 0.625, 0.625)

	 unit_cell->SetEdge(0, 0, 1, 0, -1, 0);
	 unit_cell->SetEdge(1, 1, 2, 0, 0, 0);
	 unit_cell->SetEdge(2, 2, 3, 0, 1, 0);
	 unit_cell->SetEdge(3, 3, 0, 0, 0, 1);
	 unit_cell->SetEdge(4, 0, 5, -1, 0, 0);
	 unit_cell->SetEdge(5, 4, 3, 0, 0, 0);
	 unit_cell->SetEdge(6, 6, 1, 1, 0, 0);
	 unit_cell->SetEdge(7, 2, 7, 0, 0, 0);
	 unit_cell->SetEdge(8, 7, 4, 0, 0, 0);
	 unit_cell->SetEdge(9, 4, 5, 0, 0, 1);
	 unit_cell->SetEdge(10, 5, 6, 0, 0, 0);
	 unit_cell->SetEdge(11, 6, 7, 0, 0, 0);

	 unit_cell->SetFace(0, 10);
	 unit_cell->SetEdgeInFace(0, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 10, -1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 11, -1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 3, 8, -1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 4, 9, -1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 5, 4, 0, 0, 1);
	 unit_cell->SetEdgeInFace(0, 6, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 7, 2, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 8, 1, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 9, 0, 0, 0, 0);

	 unit_cell->SetFace(1, 10);
	 unit_cell->SetEdgeInFace(1, 0, 6, -1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 11, -1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 2, 8, -1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 3, 9, -1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 4, 10, -1, 0, 1);
	 unit_cell->SetEdgeInFace(1, 5, 6, -1, 0, 1);
	 unit_cell->SetEdgeInFace(1, 6, 0, 0, 1, 1);
	 unit_cell->SetEdgeInFace(1, 7, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 8, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 9, 1, 0, 0, 0);

	 unit_cell->SetFace(2, 10);
	 unit_cell->SetEdgeInFace(2, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 3, 10, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 4, 11, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 5, 7, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 6, 1, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 7, 0, 0, 1, 1);
	 unit_cell->SetEdgeInFace(2, 8, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(2, 9, 2, 0, 0, 0);

	 unit_cell->SetFace(3, 10);
	 unit_cell->SetEdgeInFace(3, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 10, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 3, 11, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 4, 8, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 5, 5, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 6, 2, 0, -1, 1);
	 unit_cell->SetEdgeInFace(3, 7, 1, 0, -1, 1);
	 unit_cell->SetEdgeInFace(3, 8, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 9, 3, 0, 0, 0);

	 unit_cell->SetFace(4, 10);
	 unit_cell->SetEdgeInFace(4, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 1, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 2, 7, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 3, 11, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 4, 6, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 5, 0, 1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 6, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 7, 9, 0, 0, -1);
	 unit_cell->SetEdgeInFace(4, 8, 5, 0, 0, -1);
	 unit_cell->SetEdgeInFace(4, 9, 3, 0, 0, -1);

	 unit_cell->SetFace(5, 10);
	 unit_cell->SetEdgeInFace(5, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 2, 5, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 3, 8, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 4, 7, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 5, 1, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 6, 6, -1, 1, 0);
	 unit_cell->SetEdgeInFace(5, 7, 10, -1, 1, 0);
	 unit_cell->SetEdgeInFace(5, 8, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 9, 0, 0, 1, 0);

	 unit_cell->SetFace(6, 10);
	 unit_cell->SetEdgeInFace(6, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(6, 2, 4, 0, 1, 1);
	 unit_cell->SetEdgeInFace(6, 3, 9, -1, 1, 0);
	 unit_cell->SetEdgeInFace(6, 4, 5, -1, 1, 0);
	 unit_cell->SetEdgeInFace(6, 5, 2, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 6, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 7, 11, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 8, 6, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 9, 1, 0, 0, 0);

	 unit_cell->SetFace(7, 10);
	 unit_cell->SetEdgeInFace(7, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(7, 2, 6, -1, -1, 1);
	 unit_cell->SetEdgeInFace(7, 3, 10, -1, -1, 1);
	 unit_cell->SetEdgeInFace(7, 4, 4, 0, -1, 1);
	 unit_cell->SetEdgeInFace(7, 5, 3, 0, -1, 0);
	 unit_cell->SetEdgeInFace(7, 6, 5, 0, -1, 0);
	 unit_cell->SetEdgeInFace(7, 7, 8, 0, -1, 0);
	 unit_cell->SetEdgeInFace(7, 8, 7, 0, -1, 0);
	 unit_cell->SetEdgeInFace(7, 9, 2, 0, -1, 0);

	 unit_cell->SetFace(8, 10);
	 unit_cell->SetEdgeInFace(8, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 4, 1, 0, 1);
	 unit_cell->SetEdgeInFace(8, 2, 0, 1, 0, 1);
	 unit_cell->SetEdgeInFace(8, 3, 6, 0, -1, 1);
	 unit_cell->SetEdgeInFace(8, 4, 10, 0, -1, 1);
	 unit_cell->SetEdgeInFace(8, 5, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(8, 6, 8, 0, -1, 0);
	 unit_cell->SetEdgeInFace(8, 7, 7, 0, -1, 0);
	 unit_cell->SetEdgeInFace(8, 8, 2, 0, -1, 0);
	 unit_cell->SetEdgeInFace(8, 9, 5, 0, 0, 0);

	 unit_cell->SetFace(9, 10);
	 unit_cell->SetEdgeInFace(9, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 2, 1, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 3, 7, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 4, 11, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 5, 10, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 6, 9, 1, 0, -1);
	 unit_cell->SetEdgeInFace(9, 7, 5, 1, 0, -1);
	 unit_cell->SetEdgeInFace(9, 8, 3, 1, 0, -1);
	 unit_cell->SetEdgeInFace(9, 9, 4, 1, 0, 0);

	 unit_cell->SetFace(10, 10);
	 unit_cell->SetEdgeInFace(10, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 2, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 3, 5, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 4, 8, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 5, 11, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 6, 10, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 7, 4, 1, 1, 0);
	 unit_cell->SetEdgeInFace(10, 8, 0, 1, 1, 0);
	 unit_cell->SetEdgeInFace(10, 9, 6, 0, 0, 0);

	 unit_cell->SetFace(11, 10);
	 unit_cell->SetEdgeInFace(11, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 3, 6, -1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 4, 11, -1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 5, 8, -1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 6, 9, -1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 7, 4, 0, 0, 1);
	 unit_cell->SetEdgeInFace(11, 8, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 9, 5, 0, 0, 0);

	 return unit_cell;
}
