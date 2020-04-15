#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("ttv", 7, 15, 15);

	 // vertex 0 located at (0.0, 0.22572, 0.5)
	 // vertex 1 located at (0.0, 0.77428, 0.5)
	 // vertex 2 located at (0.5, 0.0, 0.22572)
	 // vertex 3 located at (0.5, 0.0, 0.77428)
	 // vertex 4 located at (0.22572, 0.5, 0.0)
	 // vertex 5 located at (0.77428, 0.5, 0.0)
	 // vertex 6 located at (0.0, 0.0, 0.0)

	 unit_cell->SetEdge(0, 0, 1, 0, 0, 0);
	 unit_cell->SetEdge(1, 2, 3, 0, 0, 0);
	 unit_cell->SetEdge(2, 4, 5, 0, 0, 0);
	 unit_cell->SetEdge(3, 6, 0, 0, 0, 0);
	 unit_cell->SetEdge(4, 6, 1, 0, -1, 0);
	 unit_cell->SetEdge(5, 6, 1, 0, -1, -1);
	 unit_cell->SetEdge(6, 6, 0, 0, 0, -1);
	 unit_cell->SetEdge(7, 6, 2, 0, 0, 0);
	 unit_cell->SetEdge(8, 6, 2, -1, 0, 0);
	 unit_cell->SetEdge(9, 6, 3, 0, 0, -1);
	 unit_cell->SetEdge(10, 6, 3, -1, 0, -1);
	 unit_cell->SetEdge(11, 6, 4, 0, 0, 0);
	 unit_cell->SetEdge(12, 6, 4, 0, -1, 0);
	 unit_cell->SetEdge(13, 6, 5, -1, 0, 0);
	 unit_cell->SetEdge(14, 6, 5, -1, -1, 0);

	 unit_cell->SetFace(0, 4);
	 unit_cell->SetEdgeInFace(0, 0, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(0, 1, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(0, 2, 6, 0, 1, 1);
	 unit_cell->SetEdgeInFace(0, 3, 5, 0, 1, 1);

	 unit_cell->SetFace(1, 5);
	 unit_cell->SetEdgeInFace(1, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(1, 2, 11, 0, 0, 1);
	 unit_cell->SetEdgeInFace(1, 3, 12, 0, 1, 1);
	 unit_cell->SetEdgeInFace(1, 4, 5, 0, 1, 1);

	 unit_cell->SetFace(2, 4);
	 unit_cell->SetEdgeInFace(2, 0, 9, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 1, 7, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 2, 8, 1, 0, 1);
	 unit_cell->SetEdgeInFace(2, 3, 10, 1, 0, 1);

	 unit_cell->SetFace(3, 4);
	 unit_cell->SetEdgeInFace(3, 0, 13, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 11, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 12, 1, 1, 0);
	 unit_cell->SetEdgeInFace(3, 3, 14, 1, 1, 0);

	 unit_cell->SetFace(4, 5);
	 unit_cell->SetEdgeInFace(4, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 5, 0, 1, 1);
	 unit_cell->SetEdgeInFace(4, 2, 14, 0, 1, 1);
	 unit_cell->SetEdgeInFace(4, 3, 13, 0, 0, 1);
	 unit_cell->SetEdgeInFace(4, 4, 6, 0, 0, 1);

	 unit_cell->SetFace(5, 5);
	 unit_cell->SetEdgeInFace(5, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 2, 12, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 3, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 4, 3, 0, 0, 0);

	 unit_cell->SetFace(6, 5);
	 unit_cell->SetEdgeInFace(6, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 2, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 3, 14, 0, 1, 0);
	 unit_cell->SetEdgeInFace(6, 4, 4, 0, 1, 0);

	 unit_cell->SetFace(7, 5);
	 unit_cell->SetEdgeInFace(7, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 8, 1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 3, 1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 3, 6, 1, 0, 1);
	 unit_cell->SetEdgeInFace(7, 4, 10, 1, 0, 1);

	 unit_cell->SetFace(8, 5);
	 unit_cell->SetEdgeInFace(8, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 5, 0, 0, 1);
	 unit_cell->SetEdgeInFace(8, 4, 9, 0, 0, 1);

	 unit_cell->SetFace(9, 5);
	 unit_cell->SetEdgeInFace(9, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 10, 1, 0, 1);
	 unit_cell->SetEdgeInFace(9, 2, 5, 1, 0, 1);
	 unit_cell->SetEdgeInFace(9, 3, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 4, 8, 1, 0, 0);

	 unit_cell->SetFace(10, 5);
	 unit_cell->SetEdgeInFace(10, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 9, 0, 0, 1);
	 unit_cell->SetEdgeInFace(10, 2, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(10, 3, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 4, 7, 0, 0, 0);

	 unit_cell->SetFace(11, 5);
	 unit_cell->SetEdgeInFace(11, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 12, 0, 1, 0);
	 unit_cell->SetEdgeInFace(11, 2, 7, 0, 1, 0);
	 unit_cell->SetEdgeInFace(11, 3, 8, 1, 1, 0);
	 unit_cell->SetEdgeInFace(11, 4, 14, 1, 1, 0);

	 unit_cell->SetFace(12, 5);
	 unit_cell->SetEdgeInFace(12, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 2, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 3, 10, 1, 0, 0);
	 unit_cell->SetEdgeInFace(12, 4, 13, 1, 0, 0);

	 unit_cell->SetFace(13, 5);
	 unit_cell->SetEdgeInFace(13, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 14, 1, 1, 0);
	 unit_cell->SetEdgeInFace(13, 2, 10, 1, 1, 0);
	 unit_cell->SetEdgeInFace(13, 3, 9, 0, 1, 0);
	 unit_cell->SetEdgeInFace(13, 4, 12, 0, 1, 0);

	 unit_cell->SetFace(14, 5);
	 unit_cell->SetEdgeInFace(14, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 13, 1, 0, 0);
	 unit_cell->SetEdgeInFace(14, 2, 8, 1, 0, 0);
	 unit_cell->SetEdgeInFace(14, 3, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 4, 11, 0, 0, 0);

	 return unit_cell;
}
