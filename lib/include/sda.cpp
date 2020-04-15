#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("sda", 4, 12, 12);

	 // vertex 0 located at (0.0, 0.0, 0.5)
	 // vertex 1 located at (0.0, 0.5, 0.75)
	 // vertex 2 located at (0.5, 0.5, 0.0)
	 // vertex 3 located at (0.5, 0.0, 0.25)

	 unit_cell->SetEdge(0, 0, 0, 1, 0, 0);
	 unit_cell->SetEdge(1, 1, 1, 0, 1, 0);
	 unit_cell->SetEdge(2, 2, 2, -1, 0, 0);
	 unit_cell->SetEdge(3, 3, 3, 0, -1, 0);
	 unit_cell->SetEdge(4, 0, 3, 0, 0, 0);
	 unit_cell->SetEdge(5, 1, 0, 0, 1, 0);
	 unit_cell->SetEdge(6, 2, 1, 0, 0, -1);
	 unit_cell->SetEdge(7, 3, 2, 0, -1, 0);
	 unit_cell->SetEdge(8, 0, 3, -1, 0, 0);
	 unit_cell->SetEdge(9, 1, 0, 0, 0, 0);
	 unit_cell->SetEdge(10, 2, 1, 1, 0, -1);
	 unit_cell->SetEdge(11, 3, 2, 0, 0, 0);

	 unit_cell->SetFace(0, 3);
	 unit_cell->SetEdgeInFace(0, 0, 5, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 1, 1, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 2, 9, 0, 0, 0);

	 unit_cell->SetFace(1, 5);
	 unit_cell->SetEdgeInFace(1, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 2, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 3, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 4, 9, 0, 0, 0);

	 unit_cell->SetFace(2, 3);
	 unit_cell->SetEdgeInFace(2, 0, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 1, 2, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 2, 10, -1, 0, 1);

	 unit_cell->SetFace(3, 3);
	 unit_cell->SetEdgeInFace(3, 0, 7, 0, 1, 0);
	 unit_cell->SetEdgeInFace(3, 1, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(3, 2, 11, 0, 0, 0);

	 unit_cell->SetFace(4, 3);
	 unit_cell->SetEdgeInFace(4, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 8, 1, 0, 0);

	 unit_cell->SetFace(5, 5);
	 unit_cell->SetEdgeInFace(5, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 0, -1, 1, 0);
	 unit_cell->SetEdgeInFace(5, 2, 5, -1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 3, 6, -1, 0, 1);
	 unit_cell->SetEdgeInFace(5, 4, 10, -1, 0, 1);

	 unit_cell->SetFace(6, 5);
	 unit_cell->SetEdgeInFace(6, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 1, 0, -1, -1);
	 unit_cell->SetEdgeInFace(6, 2, 6, 0, -1, 0);
	 unit_cell->SetEdgeInFace(6, 3, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 4, 11, 0, 0, 0);

	 unit_cell->SetFace(7, 5);
	 unit_cell->SetEdgeInFace(7, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 2, 1, -1, 0);
	 unit_cell->SetEdgeInFace(7, 2, 7, 1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 3, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 4, 8, 1, 0, 0);

	 unit_cell->SetFace(8, 5);
	 unit_cell->SetEdgeInFace(8, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 3, -1, 1, 0);
	 unit_cell->SetEdgeInFace(8, 2, 8, 0, 1, 0);
	 unit_cell->SetEdgeInFace(8, 3, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 4, 9, 0, 0, 0);

	 unit_cell->SetFace(9, 5);
	 unit_cell->SetEdgeInFace(9, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 0, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 2, 9, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 3, 6, -1, 0, 1);
	 unit_cell->SetEdgeInFace(9, 4, 10, -1, 0, 1);

	 unit_cell->SetFace(10, 5);
	 unit_cell->SetEdgeInFace(10, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 1, 1, -1, -1);
	 unit_cell->SetEdgeInFace(10, 2, 10, 0, -1, 0);
	 unit_cell->SetEdgeInFace(10, 3, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 4, 11, 0, 0, 0);

	 unit_cell->SetFace(11, 5);
	 unit_cell->SetEdgeInFace(11, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 2, 1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 11, 1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 3, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 4, 8, 1, 0, 0);

	 return unit_cell;
}
