#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("tfa", 6, 10, 10);

	 // vertex 0 located at (0.0, 0.0, 0.13378)
	 // vertex 1 located at (0.0, 0.0, 0.86622)
	 // vertex 2 located at (0.5, 0.5, 0.63378)
	 // vertex 3 located at (0.5, 0.5, 0.36622)
	 // vertex 4 located at (0.5, 0.0, 0.25)
	 // vertex 5 located at (0.0, 0.5, 0.75)

	 unit_cell->SetEdge(0, 0, 4, 0, 0, 0);
	 unit_cell->SetEdge(1, 1, 5, 0, -1, 0);
	 unit_cell->SetEdge(2, 0, 4, -1, 0, 0);
	 unit_cell->SetEdge(3, 1, 5, 0, 0, 0);
	 unit_cell->SetEdge(4, 2, 5, 1, 0, 0);
	 unit_cell->SetEdge(5, 3, 4, 0, 0, 0);
	 unit_cell->SetEdge(6, 2, 5, 0, 0, 0);
	 unit_cell->SetEdge(7, 3, 4, 0, 1, 0);
	 unit_cell->SetEdge(8, 0, 1, 0, 0, -1);
	 unit_cell->SetEdge(9, 2, 3, 0, 0, 0);

	 unit_cell->SetFace(0, 8);
	 unit_cell->SetEdgeInFace(0, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 7, -1, -1, 0);
	 unit_cell->SetEdgeInFace(0, 2, 9, -1, -1, 0);
	 unit_cell->SetEdgeInFace(0, 3, 4, -1, -1, 0);
	 unit_cell->SetEdgeInFace(0, 4, 6, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 5, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 6, 7, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 7, 0, 0, 0, 0);

	 unit_cell->SetFace(1, 8);
	 unit_cell->SetEdgeInFace(1, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 7, -1, -1, 0);
	 unit_cell->SetEdgeInFace(1, 2, 5, -1, -1, 0);
	 unit_cell->SetEdgeInFace(1, 3, 2, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 4, 0, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 5, 5, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 6, 7, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 7, 0, 0, 0, 0);

	 unit_cell->SetFace(2, 8);
	 unit_cell->SetEdgeInFace(2, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 4, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 9, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 3, 5, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 4, 7, -1, -1, 0);
	 unit_cell->SetEdgeInFace(2, 5, 9, -1, -1, 0);
	 unit_cell->SetEdgeInFace(2, 6, 4, -1, -1, 0);
	 unit_cell->SetEdgeInFace(2, 7, 1, 0, 0, 0);

	 unit_cell->SetFace(3, 8);
	 unit_cell->SetEdgeInFace(3, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 3, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 4, 4, -1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 5, 9, -1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 6, 5, -1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 7, 2, 0, 0, 0);

	 unit_cell->SetFace(4, 8);
	 unit_cell->SetEdgeInFace(4, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 6, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 2, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 3, 7, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 4, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 5, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 6, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 7, 3, 0, 0, 0);

	 unit_cell->SetFace(5, 8);
	 unit_cell->SetEdgeInFace(5, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 2, 8, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 3, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 4, 2, 1, 0, 1);
	 unit_cell->SetEdgeInFace(5, 5, 8, 1, 0, 1);
	 unit_cell->SetEdgeInFace(5, 6, 3, 1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 7, 4, 0, 0, 0);

	 unit_cell->SetFace(6, 8);
	 unit_cell->SetEdgeInFace(6, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 0, 0, 1, 0);
	 unit_cell->SetEdgeInFace(6, 2, 8, 0, 1, 0);
	 unit_cell->SetEdgeInFace(6, 3, 1, 0, 1, -1);
	 unit_cell->SetEdgeInFace(6, 4, 3, 0, 0, -1);
	 unit_cell->SetEdgeInFace(6, 5, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 6, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 7, 5, 0, 0, 0);

	 unit_cell->SetFace(7, 8);
	 unit_cell->SetEdgeInFace(7, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 1, 1, 1, 0);
	 unit_cell->SetEdgeInFace(7, 2, 8, 1, 1, 1);
	 unit_cell->SetEdgeInFace(7, 3, 2, 1, 1, 1);
	 unit_cell->SetEdgeInFace(7, 4, 0, 0, 1, 1);
	 unit_cell->SetEdgeInFace(7, 5, 8, 0, 1, 1);
	 unit_cell->SetEdgeInFace(7, 6, 1, 0, 1, 0);
	 unit_cell->SetEdgeInFace(7, 7, 6, 0, 0, 0);

	 unit_cell->SetFace(8, 8);
	 unit_cell->SetEdgeInFace(8, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 2, 1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 8, 1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 3, 1, 0, -1);
	 unit_cell->SetEdgeInFace(8, 4, 1, 1, 1, -1);
	 unit_cell->SetEdgeInFace(8, 5, 8, 1, 1, 0);
	 unit_cell->SetEdgeInFace(8, 6, 2, 1, 1, 0);
	 unit_cell->SetEdgeInFace(8, 7, 7, 0, 0, 0);

	 unit_cell->SetFace(9, 8);
	 unit_cell->SetEdgeInFace(9, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 4, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 2, 6, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 3, 3, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 4, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 5, 6, -1, -1, 0);
	 unit_cell->SetEdgeInFace(9, 6, 4, -1, -1, 0);
	 unit_cell->SetEdgeInFace(9, 7, 1, 0, 0, 0);

	 return unit_cell;
}
