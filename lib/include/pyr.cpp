#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("pyr", 12, 24, 24);

	 // vertex 0 located at (0.16667, 0.16667, 0.16667)
	 // vertex 1 located at (0.33333, 0.83333, 0.66667)
	 // vertex 2 located at (0.66667, 0.33333, 0.83333)
	 // vertex 3 located at (0.83333, 0.66667, 0.33333)
	 // vertex 4 located at (0.83333, 0.83333, 0.83333)
	 // vertex 5 located at (0.66667, 0.16667, 0.33333)
	 // vertex 6 located at (0.33333, 0.66667, 0.16667)
	 // vertex 7 located at (0.16667, 0.33333, 0.66667)
	 // vertex 8 located at (0.0, 0.0, 0.5)
	 // vertex 9 located at (0.5, 0.0, 0.0)
	 // vertex 10 located at (0.5, 0.5, 0.5)
	 // vertex 11 located at (0.0, 0.5, 0.0)

	 unit_cell->SetEdge(0, 8, 0, 0, 0, 0);
	 unit_cell->SetEdge(1, 9, 1, 0, -1, -1);
	 unit_cell->SetEdge(2, 10, 2, 0, 0, 0);
	 unit_cell->SetEdge(3, 11, 3, -1, 0, 0);
	 unit_cell->SetEdge(4, 9, 0, 0, 0, 0);
	 unit_cell->SetEdge(5, 8, 1, 0, -1, 0);
	 unit_cell->SetEdge(6, 11, 2, -1, 0, -1);
	 unit_cell->SetEdge(7, 10, 3, 0, 0, 0);
	 unit_cell->SetEdge(8, 11, 0, 0, 0, 0);
	 unit_cell->SetEdge(9, 9, 2, 0, 0, -1);
	 unit_cell->SetEdge(10, 8, 3, -1, -1, 0);
	 unit_cell->SetEdge(11, 10, 1, 0, 0, 0);
	 unit_cell->SetEdge(12, 8, 4, -1, -1, 0);
	 unit_cell->SetEdge(13, 9, 5, 0, 0, 0);
	 unit_cell->SetEdge(14, 10, 6, 0, 0, 0);
	 unit_cell->SetEdge(15, 11, 7, 0, 0, -1);
	 unit_cell->SetEdge(16, 9, 4, 0, -1, -1);
	 unit_cell->SetEdge(17, 8, 5, -1, 0, 0);
	 unit_cell->SetEdge(18, 11, 6, 0, 0, 0);
	 unit_cell->SetEdge(19, 10, 7, 0, 0, 0);
	 unit_cell->SetEdge(20, 11, 4, -1, 0, -1);
	 unit_cell->SetEdge(21, 9, 6, 0, -1, 0);
	 unit_cell->SetEdge(22, 8, 7, 0, 0, 0);
	 unit_cell->SetEdge(23, 10, 5, 0, 0, 0);

	 unit_cell->SetFace(0, 6);
	 unit_cell->SetEdgeInFace(0, 0, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 3, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 4, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 5, 13, 0, 0, 0);

	 unit_cell->SetFace(1, 6);
	 unit_cell->SetEdgeInFace(1, 0, 20, 1, 0, 1);
	 unit_cell->SetEdgeInFace(1, 1, 15, 1, 0, 1);
	 unit_cell->SetEdgeInFace(1, 2, 19, 1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 3, 11, 1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 4, 5, 1, 1, 0);
	 unit_cell->SetEdgeInFace(1, 5, 12, 1, 1, 0);

	 unit_cell->SetFace(2, 6);
	 unit_cell->SetEdgeInFace(2, 0, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 16, -1, 0, 1);
	 unit_cell->SetEdgeInFace(2, 3, 9, -1, 0, 1);
	 unit_cell->SetEdgeInFace(2, 4, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 5, 15, 0, 0, 1);

	 unit_cell->SetFace(3, 6);
	 unit_cell->SetEdgeInFace(3, 0, 21, 0, 1, 0);
	 unit_cell->SetEdgeInFace(3, 1, 13, 0, 1, 0);
	 unit_cell->SetEdgeInFace(3, 2, 17, 1, 1, 0);
	 unit_cell->SetEdgeInFace(3, 3, 10, 1, 1, 0);
	 unit_cell->SetEdgeInFace(3, 4, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 5, 14, 0, 0, 0);

	 unit_cell->SetFace(4, 6);
	 unit_cell->SetEdgeInFace(4, 0, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 3, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 4, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 5, 18, 0, 0, 0);

	 unit_cell->SetFace(5, 6);
	 unit_cell->SetEdgeInFace(5, 0, 15, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 1, 18, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 2, 21, 0, 1, 1);
	 unit_cell->SetEdgeInFace(5, 3, 1, 0, 1, 1);
	 unit_cell->SetEdgeInFace(5, 4, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 5, 19, 0, 0, 0);

	 unit_cell->SetFace(6, 6);
	 unit_cell->SetEdgeInFace(6, 0, 12, 1, 1, 0);
	 unit_cell->SetEdgeInFace(6, 1, 17, 1, 1, 0);
	 unit_cell->SetEdgeInFace(6, 2, 23, 0, 1, 0);
	 unit_cell->SetEdgeInFace(6, 3, 2, 0, 1, 0);
	 unit_cell->SetEdgeInFace(6, 4, 9, 0, 1, 1);
	 unit_cell->SetEdgeInFace(6, 5, 16, 0, 1, 1);

	 unit_cell->SetFace(7, 6);
	 unit_cell->SetEdgeInFace(7, 0, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 20, 1, -1, 0);
	 unit_cell->SetEdgeInFace(7, 3, 3, 1, -1, 0);
	 unit_cell->SetEdgeInFace(7, 4, 10, 1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 5, 17, 1, 0, 0);

	 unit_cell->SetFace(8, 6);
	 unit_cell->SetEdgeInFace(8, 0, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 4, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 5, 22, 0, 0, 0);

	 unit_cell->SetFace(9, 6);
	 unit_cell->SetEdgeInFace(9, 0, 17, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 22, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 2, 15, 1, 0, 1);
	 unit_cell->SetEdgeInFace(9, 3, 6, 1, 0, 1);
	 unit_cell->SetEdgeInFace(9, 4, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 5, 23, 0, 0, 0);

	 unit_cell->SetFace(10, 6);
	 unit_cell->SetEdgeInFace(10, 0, 16, 0, 1, 1);
	 unit_cell->SetEdgeInFace(10, 1, 21, 0, 1, 1);
	 unit_cell->SetEdgeInFace(10, 2, 14, 0, 0, 1);
	 unit_cell->SetEdgeInFace(10, 3, 7, 0, 0, 1);
	 unit_cell->SetEdgeInFace(10, 4, 3, 1, 0, 1);
	 unit_cell->SetEdgeInFace(10, 5, 20, 1, 0, 1);

	 unit_cell->SetFace(11, 6);
	 unit_cell->SetEdgeInFace(11, 0, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 20, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 12, 0, 1, -1);
	 unit_cell->SetEdgeInFace(11, 3, 5, 0, 1, -1);
	 unit_cell->SetEdgeInFace(11, 4, 1, 0, 1, 0);
	 unit_cell->SetEdgeInFace(11, 5, 21, 0, 1, 0);

	 unit_cell->SetFace(12, 6);
	 unit_cell->SetEdgeInFace(12, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 2, 6, 1, 0, 1);
	 unit_cell->SetEdgeInFace(12, 3, 20, 1, 0, 1);
	 unit_cell->SetEdgeInFace(12, 4, 16, 0, 1, 1);
	 unit_cell->SetEdgeInFace(12, 5, 1, 0, 1, 1);

	 unit_cell->SetFace(13, 6);
	 unit_cell->SetEdgeInFace(13, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 2, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(13, 3, 23, -1, 0, 0);
	 unit_cell->SetEdgeInFace(13, 4, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 5, 0, 0, 0, 0);

	 unit_cell->SetFace(14, 6);
	 unit_cell->SetEdgeInFace(14, 0, 10, 1, 1, 0);
	 unit_cell->SetEdgeInFace(14, 1, 0, 1, 1, 0);
	 unit_cell->SetEdgeInFace(14, 2, 4, 1, 1, 0);
	 unit_cell->SetEdgeInFace(14, 3, 21, 1, 1, 0);
	 unit_cell->SetEdgeInFace(14, 4, 18, 1, 0, 0);
	 unit_cell->SetEdgeInFace(14, 5, 3, 1, 0, 0);

	 unit_cell->SetFace(15, 6);
	 unit_cell->SetEdgeInFace(15, 0, 9, 0, 0, 1);
	 unit_cell->SetEdgeInFace(15, 1, 1, 0, 0, 1);
	 unit_cell->SetEdgeInFace(15, 2, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 3, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 4, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 5, 2, 0, 0, 0);

	 unit_cell->SetFace(16, 6);
	 unit_cell->SetEdgeInFace(16, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 1, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 2, 10, 1, 1, 0);
	 unit_cell->SetEdgeInFace(16, 3, 12, 1, 1, 0);
	 unit_cell->SetEdgeInFace(16, 4, 20, 1, 0, 1);
	 unit_cell->SetEdgeInFace(16, 5, 6, 1, 0, 1);

	 unit_cell->SetFace(17, 6);
	 unit_cell->SetEdgeInFace(17, 0, 3, 1, 0, 0);
	 unit_cell->SetEdgeInFace(17, 1, 6, 1, 0, 0);
	 unit_cell->SetEdgeInFace(17, 2, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 3, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 4, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 5, 7, 0, 0, 0);

	 unit_cell->SetFace(18, 6);
	 unit_cell->SetEdgeInFace(18, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 1, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 2, 11, 0, -1, 0);
	 unit_cell->SetEdgeInFace(18, 3, 14, 0, -1, 0);
	 unit_cell->SetEdgeInFace(18, 4, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 5, 4, 0, 0, 0);

	 unit_cell->SetFace(19, 6);
	 unit_cell->SetEdgeInFace(19, 0, 1, 0, 1, 1);
	 unit_cell->SetEdgeInFace(19, 1, 4, 0, 1, 1);
	 unit_cell->SetEdgeInFace(19, 2, 8, 0, 1, 1);
	 unit_cell->SetEdgeInFace(19, 3, 15, 0, 1, 1);
	 unit_cell->SetEdgeInFace(19, 4, 22, 0, 1, 0);
	 unit_cell->SetEdgeInFace(19, 5, 5, 0, 1, 0);

	 unit_cell->SetFace(20, 6);
	 unit_cell->SetEdgeInFace(20, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 1, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 2, 1, 0, 1, 1);
	 unit_cell->SetEdgeInFace(20, 3, 16, 0, 1, 1);
	 unit_cell->SetEdgeInFace(20, 4, 12, 1, 1, 0);
	 unit_cell->SetEdgeInFace(20, 5, 10, 1, 1, 0);

	 unit_cell->SetFace(21, 6);
	 unit_cell->SetEdgeInFace(21, 0, 5, 0, 1, 0);
	 unit_cell->SetEdgeInFace(21, 1, 10, 0, 1, 0);
	 unit_cell->SetEdgeInFace(21, 2, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 3, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 4, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 5, 11, 0, 0, 0);

	 unit_cell->SetFace(22, 6);
	 unit_cell->SetEdgeInFace(22, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 1, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 2, 2, 0, 0, -1);
	 unit_cell->SetEdgeInFace(22, 3, 19, 0, 0, -1);
	 unit_cell->SetEdgeInFace(22, 4, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 5, 8, 0, 0, 0);

	 unit_cell->SetFace(23, 6);
	 unit_cell->SetEdgeInFace(23, 0, 6, 1, 0, 1);
	 unit_cell->SetEdgeInFace(23, 1, 8, 1, 0, 1);
	 unit_cell->SetEdgeInFace(23, 2, 0, 1, 0, 1);
	 unit_cell->SetEdgeInFace(23, 3, 17, 1, 0, 1);
	 unit_cell->SetEdgeInFace(23, 4, 13, 0, 0, 1);
	 unit_cell->SetEdgeInFace(23, 5, 9, 0, 0, 1);

	 return unit_cell;
}
