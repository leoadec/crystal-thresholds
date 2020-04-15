#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("rtw", 6, 14, 14);

	 // vertex 0 located at (0.0, 0.0, 0.0)
	 // vertex 1 located at (0.5, 0.5, 0.0)
	 // vertex 2 located at (0.36285, 0.13715, 0.0)
	 // vertex 3 located at (0.86285, 0.36285, 0.0)
	 // vertex 4 located at (0.63715, 0.86285, 0.0)
	 // vertex 5 located at (0.13715, 0.63715, 0.0)

	 unit_cell->SetEdge(0, 0, 5, 0, -1, 0);
	 unit_cell->SetEdge(1, 0, 2, 0, 0, 0);
	 unit_cell->SetEdge(2, 0, 3, -1, 0, 0);
	 unit_cell->SetEdge(3, 0, 4, -1, -1, 0);
	 unit_cell->SetEdge(4, 1, 4, 0, 0, 0);
	 unit_cell->SetEdge(5, 1, 5, 0, 0, 0);
	 unit_cell->SetEdge(6, 1, 2, 0, 0, 0);
	 unit_cell->SetEdge(7, 1, 3, 0, 0, 0);
	 unit_cell->SetEdge(8, 2, 2, 0, 0, 1);
	 unit_cell->SetEdge(9, 3, 3, 0, 0, 1);
	 unit_cell->SetEdge(10, 4, 4, 0, 0, 1);
	 unit_cell->SetEdge(11, 5, 5, 0, 0, 1);
	 unit_cell->SetEdge(12, 2, 4, 0, -1, 0);
	 unit_cell->SetEdge(13, 3, 5, 1, 0, 0);

	 unit_cell->SetFace(0, 4);
	 unit_cell->SetEdgeInFace(0, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 12, 0, 0, 1);
	 unit_cell->SetEdgeInFace(0, 2, 10, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 3, 12, 0, 0, 0);

	 unit_cell->SetFace(1, 5);
	 unit_cell->SetEdgeInFace(1, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 2, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 3, 13, -1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 4, 2, 0, 0, 0);

	 unit_cell->SetFace(2, 6);
	 unit_cell->SetEdgeInFace(2, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 1, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 3, 2, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 4, 9, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 5, 2, 0, 0, 0);

	 unit_cell->SetFace(3, 4);
	 unit_cell->SetEdgeInFace(3, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 13, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 2, 11, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 3, 13, 0, 0, 0);

	 unit_cell->SetFace(4, 5);
	 unit_cell->SetEdgeInFace(4, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 6, -1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 3, 12, -1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 4, 3, 0, 0, 0);

	 unit_cell->SetFace(5, 5);
	 unit_cell->SetEdgeInFace(5, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 4, -1, -1, 0);
	 unit_cell->SetEdgeInFace(5, 2, 7, -1, -1, 0);
	 unit_cell->SetEdgeInFace(5, 3, 13, -1, -1, 0);
	 unit_cell->SetEdgeInFace(5, 4, 0, 0, 0, 0);

	 unit_cell->SetFace(6, 5);
	 unit_cell->SetEdgeInFace(6, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 5, 0, -1, 0);
	 unit_cell->SetEdgeInFace(6, 2, 4, 0, -1, 0);
	 unit_cell->SetEdgeInFace(6, 3, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 4, 1, 0, 0, 0);

	 unit_cell->SetFace(7, 6);
	 unit_cell->SetEdgeInFace(7, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 9, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 2, 0, 0, 1);
	 unit_cell->SetEdgeInFace(7, 3, 3, 0, 0, 1);
	 unit_cell->SetEdgeInFace(7, 4, 10, -1, -1, 0);
	 unit_cell->SetEdgeInFace(7, 5, 3, 0, 0, 0);

	 unit_cell->SetFace(8, 6);
	 unit_cell->SetEdgeInFace(8, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 10, -1, -1, 0);
	 unit_cell->SetEdgeInFace(8, 2, 3, 0, 0, 1);
	 unit_cell->SetEdgeInFace(8, 3, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(8, 4, 11, 0, -1, 0);
	 unit_cell->SetEdgeInFace(8, 5, 0, 0, 0, 0);

	 unit_cell->SetFace(9, 6);
	 unit_cell->SetEdgeInFace(9, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 11, 0, -1, 0);
	 unit_cell->SetEdgeInFace(9, 2, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 3, 1, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 4, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 5, 1, 0, 0, 0);

	 unit_cell->SetFace(10, 6);
	 unit_cell->SetEdgeInFace(10, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 9, 0, 0, -1);
	 unit_cell->SetEdgeInFace(10, 2, 7, 0, 0, -1);
	 unit_cell->SetEdgeInFace(10, 3, 6, 0, 0, -1);
	 unit_cell->SetEdgeInFace(10, 4, 8, 0, 0, -1);
	 unit_cell->SetEdgeInFace(10, 5, 6, 0, 0, 0);

	 unit_cell->SetFace(11, 6);
	 unit_cell->SetEdgeInFace(11, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 10, 0, 0, -1);
	 unit_cell->SetEdgeInFace(11, 2, 4, 0, 0, -1);
	 unit_cell->SetEdgeInFace(11, 3, 7, 0, 0, -1);
	 unit_cell->SetEdgeInFace(11, 4, 9, 0, 0, -1);
	 unit_cell->SetEdgeInFace(11, 5, 7, 0, 0, 0);

	 unit_cell->SetFace(12, 6);
	 unit_cell->SetEdgeInFace(12, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 11, 0, 0, -1);
	 unit_cell->SetEdgeInFace(12, 2, 5, 0, 0, -1);
	 unit_cell->SetEdgeInFace(12, 3, 4, 0, 0, -1);
	 unit_cell->SetEdgeInFace(12, 4, 10, 0, 0, -1);
	 unit_cell->SetEdgeInFace(12, 5, 4, 0, 0, 0);

	 unit_cell->SetFace(13, 6);
	 unit_cell->SetEdgeInFace(13, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 8, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 2, 6, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 3, 5, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 4, 11, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 5, 5, 0, 0, 0);

	 return unit_cell;
}
