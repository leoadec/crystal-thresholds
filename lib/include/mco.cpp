#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("mco", 9, 15, 15);

	 // vertex 0 located at (0.0, 0.0, 0.0)
	 // vertex 1 located at (0.33333, 0.66667, 0.5)
	 // vertex 2 located at (0.66667, 0.33333, 0.5)
	 // vertex 3 located at (0.0, 0.69719, 0.0)
	 // vertex 4 located at (0.69719, 0.0, 0.0)
	 // vertex 5 located at (0.30281, 0.30281, 0.0)
	 // vertex 6 located at (0.0, 0.59145, 0.5)
	 // vertex 7 located at (0.59145, 0.0, 0.5)
	 // vertex 8 located at (0.40854999999999997, 0.40854999999999997, 0.5)

	 unit_cell->SetEdge(0, 6, 1, 0, 0, 0);
	 unit_cell->SetEdge(1, 7, 1, 0, -1, 0);
	 unit_cell->SetEdge(2, 8, 1, 0, 0, 0);
	 unit_cell->SetEdge(3, 7, 2, 0, 0, 0);
	 unit_cell->SetEdge(4, 8, 2, 0, 0, 0);
	 unit_cell->SetEdge(5, 6, 2, -1, 0, 0);
	 unit_cell->SetEdge(6, 0, 5, 0, 0, 0);
	 unit_cell->SetEdge(7, 0, 3, 0, -1, 0);
	 unit_cell->SetEdge(8, 0, 4, -1, 0, 0);
	 unit_cell->SetEdge(9, 3, 6, 0, 0, 0);
	 unit_cell->SetEdge(10, 4, 7, 0, 0, -1);
	 unit_cell->SetEdge(11, 5, 8, 0, 0, 0);
	 unit_cell->SetEdge(12, 3, 6, 0, 0, -1);
	 unit_cell->SetEdge(13, 4, 7, 0, 0, 0);
	 unit_cell->SetEdge(14, 5, 8, 0, 0, -1);

	 unit_cell->SetFace(0, 8);
	 unit_cell->SetEdgeInFace(0, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 2, 5, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 3, 4, -1, -1, 0);
	 unit_cell->SetEdgeInFace(0, 4, 2, -1, -1, 0);
	 unit_cell->SetEdgeInFace(0, 5, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 6, 13, -1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 7, 8, 0, 0, 0);

	 unit_cell->SetFace(1, 8);
	 unit_cell->SetEdgeInFace(1, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 2, 12, 0, -1, 1);
	 unit_cell->SetEdgeInFace(1, 3, 7, 0, 0, 1);
	 unit_cell->SetEdgeInFace(1, 4, 8, 0, 0, 1);
	 unit_cell->SetEdgeInFace(1, 5, 10, -1, 0, 1);
	 unit_cell->SetEdgeInFace(1, 6, 13, -1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 7, 8, 0, 0, 0);

	 unit_cell->SetFace(2, 8);
	 unit_cell->SetEdgeInFace(2, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 12, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 2, 9, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 3, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 4, 1, 0, 1, 1);
	 unit_cell->SetEdgeInFace(2, 5, 13, 0, 1, 1);
	 unit_cell->SetEdgeInFace(2, 6, 10, 0, 1, 1);
	 unit_cell->SetEdgeInFace(2, 7, 1, 0, 1, 0);

	 unit_cell->SetFace(3, 8);
	 unit_cell->SetEdgeInFace(3, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 10, -1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 3, -1, 0, -1);
	 unit_cell->SetEdgeInFace(3, 3, 5, 0, 0, -1);
	 unit_cell->SetEdgeInFace(3, 4, 0, 0, 0, -1);
	 unit_cell->SetEdgeInFace(3, 5, 2, 0, 0, -1);
	 unit_cell->SetEdgeInFace(3, 6, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 7, 6, 0, 0, 0);

	 unit_cell->SetFace(4, 8);
	 unit_cell->SetEdgeInFace(4, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 3, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 4, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 5, 0, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 6, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 7, 7, 0, 0, 0);

	 unit_cell->SetFace(5, 8);
	 unit_cell->SetEdgeInFace(5, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 12, 0, -1, 0);
	 unit_cell->SetEdgeInFace(5, 2, 5, 0, -1, -1);
	 unit_cell->SetEdgeInFace(5, 3, 4, -1, -1, -1);
	 unit_cell->SetEdgeInFace(5, 4, 2, -1, -1, -1);
	 unit_cell->SetEdgeInFace(5, 5, 1, -1, 0, -1);
	 unit_cell->SetEdgeInFace(5, 6, 10, -1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 7, 8, 0, 0, 0);

	 unit_cell->SetFace(6, 8);
	 unit_cell->SetEdgeInFace(6, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 13, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 2, 3, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 3, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 4, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 5, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 6, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 7, 6, 0, 0, 0);

	 unit_cell->SetFace(7, 8);
	 unit_cell->SetEdgeInFace(7, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 4, 0, 0, -1);
	 unit_cell->SetEdgeInFace(7, 3, 3, 0, 0, -1);
	 unit_cell->SetEdgeInFace(7, 4, 1, 0, 0, -1);
	 unit_cell->SetEdgeInFace(7, 5, 0, 0, -1, -1);
	 unit_cell->SetEdgeInFace(7, 6, 12, 0, -1, 0);
	 unit_cell->SetEdgeInFace(7, 7, 7, 0, 0, 0);

	 unit_cell->SetFace(8, 8);
	 unit_cell->SetEdgeInFace(8, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 10, -1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 13, -1, 0, -1);
	 unit_cell->SetEdgeInFace(8, 3, 8, 0, 0, -1);
	 unit_cell->SetEdgeInFace(8, 4, 6, 0, 0, -1);
	 unit_cell->SetEdgeInFace(8, 5, 11, 0, 0, -1);
	 unit_cell->SetEdgeInFace(8, 6, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 7, 6, 0, 0, 0);

	 unit_cell->SetFace(9, 8);
	 unit_cell->SetEdgeInFace(9, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 2, 14, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 3, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 4, 7, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 5, 12, 0, -1, 1);
	 unit_cell->SetEdgeInFace(9, 6, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(9, 7, 7, 0, 0, 0);

	 unit_cell->SetFace(10, 8);
	 unit_cell->SetEdgeInFace(10, 0, 1, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 1, 13, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 2, 10, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 3, 1, 0, 1, -1);
	 unit_cell->SetEdgeInFace(10, 4, 2, 0, 0, -1);
	 unit_cell->SetEdgeInFace(10, 5, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 6, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 7, 2, 0, 0, 0);

	 unit_cell->SetFace(11, 8);
	 unit_cell->SetEdgeInFace(11, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 14, 0, 0, 1);
	 unit_cell->SetEdgeInFace(11, 2, 11, 0, 0, 1);
	 unit_cell->SetEdgeInFace(11, 3, 2, 0, 0, 1);
	 unit_cell->SetEdgeInFace(11, 4, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(11, 5, 9, 0, 0, 1);
	 unit_cell->SetEdgeInFace(11, 6, 12, 0, 0, 1);
	 unit_cell->SetEdgeInFace(11, 7, 0, 0, 0, 0);

	 unit_cell->SetFace(12, 8);
	 unit_cell->SetEdgeInFace(12, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 10, 0, 0, 1);
	 unit_cell->SetEdgeInFace(12, 2, 13, 0, 0, 1);
	 unit_cell->SetEdgeInFace(12, 3, 3, 0, 0, 1);
	 unit_cell->SetEdgeInFace(12, 4, 5, 1, 0, 1);
	 unit_cell->SetEdgeInFace(12, 5, 9, 1, 0, 1);
	 unit_cell->SetEdgeInFace(12, 6, 12, 1, 0, 1);
	 unit_cell->SetEdgeInFace(12, 7, 5, 1, 0, 0);

	 unit_cell->SetFace(13, 8);
	 unit_cell->SetEdgeInFace(13, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 2, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 3, 4, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 4, 3, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 5, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 6, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 7, 3, 0, 0, 0);

	 unit_cell->SetFace(14, 8);
	 unit_cell->SetEdgeInFace(14, 0, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 12, 1, 0, 1);
	 unit_cell->SetEdgeInFace(14, 2, 9, 1, 0, 1);
	 unit_cell->SetEdgeInFace(14, 3, 5, 1, 0, 1);
	 unit_cell->SetEdgeInFace(14, 4, 4, 0, 0, 1);
	 unit_cell->SetEdgeInFace(14, 5, 11, 0, 0, 1);
	 unit_cell->SetEdgeInFace(14, 6, 14, 0, 0, 1);
	 unit_cell->SetEdgeInFace(14, 7, 4, 0, 0, 0);

	 return unit_cell;
}
