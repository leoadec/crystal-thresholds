#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("bbr", 8, 16, 16);

	 // vertex 0 located at (0.0, 0.44919, 0.0)
	 // vertex 1 located at (0.55081, 0.0, 0.25)
	 // vertex 2 located at (0.0, 0.55081, 0.5)
	 // vertex 3 located at (0.44919, 0.0, 0.75)
	 // vertex 4 located at (0.66102, 0.33898, 0.125)
	 // vertex 5 located at (0.6610199999999999, 0.66102, 0.375)
	 // vertex 6 located at (0.33897999999999995, 0.6610199999999999, 0.625)
	 // vertex 7 located at (0.33898, 0.33897999999999995, 0.875)

	 unit_cell->SetEdge(0, 0, 7, 0, 0, -1);
	 unit_cell->SetEdge(1, 1, 4, 0, 0, 0);
	 unit_cell->SetEdge(2, 2, 5, -1, 0, 0);
	 unit_cell->SetEdge(3, 3, 6, 0, -1, 0);
	 unit_cell->SetEdge(4, 2, 6, 0, 0, 0);
	 unit_cell->SetEdge(5, 3, 7, 0, 0, 0);
	 unit_cell->SetEdge(6, 0, 4, -1, 0, 0);
	 unit_cell->SetEdge(7, 1, 5, 0, -1, 0);
	 unit_cell->SetEdge(8, 0, 2, 0, 0, 0);
	 unit_cell->SetEdge(9, 1, 3, 0, 0, 0);
	 unit_cell->SetEdge(10, 2, 0, 0, 0, 1);
	 unit_cell->SetEdge(11, 3, 1, 0, 0, 1);
	 unit_cell->SetEdge(12, 4, 7, 0, 0, -1);
	 unit_cell->SetEdge(13, 5, 4, 0, 0, 0);
	 unit_cell->SetEdge(14, 6, 5, 0, 0, 0);
	 unit_cell->SetEdge(15, 7, 6, 0, 0, 0);

	 unit_cell->SetFace(0, 4);
	 unit_cell->SetEdgeInFace(0, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(0, 3, 10, 0, 0, 0);

	 unit_cell->SetFace(1, 6);
	 unit_cell->SetEdgeInFace(1, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(1, 2, 12, -1, 0, 1);
	 unit_cell->SetEdgeInFace(1, 3, 15, -1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 4, 14, -1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 5, 2, 0, 0, 0);

	 unit_cell->SetFace(2, 10);
	 unit_cell->SetEdgeInFace(2, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 2, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 3, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 4, 4, 0, -1, 0);
	 unit_cell->SetEdgeInFace(2, 5, 2, 0, -1, 0);
	 unit_cell->SetEdgeInFace(2, 6, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 7, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 8, 13, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 9, 2, 0, 0, 0);

	 unit_cell->SetFace(3, 4);
	 unit_cell->SetEdgeInFace(3, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 12, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 2, 1, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 3, 11, 0, 0, 0);

	 unit_cell->SetFace(4, 4);
	 unit_cell->SetEdgeInFace(4, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 13, -1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 3, 8, 0, 0, 0);

	 unit_cell->SetFace(5, 4);
	 unit_cell->SetEdgeInFace(5, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 14, 0, -1, 0);
	 unit_cell->SetEdgeInFace(5, 2, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 3, 9, 0, 0, 0);

	 unit_cell->SetFace(6, 6);
	 unit_cell->SetEdgeInFace(6, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 7, 0, 0, 1);
	 unit_cell->SetEdgeInFace(6, 2, 13, 0, -1, 1);
	 unit_cell->SetEdgeInFace(6, 3, 12, 0, -1, 1);
	 unit_cell->SetEdgeInFace(6, 4, 15, 0, -1, 0);
	 unit_cell->SetEdgeInFace(6, 5, 3, 0, 0, 0);

	 unit_cell->SetFace(7, 6);
	 unit_cell->SetEdgeInFace(7, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 3, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 4, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 5, 0, 0, 0, 0);

	 unit_cell->SetFace(8, 6);
	 unit_cell->SetEdgeInFace(8, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 4, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 5, 1, 0, 0, 0);

	 unit_cell->SetFace(9, 10);
	 unit_cell->SetEdgeInFace(9, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 1, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 2, 6, 1, 0, 1);
	 unit_cell->SetEdgeInFace(9, 3, 0, 1, 0, 1);
	 unit_cell->SetEdgeInFace(9, 4, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 5, 3, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 6, 4, 1, -1, 0);
	 unit_cell->SetEdgeInFace(9, 7, 2, 1, -1, 0);
	 unit_cell->SetEdgeInFace(9, 8, 14, 0, -1, 0);
	 unit_cell->SetEdgeInFace(9, 9, 3, 0, 0, 0);

	 unit_cell->SetFace(10, 10);
	 unit_cell->SetEdgeInFace(10, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 2, 7, -1, 1, 0);
	 unit_cell->SetEdgeInFace(10, 3, 1, -1, 1, 0);
	 unit_cell->SetEdgeInFace(10, 4, 6, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 5, 0, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 6, 5, 0, 1, -1);
	 unit_cell->SetEdgeInFace(10, 7, 3, 0, 1, -1);
	 unit_cell->SetEdgeInFace(10, 8, 15, 0, 0, -1);
	 unit_cell->SetEdgeInFace(10, 9, 0, 0, 0, 0);

	 unit_cell->SetFace(11, 10);
	 unit_cell->SetEdgeInFace(11, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 4, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 3, 2, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 4, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 5, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 6, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 7, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 8, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 9, 1, 0, 0, 0);

	 unit_cell->SetFace(12, 10);
	 unit_cell->SetEdgeInFace(12, 0, 10, 0, 0, -1);
	 unit_cell->SetEdgeInFace(12, 1, 4, 0, 0, -1);
	 unit_cell->SetEdgeInFace(12, 2, 3, 0, 1, -1);
	 unit_cell->SetEdgeInFace(12, 3, 5, 0, 1, -1);
	 unit_cell->SetEdgeInFace(12, 4, 0, 0, 1, 0);
	 unit_cell->SetEdgeInFace(12, 5, 6, 0, 1, 0);
	 unit_cell->SetEdgeInFace(12, 6, 1, -1, 1, 0);
	 unit_cell->SetEdgeInFace(12, 7, 7, -1, 1, 0);
	 unit_cell->SetEdgeInFace(12, 8, 13, -1, 0, 0);
	 unit_cell->SetEdgeInFace(12, 9, 6, 0, 0, 0);

	 unit_cell->SetFace(13, 10);
	 unit_cell->SetEdgeInFace(13, 0, 11, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 1, 5, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 2, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 3, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 4, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(13, 5, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(13, 6, 2, 0, -1, 0);
	 unit_cell->SetEdgeInFace(13, 7, 4, 0, -1, 0);
	 unit_cell->SetEdgeInFace(13, 8, 14, 0, -1, 0);
	 unit_cell->SetEdgeInFace(13, 9, 7, 0, 0, 0);

	 unit_cell->SetFace(14, 10);
	 unit_cell->SetEdgeInFace(14, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 2, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(14, 3, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(14, 4, 2, 0, -1, 0);
	 unit_cell->SetEdgeInFace(14, 5, 4, 0, -1, 0);
	 unit_cell->SetEdgeInFace(14, 6, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 7, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 8, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 9, 4, 0, 0, 0);

	 unit_cell->SetFace(15, 10);
	 unit_cell->SetEdgeInFace(15, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 1, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 2, 2, 1, -1, 0);
	 unit_cell->SetEdgeInFace(15, 3, 4, 1, -1, 0);
	 unit_cell->SetEdgeInFace(15, 4, 3, 1, 0, 0);
	 unit_cell->SetEdgeInFace(15, 5, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(15, 6, 0, 1, 0, 1);
	 unit_cell->SetEdgeInFace(15, 7, 6, 1, 0, 1);
	 unit_cell->SetEdgeInFace(15, 8, 12, 0, 0, 1);
	 unit_cell->SetEdgeInFace(15, 9, 5, 0, 0, 0);

	 return unit_cell;
}
