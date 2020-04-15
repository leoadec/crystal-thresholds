#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("fsf", 4, 10, 10);

	 // vertex 0 located at (0.0, 0.0, 0.5)
	 // vertex 1 located at (0.5, 0.5, 0.0)
	 // vertex 2 located at (0.0, 0.5, 0.18648)
	 // vertex 3 located at (0.5, 0.0, 0.68648)

	 unit_cell->SetEdge(0, 2, 2, 0, 1, 0);
	 unit_cell->SetEdge(1, 3, 3, 0, 1, 0);
	 unit_cell->SetEdge(2, 0, 3, 0, 0, 0);
	 unit_cell->SetEdge(3, 0, 3, -1, 0, 0);
	 unit_cell->SetEdge(4, 1, 2, 1, 0, 0);
	 unit_cell->SetEdge(5, 1, 2, 0, 0, 0);
	 unit_cell->SetEdge(6, 0, 2, 0, 0, 0);
	 unit_cell->SetEdge(7, 0, 2, 0, -1, 0);
	 unit_cell->SetEdge(8, 1, 3, 0, 1, -1);
	 unit_cell->SetEdge(9, 1, 3, 0, 0, -1);

	 unit_cell->SetFace(0, 3);
	 unit_cell->SetEdgeInFace(0, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 1, 0, 0, -1);
	 unit_cell->SetEdgeInFace(0, 2, 8, 0, 0, 0);

	 unit_cell->SetFace(1, 5);
	 unit_cell->SetEdgeInFace(1, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 0, 1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 2, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 3, 9, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 4, 8, 0, 0, 0);

	 unit_cell->SetFace(2, 6);
	 unit_cell->SetEdgeInFace(2, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 3, 1, 1, -1);
	 unit_cell->SetEdgeInFace(2, 2, 2, 1, 1, -1);
	 unit_cell->SetEdgeInFace(2, 3, 8, 1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 4, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 5, 4, 0, 0, 0);

	 unit_cell->SetFace(3, 3);
	 unit_cell->SetEdgeInFace(3, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 0, 0, -1, 0);
	 unit_cell->SetEdgeInFace(3, 2, 6, 0, 0, 0);

	 unit_cell->SetFace(4, 5);
	 unit_cell->SetEdgeInFace(4, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 0, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 2, 5, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 3, 8, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 4, 9, 0, 0, 0);

	 unit_cell->SetFace(5, 5);
	 unit_cell->SetEdgeInFace(5, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 2, 2, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 3, 7, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 4, 6, 0, 0, 0);

	 unit_cell->SetFace(6, 5);
	 unit_cell->SetEdgeInFace(6, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 1, -1, -1, 0);
	 unit_cell->SetEdgeInFace(6, 2, 3, 0, -1, 0);
	 unit_cell->SetEdgeInFace(6, 3, 6, 0, -1, 0);
	 unit_cell->SetEdgeInFace(6, 4, 7, 0, 0, 0);

	 unit_cell->SetFace(7, 6);
	 unit_cell->SetEdgeInFace(7, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 2, 0, 0, -1);
	 unit_cell->SetEdgeInFace(7, 2, 3, 0, 0, -1);
	 unit_cell->SetEdgeInFace(7, 3, 9, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 4, 4, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 5, 5, 0, 0, 0);

	 unit_cell->SetFace(8, 6);
	 unit_cell->SetEdgeInFace(8, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 6, 1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 4, 3, 1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 5, 2, 0, 0, 0);

	 unit_cell->SetFace(9, 6);
	 unit_cell->SetEdgeInFace(9, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 4, -1, -1, 0);
	 unit_cell->SetEdgeInFace(9, 2, 5, -1, -1, 0);
	 unit_cell->SetEdgeInFace(9, 3, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 4, 2, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 5, 3, 0, 0, 0);

	 return unit_cell;
}
