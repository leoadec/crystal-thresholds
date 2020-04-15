#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("ete", 12, 18, 18);

	 // vertex 0 located at (0.11498, 0.22995, 0.5)
	 // vertex 1 located at (0.88503, 0.11498, 0.16666666666666652)
	 // vertex 2 located at (0.77005, 0.88503, 0.8333333333333333)
	 // vertex 3 located at (0.88502, 0.77005, 0.5)
	 // vertex 4 located at (0.11496999999999999, 0.88502, 0.16666666666666652)
	 // vertex 5 located at (0.22995, 0.11496999999999999, 0.8333333333333333)
	 // vertex 6 located at (0.5, 0.0, 0.08242)
	 // vertex 7 located at (0.5, 0.5, 0.7490866666666667)
	 // vertex 8 located at (0.0, 0.5, 0.4157533333333333)
	 // vertex 9 located at (0.0, 0.5, 0.2509133333333333)
	 // vertex 10 located at (0.5, 0.0, 0.9175800000000001)
	 // vertex 11 located at (0.5, 0.5, 0.5842466666666666)

	 unit_cell->SetEdge(0, 6, 4, 0, -1, 0);
	 unit_cell->SetEdge(1, 7, 5, 0, 0, 0);
	 unit_cell->SetEdge(2, 8, 0, 0, 0, 0);
	 unit_cell->SetEdge(3, 6, 1, 0, 0, 0);
	 unit_cell->SetEdge(4, 7, 2, 0, 0, 0);
	 unit_cell->SetEdge(5, 8, 3, -1, 0, 0);
	 unit_cell->SetEdge(6, 9, 4, 0, 0, 0);
	 unit_cell->SetEdge(7, 10, 5, 0, 0, 0);
	 unit_cell->SetEdge(8, 11, 0, 0, 0, 0);
	 unit_cell->SetEdge(9, 9, 1, -1, 0, 0);
	 unit_cell->SetEdge(10, 10, 2, 0, -1, 0);
	 unit_cell->SetEdge(11, 11, 3, 0, 0, 0);
	 unit_cell->SetEdge(12, 6, 10, 0, 0, -1);
	 unit_cell->SetEdge(13, 7, 11, 0, 0, 0);
	 unit_cell->SetEdge(14, 8, 9, 0, 0, 0);
	 unit_cell->SetEdge(15, 0, 3, -1, -1, 0);
	 unit_cell->SetEdge(16, 1, 4, 1, -1, 0);
	 unit_cell->SetEdge(17, 2, 5, 1, 1, 0);

	 unit_cell->SetFace(0, 8);
	 unit_cell->SetEdgeInFace(0, 0, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 11, -1, -1, 0);
	 unit_cell->SetEdgeInFace(0, 2, 13, -1, -1, 0);
	 unit_cell->SetEdgeInFace(0, 3, 4, -1, -1, 0);
	 unit_cell->SetEdgeInFace(0, 4, 17, -1, -1, 0);
	 unit_cell->SetEdgeInFace(0, 5, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 6, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 7, 8, 0, 0, 0);

	 unit_cell->SetFace(1, 10);
	 unit_cell->SetEdgeInFace(1, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 2, 15, 1, 1, 0);
	 unit_cell->SetEdgeInFace(1, 3, 2, 1, 1, 0);
	 unit_cell->SetEdgeInFace(1, 4, 5, 1, 1, 0);
	 unit_cell->SetEdgeInFace(1, 5, 11, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 6, 8, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 7, 15, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 8, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 9, 2, 0, 0, 0);

	 unit_cell->SetFace(2, 11);
	 unit_cell->SetEdgeInFace(2, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 3, 16, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 4, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 5, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 6, 9, 1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 7, 14, 1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 8, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 9, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 10, 8, 0, 0, 0);

	 unit_cell->SetFace(3, 8);
	 unit_cell->SetEdgeInFace(3, 0, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 6, 1, -1, 0);
	 unit_cell->SetEdgeInFace(3, 2, 14, 1, -1, 0);
	 unit_cell->SetEdgeInFace(3, 3, 5, 1, -1, 0);
	 unit_cell->SetEdgeInFace(3, 4, 15, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 5, 2, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 6, 14, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 7, 9, 1, 0, 0);

	 unit_cell->SetFace(4, 8);
	 unit_cell->SetEdgeInFace(4, 0, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 7, 1, 1, 0);
	 unit_cell->SetEdgeInFace(4, 2, 12, 1, 1, 1);
	 unit_cell->SetEdgeInFace(4, 3, 0, 1, 1, 1);
	 unit_cell->SetEdgeInFace(4, 4, 16, 0, 1, 1);
	 unit_cell->SetEdgeInFace(4, 5, 3, 0, 1, 1);
	 unit_cell->SetEdgeInFace(4, 6, 12, 0, 1, 1);
	 unit_cell->SetEdgeInFace(4, 7, 10, 0, 1, 0);

	 unit_cell->SetFace(5, 10);
	 unit_cell->SetEdgeInFace(5, 0, 9, 1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 6, 1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 2, 16, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 3, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 4, 0, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 5, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 6, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 7, 16, -1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 8, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 9, 3, 0, 0, 0);

	 unit_cell->SetFace(6, 10);
	 unit_cell->SetEdgeInFace(6, 0, 10, 0, 1, 0);
	 unit_cell->SetEdgeInFace(6, 1, 7, 0, 1, 0);
	 unit_cell->SetEdgeInFace(6, 2, 17, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 3, 4, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 4, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 5, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 6, 10, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 7, 17, -1, -1, 0);
	 unit_cell->SetEdgeInFace(6, 8, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 9, 4, 0, 0, 0);

	 unit_cell->SetFace(7, 11);
	 unit_cell->SetEdgeInFace(7, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 10, 0, 0, -1);
	 unit_cell->SetEdgeInFace(7, 3, 17, 0, -1, -1);
	 unit_cell->SetEdgeInFace(7, 4, 1, 1, 0, -1);
	 unit_cell->SetEdgeInFace(7, 5, 4, 1, 0, -1);
	 unit_cell->SetEdgeInFace(7, 6, 10, 1, 1, -1);
	 unit_cell->SetEdgeInFace(7, 7, 12, 1, 1, 0);
	 unit_cell->SetEdgeInFace(7, 8, 0, 1, 1, 0);
	 unit_cell->SetEdgeInFace(7, 9, 6, 1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 10, 9, 1, 0, 0);

	 unit_cell->SetFace(8, 11);
	 unit_cell->SetEdgeInFace(8, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 15, 1, 1, 0);
	 unit_cell->SetEdgeInFace(8, 4, 2, 1, 1, 0);
	 unit_cell->SetEdgeInFace(8, 5, 5, 1, 1, 0);
	 unit_cell->SetEdgeInFace(8, 6, 11, 0, 1, 0);
	 unit_cell->SetEdgeInFace(8, 7, 13, 0, 1, 0);
	 unit_cell->SetEdgeInFace(8, 8, 1, 0, 1, 0);
	 unit_cell->SetEdgeInFace(8, 9, 7, 0, 1, 0);
	 unit_cell->SetEdgeInFace(8, 10, 10, 0, 1, 0);

	 unit_cell->SetFace(9, 11);
	 unit_cell->SetEdgeInFace(9, 0, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 14, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 2, 6, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 3, 16, 0, 1, 0);
	 unit_cell->SetEdgeInFace(9, 4, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(9, 5, 0, 0, 1, 0);
	 unit_cell->SetEdgeInFace(9, 6, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 7, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 8, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 9, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 10, 11, 0, 0, 0);

	 unit_cell->SetFace(10, 11);
	 unit_cell->SetEdgeInFace(10, 0, 0, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 1, 12, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 2, 7, 0, 1, -1);
	 unit_cell->SetEdgeInFace(10, 3, 17, -1, 0, -1);
	 unit_cell->SetEdgeInFace(10, 4, 4, -1, 0, -1);
	 unit_cell->SetEdgeInFace(10, 5, 1, -1, 0, -1);
	 unit_cell->SetEdgeInFace(10, 6, 7, -1, 0, -1);
	 unit_cell->SetEdgeInFace(10, 7, 12, -1, 0, 0);
	 unit_cell->SetEdgeInFace(10, 8, 3, -1, 0, 0);
	 unit_cell->SetEdgeInFace(10, 9, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 10, 6, 0, 0, 0);

	 unit_cell->SetFace(11, 11);
	 unit_cell->SetEdgeInFace(11, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 3, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 4, 5, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 5, 2, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 6, 8, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 7, 13, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 8, 4, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 9, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 10, 7, 0, 0, 0);

	 unit_cell->SetFace(12, 11);
	 unit_cell->SetEdgeInFace(12, 0, 10, 0, 1, 0);
	 unit_cell->SetEdgeInFace(12, 1, 12, 0, 1, 1);
	 unit_cell->SetEdgeInFace(12, 2, 3, 0, 1, 1);
	 unit_cell->SetEdgeInFace(12, 3, 16, 0, 1, 1);
	 unit_cell->SetEdgeInFace(12, 4, 6, 1, 0, 1);
	 unit_cell->SetEdgeInFace(12, 5, 9, 1, 0, 1);
	 unit_cell->SetEdgeInFace(12, 6, 3, 0, 0, 1);
	 unit_cell->SetEdgeInFace(12, 7, 12, 0, 0, 1);
	 unit_cell->SetEdgeInFace(12, 8, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 9, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 10, 4, 0, 0, 0);

	 unit_cell->SetFace(13, 11);
	 unit_cell->SetEdgeInFace(13, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 2, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 3, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 4, 7, 1, 1, 0);
	 unit_cell->SetEdgeInFace(13, 5, 10, 1, 1, 0);
	 unit_cell->SetEdgeInFace(13, 6, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(13, 7, 13, 1, 0, 0);
	 unit_cell->SetEdgeInFace(13, 8, 8, 1, 0, 0);
	 unit_cell->SetEdgeInFace(13, 9, 2, 1, 0, 0);
	 unit_cell->SetEdgeInFace(13, 10, 5, 1, 0, 0);

	 unit_cell->SetFace(14, 11);
	 unit_cell->SetEdgeInFace(14, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 2, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 3, 15, 0, 1, 0);
	 unit_cell->SetEdgeInFace(14, 4, 8, 0, 1, 0);
	 unit_cell->SetEdgeInFace(14, 5, 11, 0, 1, 0);
	 unit_cell->SetEdgeInFace(14, 6, 5, 1, 1, 0);
	 unit_cell->SetEdgeInFace(14, 7, 14, 1, 1, 0);
	 unit_cell->SetEdgeInFace(14, 8, 9, 1, 1, 0);
	 unit_cell->SetEdgeInFace(14, 9, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(14, 10, 0, 0, 1, 0);

	 unit_cell->SetFace(15, 11);
	 unit_cell->SetEdgeInFace(15, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 1, 12, 0, 0, 1);
	 unit_cell->SetEdgeInFace(15, 2, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(15, 3, 16, -1, 0, 1);
	 unit_cell->SetEdgeInFace(15, 4, 9, 0, 0, 1);
	 unit_cell->SetEdgeInFace(15, 5, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(15, 6, 0, 0, 1, 1);
	 unit_cell->SetEdgeInFace(15, 7, 12, 0, 1, 1);
	 unit_cell->SetEdgeInFace(15, 8, 10, 0, 1, 0);
	 unit_cell->SetEdgeInFace(15, 9, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 10, 1, 0, 0, 0);

	 unit_cell->SetFace(16, 11);
	 unit_cell->SetEdgeInFace(16, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 1, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 2, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 3, 17, -1, -1, 0);
	 unit_cell->SetEdgeInFace(16, 4, 10, -1, 0, 0);
	 unit_cell->SetEdgeInFace(16, 5, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(16, 6, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(16, 7, 13, -1, 0, 0);
	 unit_cell->SetEdgeInFace(16, 8, 11, -1, 0, 0);
	 unit_cell->SetEdgeInFace(16, 9, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 10, 2, 0, 0, 0);

	 unit_cell->SetFace(17, 11);
	 unit_cell->SetEdgeInFace(17, 0, 9, 1, 0, 0);
	 unit_cell->SetEdgeInFace(17, 1, 14, 1, 0, 0);
	 unit_cell->SetEdgeInFace(17, 2, 2, 1, 0, 0);
	 unit_cell->SetEdgeInFace(17, 3, 15, 1, 0, 0);
	 unit_cell->SetEdgeInFace(17, 4, 11, 0, -1, 0);
	 unit_cell->SetEdgeInFace(17, 5, 8, 0, -1, 0);
	 unit_cell->SetEdgeInFace(17, 6, 2, 0, -1, 0);
	 unit_cell->SetEdgeInFace(17, 7, 14, 0, -1, 0);
	 unit_cell->SetEdgeInFace(17, 8, 6, 0, -1, 0);
	 unit_cell->SetEdgeInFace(17, 9, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 10, 3, 0, 0, 0);

	 return unit_cell;
}
