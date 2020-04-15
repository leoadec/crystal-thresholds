#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("qtz-x", 3, 9, 9);

	 // vertex 0 located at (0.0, 0.5, 0.16667)
	 // vertex 1 located at (0.5, 0.0, 0.5000033333333334)
	 // vertex 2 located at (0.5, 0.5, 0.8333366666666666)

	 unit_cell->SetEdge(0, 0, 0, 0, 1, 0);
	 unit_cell->SetEdge(1, 1, 1, -1, 0, 0);
	 unit_cell->SetEdge(2, 2, 2, -1, -1, 0);
	 unit_cell->SetEdge(3, 0, 2, 0, 0, -1);
	 unit_cell->SetEdge(4, 1, 0, 1, 0, 0);
	 unit_cell->SetEdge(5, 2, 1, 0, 1, 0);
	 unit_cell->SetEdge(6, 0, 2, -1, 0, -1);
	 unit_cell->SetEdge(7, 1, 0, 0, -1, 0);
	 unit_cell->SetEdge(8, 2, 1, 0, 0, 0);

	 unit_cell->SetFace(0, 4);
	 unit_cell->SetEdgeInFace(0, 0, 1, 1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 7, 1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 0, 1, -1, 0);
	 unit_cell->SetEdgeInFace(0, 3, 4, 0, 0, 0);

	 unit_cell->SetFace(1, 5);
	 unit_cell->SetEdgeInFace(1, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 0, 1, -1, 0);
	 unit_cell->SetEdgeInFace(1, 2, 6, 1, -1, 0);
	 unit_cell->SetEdgeInFace(1, 3, 3, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 4, 7, 0, 0, 0);

	 unit_cell->SetFace(2, 4);
	 unit_cell->SetEdgeInFace(2, 0, 2, 1, 1, 0);
	 unit_cell->SetEdgeInFace(2, 1, 8, 1, 1, 0);
	 unit_cell->SetEdgeInFace(2, 2, 1, 1, 1, 0);
	 unit_cell->SetEdgeInFace(2, 3, 5, 0, 0, 0);

	 unit_cell->SetFace(3, 4);
	 unit_cell->SetEdgeInFace(3, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(3, 2, 2, 0, 1, -1);
	 unit_cell->SetEdgeInFace(3, 3, 6, 0, 0, 0);

	 unit_cell->SetFace(4, 5);
	 unit_cell->SetEdgeInFace(4, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 1, 1, 1, 0);
	 unit_cell->SetEdgeInFace(4, 2, 7, 1, 1, 0);
	 unit_cell->SetEdgeInFace(4, 3, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 4, 8, 0, 0, 0);

	 unit_cell->SetFace(5, 5);
	 unit_cell->SetEdgeInFace(5, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 2, 0, 1, -1);
	 unit_cell->SetEdgeInFace(5, 2, 8, 0, 1, -1);
	 unit_cell->SetEdgeInFace(5, 3, 5, 0, 0, -1);
	 unit_cell->SetEdgeInFace(5, 4, 3, 0, 0, 0);

	 unit_cell->SetFace(6, 5);
	 unit_cell->SetEdgeInFace(6, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 0, 0, -1, 0);
	 unit_cell->SetEdgeInFace(6, 2, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 3, 6, 1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 4, 4, 0, 0, 0);

	 unit_cell->SetFace(7, 5);
	 unit_cell->SetEdgeInFace(7, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 4, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 3, 7, 0, 1, 0);
	 unit_cell->SetEdgeInFace(7, 4, 5, 0, 0, 0);

	 unit_cell->SetFace(8, 5);
	 unit_cell->SetEdgeInFace(8, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 2, 0, 0, -1);
	 unit_cell->SetEdgeInFace(8, 2, 5, -1, -1, -1);
	 unit_cell->SetEdgeInFace(8, 3, 8, -1, 0, -1);
	 unit_cell->SetEdgeInFace(8, 4, 6, 0, 0, 0);

	 return unit_cell;
}
