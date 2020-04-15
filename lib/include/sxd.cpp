#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("sxd", 4, 12, 12);

	 // vertex 0 located at (0.0, 0.25, 0.0941)
	 // vertex 1 located at (0.0, 0.75, 0.9059)
	 // vertex 2 located at (0.5, 0.75, 0.5941)
	 // vertex 3 located at (0.5, 0.25, 0.4059)

	 unit_cell->SetEdge(0, 0, 1, 0, 0, -1);
	 unit_cell->SetEdge(1, 0, 1, 0, -1, -1);
	 unit_cell->SetEdge(2, 2, 3, 0, 1, 0);
	 unit_cell->SetEdge(3, 2, 3, 0, 0, 0);
	 unit_cell->SetEdge(4, 0, 3, 0, 0, 0);
	 unit_cell->SetEdge(5, 0, 3, -1, 0, 0);
	 unit_cell->SetEdge(6, 1, 2, 0, 0, 0);
	 unit_cell->SetEdge(7, 1, 2, -1, 0, 0);
	 unit_cell->SetEdge(8, 0, 0, 1, 0, 0);
	 unit_cell->SetEdge(9, 1, 1, 1, 0, 0);
	 unit_cell->SetEdge(10, 2, 2, 1, 0, 0);
	 unit_cell->SetEdge(11, 3, 3, 1, 0, 0);

	 unit_cell->SetFace(0, 3);
	 unit_cell->SetEdgeInFace(0, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 11, -1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 4, 0, 0, 0);

	 unit_cell->SetFace(1, 4);
	 unit_cell->SetEdgeInFace(1, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 9, 0, 0, -1);
	 unit_cell->SetEdgeInFace(1, 2, 0, 1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 3, 8, 0, 0, 0);

	 unit_cell->SetFace(2, 6);
	 unit_cell->SetEdgeInFace(2, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 3, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(2, 4, 1, 0, 1, 0);
	 unit_cell->SetEdgeInFace(2, 5, 0, 0, 0, 0);

	 unit_cell->SetFace(3, 3);
	 unit_cell->SetEdgeInFace(3, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 10, -1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 6, 0, 0, 0);

	 unit_cell->SetFace(4, 3);
	 unit_cell->SetEdgeInFace(4, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 7, 1, 0, 0);

	 unit_cell->SetFace(5, 3);
	 unit_cell->SetEdgeInFace(5, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 2, 5, 1, 0, 0);

	 unit_cell->SetFace(6, 4);
	 unit_cell->SetEdgeInFace(6, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 9, -1, -1, -1);
	 unit_cell->SetEdgeInFace(6, 2, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 3, 8, -1, 0, 0);

	 unit_cell->SetFace(7, 4);
	 unit_cell->SetEdgeInFace(7, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 11, 0, 1, 0);
	 unit_cell->SetEdgeInFace(7, 2, 2, 1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 3, 10, 0, 0, 0);

	 unit_cell->SetFace(8, 4);
	 unit_cell->SetEdgeInFace(8, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 11, -1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 3, -1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 10, -1, 0, 0);

	 unit_cell->SetFace(9, 6);
	 unit_cell->SetEdgeInFace(9, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 2, -1, -1, 0);
	 unit_cell->SetEdgeInFace(9, 2, 3, -1, -1, 0);
	 unit_cell->SetEdgeInFace(9, 3, 5, 0, -1, 0);
	 unit_cell->SetEdgeInFace(9, 4, 0, 0, -1, 0);
	 unit_cell->SetEdgeInFace(9, 5, 1, 0, 0, 0);

	 unit_cell->SetFace(10, 6);
	 unit_cell->SetEdgeInFace(10, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 2, 2, 0, -1, 0);
	 unit_cell->SetEdgeInFace(10, 3, 6, 0, -1, 0);
	 unit_cell->SetEdgeInFace(10, 4, 1, 0, 0, 1);
	 unit_cell->SetEdgeInFace(10, 5, 0, 0, 0, 1);

	 unit_cell->SetFace(11, 6);
	 unit_cell->SetEdgeInFace(11, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 2, -1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 3, -1, 1, 0);
	 unit_cell->SetEdgeInFace(11, 3, 7, 0, 1, 0);
	 unit_cell->SetEdgeInFace(11, 4, 0, 0, 1, 1);
	 unit_cell->SetEdgeInFace(11, 5, 1, 0, 1, 1);

	 return unit_cell;
}
