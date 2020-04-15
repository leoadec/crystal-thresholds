#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("mab", 2, 6, 6);

	 // vertex 0 located at (0.0, 0.0, 0.0)
	 // vertex 1 located at (0.5, 0.0, 0.5)

	 unit_cell->SetEdge(0, 0, 1, 0, 0, 0);
	 unit_cell->SetEdge(1, 1, 0, 0, 0, 1);
	 unit_cell->SetEdge(2, 0, 1, -1, 0, -1);
	 unit_cell->SetEdge(3, 1, 0, 1, 0, 0);
	 unit_cell->SetEdge(4, 0, 0, 0, 1, 1);
	 unit_cell->SetEdge(5, 1, 1, 0, -1, 1);

	 unit_cell->SetFace(0, 4);
	 unit_cell->SetEdgeInFace(0, 0, 1, 0, 0, -1);
	 unit_cell->SetEdgeInFace(0, 1, 2, 1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 3, 0, 0, 0, 0);

	 unit_cell->SetFace(1, 6);
	 unit_cell->SetEdgeInFace(1, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 1, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 2, 5, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 3, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(1, 4, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 5, 0, 0, 0, 0);

	 unit_cell->SetFace(2, 4);
	 unit_cell->SetEdgeInFace(2, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 3, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 2, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 3, 1, 0, 0, 0);

	 unit_cell->SetFace(3, 6);
	 unit_cell->SetEdgeInFace(3, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 0, 0, -1, 1);
	 unit_cell->SetEdgeInFace(3, 2, 4, 0, -1, 1);
	 unit_cell->SetEdgeInFace(3, 3, 1, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 4, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 5, 1, 0, 0, 0);

	 unit_cell->SetFace(4, 6);
	 unit_cell->SetEdgeInFace(4, 0, 4, 0, -1, -1);
	 unit_cell->SetEdgeInFace(4, 1, 3, -1, -1, -1);
	 unit_cell->SetEdgeInFace(4, 2, 5, -1, 0, -2);
	 unit_cell->SetEdgeInFace(4, 3, 2, 0, 0, -1);
	 unit_cell->SetEdgeInFace(4, 4, 3, -1, 0, -1);
	 unit_cell->SetEdgeInFace(4, 5, 2, 0, 0, 0);

	 unit_cell->SetFace(5, 6);
	 unit_cell->SetEdgeInFace(5, 0, 5, 0, 1, -1);
	 unit_cell->SetEdgeInFace(5, 1, 2, 1, 1, 0);
	 unit_cell->SetEdgeInFace(5, 2, 4, 1, 0, -1);
	 unit_cell->SetEdgeInFace(5, 3, 3, 0, 0, -1);
	 unit_cell->SetEdgeInFace(5, 4, 2, 1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 5, 3, 0, 0, 0);

	 return unit_cell;
}
