#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("dia", 8, 16, 16);

	 // vertex 0 located at (0.125, 0.125, 0.625)
	 // vertex 1 located at (0.875, 0.375, 0.875)
	 // vertex 2 located at (0.625, 0.125, 0.125)
	 // vertex 3 located at (0.875, 0.875, 0.375)
	 // vertex 4 located at (0.125, 0.625, 0.125)
	 // vertex 5 located at (0.375, 0.375, 0.375)
	 // vertex 6 located at (0.375, 0.875, 0.875)
	 // vertex 7 located at (0.625, 0.625, 0.625)

	 unit_cell->SetEdge(0, 0, 5, 0, 0, 0);
	 unit_cell->SetEdge(1, 1, 7, 0, 0, 0);
	 unit_cell->SetEdge(2, 2, 6, 0, -1, -1);
	 unit_cell->SetEdge(3, 3, 4, 1, 0, 0);
	 unit_cell->SetEdge(4, 0, 6, 0, -1, 0);
	 unit_cell->SetEdge(5, 1, 4, 1, 0, 1);
	 unit_cell->SetEdge(6, 2, 5, 0, 0, 0);
	 unit_cell->SetEdge(7, 3, 7, 0, 0, 0);
	 unit_cell->SetEdge(8, 4, 5, 0, 0, 0);
	 unit_cell->SetEdge(9, 2, 1, 0, 0, -1);
	 unit_cell->SetEdge(10, 3, 2, 0, 1, 0);
	 unit_cell->SetEdge(11, 0, 3, -1, -1, 0);
	 unit_cell->SetEdge(12, 0, 1, -1, 0, 0);
	 unit_cell->SetEdge(13, 6, 7, 0, 0, 0);
	 unit_cell->SetEdge(14, 6, 4, 0, 0, 1);
	 unit_cell->SetEdge(15, 7, 5, 0, 0, 0);

	 unit_cell->SetFace(0, 6);
	 unit_cell->SetEdgeInFace(0, 0, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 9, -1, 0, 1);
	 unit_cell->SetEdgeInFace(0, 2, 10, -1, -1, 1);
	 unit_cell->SetEdgeInFace(0, 3, 3, -1, -1, 1);
	 unit_cell->SetEdgeInFace(0, 4, 14, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 5, 4, 0, 0, 0);

	 unit_cell->SetFace(1, 6);
	 unit_cell->SetEdgeInFace(1, 0, 9, 0, 0, 1);
	 unit_cell->SetEdgeInFace(1, 1, 10, 0, -1, 1);
	 unit_cell->SetEdgeInFace(1, 2, 11, 1, 0, 1);
	 unit_cell->SetEdgeInFace(1, 3, 0, 1, 0, 1);
	 unit_cell->SetEdgeInFace(1, 4, 8, 1, 0, 1);
	 unit_cell->SetEdgeInFace(1, 5, 5, 0, 0, 0);

	 unit_cell->SetFace(2, 6);
	 unit_cell->SetEdgeInFace(2, 0, 10, 0, -1, 0);
	 unit_cell->SetEdgeInFace(2, 1, 11, 1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 12, 1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 3, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 4, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 5, 6, 0, 0, 0);

	 unit_cell->SetFace(3, 6);
	 unit_cell->SetEdgeInFace(3, 0, 11, 1, 1, 0);
	 unit_cell->SetEdgeInFace(3, 1, 12, 1, 1, 0);
	 unit_cell->SetEdgeInFace(3, 2, 9, 0, 1, 1);
	 unit_cell->SetEdgeInFace(3, 3, 2, 0, 1, 1);
	 unit_cell->SetEdgeInFace(3, 4, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 5, 7, 0, 0, 0);

	 unit_cell->SetFace(4, 6);
	 unit_cell->SetEdgeInFace(4, 0, 10, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 1, 7, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 2, 15, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 3, 8, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 4, 14, 0, -1, -1);
	 unit_cell->SetEdgeInFace(4, 5, 2, 0, 0, 0);

	 unit_cell->SetFace(5, 6);
	 unit_cell->SetEdgeInFace(5, 0, 11, 1, 1, 0);
	 unit_cell->SetEdgeInFace(5, 1, 4, 1, 1, 0);
	 unit_cell->SetEdgeInFace(5, 2, 13, 1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 3, 15, 1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 4, 8, 1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 5, 3, 0, 0, 0);

	 unit_cell->SetFace(6, 6);
	 unit_cell->SetEdgeInFace(6, 0, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 5, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 2, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 3, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 4, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 5, 0, 0, 0, 0);

	 unit_cell->SetFace(7, 6);
	 unit_cell->SetEdgeInFace(7, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 3, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 4, 3, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 5, 8, 0, 0, 0);

	 unit_cell->SetFace(8, 6);
	 unit_cell->SetEdgeInFace(8, 0, 5, -1, 0, -1);
	 unit_cell->SetEdgeInFace(8, 1, 12, 0, 0, -1);
	 unit_cell->SetEdgeInFace(8, 2, 4, 0, 0, -1);
	 unit_cell->SetEdgeInFace(8, 3, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 4, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 5, 8, 0, 0, 0);

	 unit_cell->SetFace(9, 6);
	 unit_cell->SetEdgeInFace(9, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 14, 1, 0, -1);
	 unit_cell->SetEdgeInFace(9, 2, 2, 1, 1, 0);
	 unit_cell->SetEdgeInFace(9, 3, 6, 1, 1, 0);
	 unit_cell->SetEdgeInFace(9, 4, 0, 1, 1, 0);
	 unit_cell->SetEdgeInFace(9, 5, 11, 1, 1, 0);

	 unit_cell->SetFace(10, 6);
	 unit_cell->SetEdgeInFace(10, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 2, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 3, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 4, 2, 0, 0, 1);
	 unit_cell->SetEdgeInFace(10, 5, 9, 0, 0, 1);

	 unit_cell->SetFace(11, 6);
	 unit_cell->SetEdgeInFace(11, 0, 14, 0, 0, -1);
	 unit_cell->SetEdgeInFace(11, 1, 4, 0, 1, -1);
	 unit_cell->SetEdgeInFace(11, 2, 11, 0, 1, -1);
	 unit_cell->SetEdgeInFace(11, 3, 7, -1, 0, -1);
	 unit_cell->SetEdgeInFace(11, 4, 1, -1, 0, -1);
	 unit_cell->SetEdgeInFace(11, 5, 5, -1, 0, -1);

	 unit_cell->SetFace(12, 6);
	 unit_cell->SetEdgeInFace(12, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 5, 0, 0, -1);
	 unit_cell->SetEdgeInFace(12, 2, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 3, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 4, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 5, 7, 0, 0, 0);

	 unit_cell->SetFace(13, 6);
	 unit_cell->SetEdgeInFace(13, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 3, 0, 0, 1);
	 unit_cell->SetEdgeInFace(13, 2, 10, 0, 0, 1);
	 unit_cell->SetEdgeInFace(13, 3, 2, 0, 1, 1);
	 unit_cell->SetEdgeInFace(13, 4, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 5, 1, 0, 0, 0);

	 unit_cell->SetFace(14, 6);
	 unit_cell->SetEdgeInFace(14, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 2, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 3, 13, 0, -1, 0);
	 unit_cell->SetEdgeInFace(14, 4, 7, 0, -1, 0);
	 unit_cell->SetEdgeInFace(14, 5, 10, 0, -1, 0);

	 unit_cell->SetFace(15, 6);
	 unit_cell->SetEdgeInFace(15, 0, 9, 0, 0, 1);
	 unit_cell->SetEdgeInFace(15, 1, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(15, 2, 8, 0, 0, 1);
	 unit_cell->SetEdgeInFace(15, 3, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 4, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 5, 1, 0, 0, 0);

	 return unit_cell;
}
