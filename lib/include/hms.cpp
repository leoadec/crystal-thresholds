#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("hms", 2, 4, 4);

	 // vertex 0 located at (0.0, 0.0, 0.0)
	 // vertex 1 located at (0.66667, 0.33333, 0.0)

	 unit_cell->SetEdge(0, 1, 1, 0, 0, 1);
	 unit_cell->SetEdge(1, 0, 1, 0, 0, 0);
	 unit_cell->SetEdge(2, 0, 1, -1, -1, 0);
	 unit_cell->SetEdge(3, 0, 1, -1, 0, 0);

	 unit_cell->SetFace(0, 6);
	 unit_cell->SetEdgeInFace(0, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 2, 0, 1, 0);
	 unit_cell->SetEdgeInFace(0, 2, 1, 0, 1, 0);
	 unit_cell->SetEdgeInFace(0, 3, 3, 1, 1, 0);
	 unit_cell->SetEdgeInFace(0, 4, 2, 1, 1, 0);
	 unit_cell->SetEdgeInFace(0, 5, 1, 0, 0, 0);

	 unit_cell->SetFace(1, 6);
	 unit_cell->SetEdgeInFace(1, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 0, -1, 0, -1);
	 unit_cell->SetEdgeInFace(1, 2, 3, 0, 0, -1);
	 unit_cell->SetEdgeInFace(1, 3, 1, 0, 0, -1);
	 unit_cell->SetEdgeInFace(1, 4, 0, 0, 0, -1);
	 unit_cell->SetEdgeInFace(1, 5, 1, 0, 0, 0);

	 unit_cell->SetFace(2, 6);
	 unit_cell->SetEdgeInFace(2, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 1, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 3, 2, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 4, 0, -1, -1, 0);
	 unit_cell->SetEdgeInFace(2, 5, 2, 0, 0, 0);

	 unit_cell->SetFace(3, 6);
	 unit_cell->SetEdgeInFace(3, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 0, -1, -1, -1);
	 unit_cell->SetEdgeInFace(3, 2, 2, 0, 0, -1);
	 unit_cell->SetEdgeInFace(3, 3, 3, 0, 0, -1);
	 unit_cell->SetEdgeInFace(3, 4, 0, -1, 0, -1);
	 unit_cell->SetEdgeInFace(3, 5, 3, 0, 0, 0);

	 return unit_cell;
}
