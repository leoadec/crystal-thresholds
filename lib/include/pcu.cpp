#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("pcu", 1, 3, 3);

	 // vertex 0 located at (0.0, 0.0, 0.0)

	 unit_cell->SetEdge(0, 0, 0, 0, 0, 1);
	 unit_cell->SetEdge(1, 0, 0, 1, 0, 0);
	 unit_cell->SetEdge(2, 0, 0, 0, 1, 0);

	 unit_cell->SetFace(0, 4);
	 unit_cell->SetEdgeInFace(0, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 1, 0, 1, 0);
	 unit_cell->SetEdgeInFace(0, 2, 2, 1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 3, 1, 0, 0, 0);

	 unit_cell->SetFace(1, 4);
	 unit_cell->SetEdgeInFace(1, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 2, 0, 0, 1);
	 unit_cell->SetEdgeInFace(1, 2, 0, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 3, 2, 0, 0, 0);

	 unit_cell->SetFace(2, 4);
	 unit_cell->SetEdgeInFace(2, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 1, -1, 0, 1);
	 unit_cell->SetEdgeInFace(2, 2, 0, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 3, 1, -1, 0, 0);

	 return unit_cell;
}
