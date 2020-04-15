#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("vtx", 12, 32, 32);

	 // vertex 0 located at (0.0, 0.75, 0.125)
	 // vertex 1 located at (0.5, 0.75, 0.375)
	 // vertex 2 located at (0.5, 0.25, 0.625)
	 // vertex 3 located at (0.0, 0.25, 0.875)
	 // vertex 4 located at (0.0, 0.0, 0.5)
	 // vertex 5 located at (0.25, 0.75, 0.75)
	 // vertex 6 located at (0.5, 0.0, 0.0)
	 // vertex 7 located at (0.25, 0.25, 0.25)
	 // vertex 8 located at (0.75, 0.25, 0.25)
	 // vertex 9 located at (0.75, 0.75, 0.75)
	 // vertex 10 located at (0.5, 0.5, 0.0)
	 // vertex 11 located at (0.0, 0.5, 0.5)

	 unit_cell->SetEdge(0, 4, 3, 0, 0, 0);
	 unit_cell->SetEdge(1, 5, 0, 0, 0, 1);
	 unit_cell->SetEdge(2, 6, 1, 0, -1, 0);
	 unit_cell->SetEdge(3, 7, 2, 0, 0, 0);
	 unit_cell->SetEdge(4, 4, 0, 0, -1, 0);
	 unit_cell->SetEdge(5, 5, 1, 0, 0, 0);
	 unit_cell->SetEdge(6, 6, 2, 0, 0, -1);
	 unit_cell->SetEdge(7, 7, 3, 0, 0, -1);
	 unit_cell->SetEdge(8, 8, 3, 1, 0, -1);
	 unit_cell->SetEdge(9, 9, 1, 0, 0, 0);
	 unit_cell->SetEdge(10, 8, 2, 0, 0, 0);
	 unit_cell->SetEdge(11, 9, 0, 1, 0, 1);
	 unit_cell->SetEdge(12, 10, 1, 0, 0, 0);
	 unit_cell->SetEdge(13, 11, 3, 0, 0, 0);
	 unit_cell->SetEdge(14, 10, 2, 0, 0, -1);
	 unit_cell->SetEdge(15, 11, 0, 0, 0, 0);
	 unit_cell->SetEdge(16, 4, 7, 0, 0, 0);
	 unit_cell->SetEdge(17, 5, 4, 0, 1, 0);
	 unit_cell->SetEdge(18, 6, 5, 0, -1, -1);
	 unit_cell->SetEdge(19, 7, 6, 0, 0, 0);
	 unit_cell->SetEdge(20, 4, 9, -1, -1, 0);
	 unit_cell->SetEdge(21, 8, 4, 1, 0, 0);
	 unit_cell->SetEdge(22, 6, 8, 0, 0, 0);
	 unit_cell->SetEdge(23, 9, 6, 0, 1, 1);
	 unit_cell->SetEdge(24, 10, 9, 0, 0, -1);
	 unit_cell->SetEdge(25, 8, 10, 0, 0, 0);
	 unit_cell->SetEdge(26, 11, 8, -1, 0, 0);
	 unit_cell->SetEdge(27, 9, 11, 1, 0, 0);
	 unit_cell->SetEdge(28, 10, 7, 0, 0, 0);
	 unit_cell->SetEdge(29, 5, 10, 0, 0, 1);
	 unit_cell->SetEdge(30, 11, 5, 0, 0, 0);
	 unit_cell->SetEdge(31, 7, 11, 0, 0, 0);

	 unit_cell->SetFace(0, 4);
	 unit_cell->SetEdgeInFace(0, 0, 2, 0, 1, 0);
	 unit_cell->SetEdgeInFace(0, 1, 18, 0, 1, 0);
	 unit_cell->SetEdgeInFace(0, 2, 29, 0, 0, -1);
	 unit_cell->SetEdgeInFace(0, 3, 12, 0, 0, 0);

	 unit_cell->SetFace(1, 5);
	 unit_cell->SetEdgeInFace(1, 0, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 25, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 2, 26, 1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 3, 27, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 4, 9, 0, 0, 0);

	 unit_cell->SetFace(2, 4);
	 unit_cell->SetEdgeInFace(2, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 3, 10, 0, 0, 0);

	 unit_cell->SetFace(3, 4);
	 unit_cell->SetEdgeInFace(3, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 31, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 3, 13, 0, 0, 0);

	 unit_cell->SetFace(4, 4);
	 unit_cell->SetEdgeInFace(4, 0, 1, 0, 0, -1);
	 unit_cell->SetEdgeInFace(4, 1, 17, 0, 0, -1);
	 unit_cell->SetEdgeInFace(4, 2, 20, 0, 1, -1);
	 unit_cell->SetEdgeInFace(4, 3, 11, -1, 0, -1);

	 unit_cell->SetFace(5, 4);
	 unit_cell->SetEdgeInFace(5, 0, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 1, 19, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 2, 28, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 3, 14, 0, 0, 1);

	 unit_cell->SetFace(6, 4);
	 unit_cell->SetEdgeInFace(6, 0, 7, 0, 0, 1);
	 unit_cell->SetEdgeInFace(6, 1, 16, 0, 0, 1);
	 unit_cell->SetEdgeInFace(6, 2, 21, -1, 0, 1);
	 unit_cell->SetEdgeInFace(6, 3, 8, -1, 0, 1);

	 unit_cell->SetFace(7, 4);
	 unit_cell->SetEdgeInFace(7, 0, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(7, 1, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 3, 15, 0, 0, 0);

	 unit_cell->SetFace(8, 4);
	 unit_cell->SetEdgeInFace(8, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 18, 0, 1, 1);
	 unit_cell->SetEdgeInFace(8, 2, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 9, 0, 0, 0);

	 unit_cell->SetFace(9, 4);
	 unit_cell->SetEdgeInFace(9, 0, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 1, 22, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 2, 25, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 3, 14, 0, 0, 1);

	 unit_cell->SetFace(10, 4);
	 unit_cell->SetEdgeInFace(10, 0, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 1, 20, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 2, 27, -1, 0, 0);
	 unit_cell->SetEdgeInFace(10, 3, 15, 0, 0, 0);

	 unit_cell->SetFace(11, 4);
	 unit_cell->SetEdgeInFace(11, 0, 2, 0, 1, 0);
	 unit_cell->SetEdgeInFace(11, 1, 23, 0, 0, -1);
	 unit_cell->SetEdgeInFace(11, 2, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 3, 12, 0, 0, 0);

	 unit_cell->SetFace(12, 4);
	 unit_cell->SetEdgeInFace(12, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 21, -1, 0, 0);
	 unit_cell->SetEdgeInFace(12, 2, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 3, 13, 0, 0, 0);

	 unit_cell->SetFace(13, 4);
	 unit_cell->SetEdgeInFace(13, 0, 11, -1, 0, -1);
	 unit_cell->SetEdgeInFace(13, 1, 27, -1, 0, -1);
	 unit_cell->SetEdgeInFace(13, 2, 30, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 3, 1, 0, 0, -1);

	 unit_cell->SetFace(14, 4);
	 unit_cell->SetEdgeInFace(14, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 25, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 2, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 3, 3, 0, 0, 0);

	 unit_cell->SetFace(15, 4);
	 unit_cell->SetEdgeInFace(15, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 1, 24, 0, 0, 1);
	 unit_cell->SetEdgeInFace(15, 2, 29, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 3, 5, 0, 0, 0);

	 unit_cell->SetFace(16, 4);
	 unit_cell->SetEdgeInFace(16, 0, 8, -1, 0, 1);
	 unit_cell->SetEdgeInFace(16, 1, 26, 0, 0, 1);
	 unit_cell->SetEdgeInFace(16, 2, 31, 0, 0, 1);
	 unit_cell->SetEdgeInFace(16, 3, 7, 0, 0, 1);

	 unit_cell->SetFace(17, 5);
	 unit_cell->SetEdgeInFace(17, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 1, 26, 1, 0, 0);
	 unit_cell->SetEdgeInFace(17, 2, 27, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 3, 24, 0, 0, 1);
	 unit_cell->SetEdgeInFace(17, 4, 14, 0, 0, 1);

	 unit_cell->SetFace(18, 5);
	 unit_cell->SetEdgeInFace(18, 0, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 1, 27, -1, 0, 0);
	 unit_cell->SetEdgeInFace(18, 2, 24, -1, 0, 1);
	 unit_cell->SetEdgeInFace(18, 3, 25, -1, 0, 1);
	 unit_cell->SetEdgeInFace(18, 4, 8, -1, 0, 1);

	 unit_cell->SetFace(19, 5);
	 unit_cell->SetEdgeInFace(19, 0, 11, -1, 0, -1);
	 unit_cell->SetEdgeInFace(19, 1, 24, -1, 0, 0);
	 unit_cell->SetEdgeInFace(19, 2, 25, -1, 0, 0);
	 unit_cell->SetEdgeInFace(19, 3, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 4, 15, 0, 0, 0);

	 unit_cell->SetFace(20, 5);
	 unit_cell->SetEdgeInFace(20, 0, 14, 0, 0, 1);
	 unit_cell->SetEdgeInFace(20, 1, 29, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 2, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 3, 31, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 4, 3, 0, 0, 0);

	 unit_cell->SetFace(21, 5);
	 unit_cell->SetEdgeInFace(21, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 1, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 2, 31, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 3, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 4, 12, 0, 0, 0);

	 unit_cell->SetFace(22, 5);
	 unit_cell->SetEdgeInFace(22, 0, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 1, 31, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 2, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 3, 29, 0, 0, -1);
	 unit_cell->SetEdgeInFace(22, 4, 1, 0, 0, -1);

	 unit_cell->SetFace(23, 5);
	 unit_cell->SetEdgeInFace(23, 0, 7, 0, 0, 1);
	 unit_cell->SetEdgeInFace(23, 1, 28, 0, 0, 1);
	 unit_cell->SetEdgeInFace(23, 2, 29, 0, 0, 0);
	 unit_cell->SetEdgeInFace(23, 3, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(23, 4, 13, 0, 0, 0);

	 unit_cell->SetFace(24, 5);
	 unit_cell->SetEdgeInFace(24, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(24, 1, 17, 0, -1, 0);
	 unit_cell->SetEdgeInFace(24, 2, 18, 0, 0, 1);
	 unit_cell->SetEdgeInFace(24, 3, 19, 0, 0, 1);
	 unit_cell->SetEdgeInFace(24, 4, 7, 0, 0, 1);

	 unit_cell->SetFace(25, 5);
	 unit_cell->SetEdgeInFace(25, 0, 1, 0, 0, -1);
	 unit_cell->SetEdgeInFace(25, 1, 18, 0, 1, 0);
	 unit_cell->SetEdgeInFace(25, 2, 19, 0, 1, 0);
	 unit_cell->SetEdgeInFace(25, 3, 16, 0, 1, 0);
	 unit_cell->SetEdgeInFace(25, 4, 4, 0, 1, 0);

	 unit_cell->SetFace(26, 5);
	 unit_cell->SetEdgeInFace(26, 0, 2, 0, 1, 0);
	 unit_cell->SetEdgeInFace(26, 1, 19, 0, 1, 0);
	 unit_cell->SetEdgeInFace(26, 2, 16, 0, 1, 0);
	 unit_cell->SetEdgeInFace(26, 3, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 4, 5, 0, 0, 0);

	 unit_cell->SetFace(27, 5);
	 unit_cell->SetEdgeInFace(27, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 1, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 2, 17, 0, -1, 0);
	 unit_cell->SetEdgeInFace(27, 3, 18, 0, 0, 1);
	 unit_cell->SetEdgeInFace(27, 4, 6, 0, 0, 1);

	 unit_cell->SetFace(28, 5);
	 unit_cell->SetEdgeInFace(28, 0, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(28, 1, 21, -1, 1, 0);
	 unit_cell->SetEdgeInFace(28, 2, 22, -1, 1, 0);
	 unit_cell->SetEdgeInFace(28, 3, 23, -1, 0, -1);
	 unit_cell->SetEdgeInFace(28, 4, 11, -1, 0, -1);

	 unit_cell->SetFace(29, 5);
	 unit_cell->SetEdgeInFace(29, 0, 8, -1, 0, 1);
	 unit_cell->SetEdgeInFace(29, 1, 22, -1, 0, 1);
	 unit_cell->SetEdgeInFace(29, 2, 23, -1, -1, 0);
	 unit_cell->SetEdgeInFace(29, 3, 20, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 4, 0, 0, 0, 0);

	 unit_cell->SetFace(30, 5);
	 unit_cell->SetEdgeInFace(30, 0, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(30, 1, 23, 0, -1, 0);
	 unit_cell->SetEdgeInFace(30, 2, 20, 1, 0, 0);
	 unit_cell->SetEdgeInFace(30, 3, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 4, 10, 0, 0, 0);

	 unit_cell->SetFace(31, 5);
	 unit_cell->SetEdgeInFace(31, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 1, 20, 1, 1, 0);
	 unit_cell->SetEdgeInFace(31, 2, 21, 0, 1, 0);
	 unit_cell->SetEdgeInFace(31, 3, 22, 0, 1, 0);
	 unit_cell->SetEdgeInFace(31, 4, 2, 0, 1, 0);

	 return unit_cell;
}
