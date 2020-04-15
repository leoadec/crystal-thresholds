#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("ftw", 4, 12, 12);

	 // vertex 0 located at (0.0, 0.5, 0.5)
	 // vertex 1 located at (0.5, 0.0, 0.5)
	 // vertex 2 located at (0.5, 0.5, 0.0)
	 // vertex 3 located at (0.0, 0.0, 0.0)

	 unit_cell->SetEdge(0, 3, 0, 0, 0, 0);
	 unit_cell->SetEdge(1, 3, 1, -1, 0, 0);
	 unit_cell->SetEdge(2, 3, 0, 0, -1, 0);
	 unit_cell->SetEdge(3, 3, 1, 0, 0, 0);
	 unit_cell->SetEdge(4, 3, 0, 0, -1, -1);
	 unit_cell->SetEdge(5, 3, 1, 0, 0, -1);
	 unit_cell->SetEdge(6, 3, 0, 0, 0, -1);
	 unit_cell->SetEdge(7, 3, 1, -1, 0, -1);
	 unit_cell->SetEdge(8, 3, 2, 0, 0, 0);
	 unit_cell->SetEdge(9, 3, 2, 0, -1, 0);
	 unit_cell->SetEdge(10, 3, 2, -1, 0, 0);
	 unit_cell->SetEdge(11, 3, 2, -1, -1, 0);

	 unit_cell->SetFace(0, 4);
	 unit_cell->SetEdgeInFace(0, 0, 1, 1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 0, 1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 6, 1, 0, 1);
	 unit_cell->SetEdgeInFace(0, 3, 7, 1, 0, 1);

	 unit_cell->SetFace(1, 4);
	 unit_cell->SetEdgeInFace(1, 0, 2, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 1, 1, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 2, 7, 0, 1, 1);
	 unit_cell->SetEdgeInFace(1, 3, 4, 0, 1, 1);

	 unit_cell->SetFace(2, 4);
	 unit_cell->SetEdgeInFace(2, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 4, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 3, 5, 0, 0, 1);

	 unit_cell->SetFace(3, 4);
	 unit_cell->SetEdgeInFace(3, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 5, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 3, 6, 0, 0, 1);

	 unit_cell->SetFace(4, 4);
	 unit_cell->SetEdgeInFace(4, 0, 9, 0, 1, 0);
	 unit_cell->SetEdgeInFace(4, 1, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(4, 2, 1, 1, 1, 0);
	 unit_cell->SetEdgeInFace(4, 3, 11, 1, 1, 0);

	 unit_cell->SetFace(5, 4);
	 unit_cell->SetEdgeInFace(5, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 2, 2, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 3, 9, 0, 1, 0);

	 unit_cell->SetFace(6, 4);
	 unit_cell->SetEdgeInFace(6, 0, 10, 1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 1, 1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 2, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 3, 8, 0, 0, 0);

	 unit_cell->SetFace(7, 4);
	 unit_cell->SetEdgeInFace(7, 0, 11, 1, 1, 0);
	 unit_cell->SetEdgeInFace(7, 1, 2, 1, 1, 0);
	 unit_cell->SetEdgeInFace(7, 2, 0, 1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 3, 10, 1, 0, 0);

	 unit_cell->SetFace(8, 4);
	 unit_cell->SetEdgeInFace(8, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 7, 1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 10, 1, 0, 0);

	 unit_cell->SetFace(9, 4);
	 unit_cell->SetEdgeInFace(9, 0, 10, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 6, 1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 2, 4, 1, 1, 0);
	 unit_cell->SetEdgeInFace(9, 3, 11, 1, 1, 0);

	 unit_cell->SetFace(10, 4);
	 unit_cell->SetEdgeInFace(10, 0, 11, 1, 1, 0);
	 unit_cell->SetEdgeInFace(10, 1, 7, 1, 1, 0);
	 unit_cell->SetEdgeInFace(10, 2, 5, 0, 1, 0);
	 unit_cell->SetEdgeInFace(10, 3, 9, 0, 1, 0);

	 unit_cell->SetFace(11, 4);
	 unit_cell->SetEdgeInFace(11, 0, 9, 0, 1, 0);
	 unit_cell->SetEdgeInFace(11, 1, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(11, 2, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 3, 8, 0, 0, 0);

	 return unit_cell;
}
