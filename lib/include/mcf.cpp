#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("mcf", 8, 16, 16);

	 // vertex 0 located at (0.0, 0.31274, 0.0)
	 // vertex 1 located at (0.0, 0.68726, 0.0)
	 // vertex 2 located at (0.5, 0.81274, 0.0)
	 // vertex 3 located at (0.5, 0.18725999999999998, 0.0)
	 // vertex 4 located at (0.0, 0.18726, 0.5)
	 // vertex 5 located at (0.0, 0.81274, 0.5)
	 // vertex 6 located at (0.5, 0.68726, 0.5)
	 // vertex 7 located at (0.5, 0.31274, 0.5)

	 unit_cell->SetEdge(0, 0, 1, 0, 0, 0);
	 unit_cell->SetEdge(1, 2, 3, 0, 1, 0);
	 unit_cell->SetEdge(2, 0, 4, 0, 0, 0);
	 unit_cell->SetEdge(3, 1, 5, 0, 0, 0);
	 unit_cell->SetEdge(4, 1, 5, 0, 0, -1);
	 unit_cell->SetEdge(5, 0, 4, 0, 0, -1);
	 unit_cell->SetEdge(6, 2, 6, 0, 0, 0);
	 unit_cell->SetEdge(7, 3, 7, 0, 0, 0);
	 unit_cell->SetEdge(8, 3, 7, 0, 0, -1);
	 unit_cell->SetEdge(9, 2, 6, 0, 0, -1);
	 unit_cell->SetEdge(10, 4, 5, 0, -1, 0);
	 unit_cell->SetEdge(11, 6, 7, 0, 0, 0);
	 unit_cell->SetEdge(12, 4, 7, 0, 0, 0);
	 unit_cell->SetEdge(13, 5, 6, -1, 0, 0);
	 unit_cell->SetEdge(14, 5, 6, 0, 0, 0);
	 unit_cell->SetEdge(15, 4, 7, -1, 0, 0);

	 unit_cell->SetFace(0, 6);
	 unit_cell->SetEdgeInFace(0, 0, 1, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 1, 6, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 2, 14, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 3, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 4, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 5, 7, 0, 0, 0);

	 unit_cell->SetFace(1, 6);
	 unit_cell->SetEdgeInFace(1, 0, 1, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 1, 6, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 2, 9, 0, -1, 1);
	 unit_cell->SetEdgeInFace(1, 3, 1, 0, -1, 1);
	 unit_cell->SetEdgeInFace(1, 4, 8, 0, 0, 1);
	 unit_cell->SetEdgeInFace(1, 5, 7, 0, 0, 0);

	 unit_cell->SetFace(2, 6);
	 unit_cell->SetEdgeInFace(2, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 3, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 4, 12, 0, 0, -1);
	 unit_cell->SetEdgeInFace(2, 5, 8, 0, 0, 0);

	 unit_cell->SetFace(3, 6);
	 unit_cell->SetEdgeInFace(3, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 3, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 4, 11, 0, 0, -1);
	 unit_cell->SetEdgeInFace(3, 5, 8, 0, 0, 0);

	 unit_cell->SetFace(4, 6);
	 unit_cell->SetEdgeInFace(4, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 7, 0, 1, 0);
	 unit_cell->SetEdgeInFace(4, 2, 15, 1, 1, 0);
	 unit_cell->SetEdgeInFace(4, 3, 10, 1, 1, 0);
	 unit_cell->SetEdgeInFace(4, 4, 13, 1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 5, 6, 0, 0, 0);

	 unit_cell->SetFace(5, 6);
	 unit_cell->SetEdgeInFace(5, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 8, 0, 1, 0);
	 unit_cell->SetEdgeInFace(5, 2, 12, 0, 1, -1);
	 unit_cell->SetEdgeInFace(5, 3, 10, 0, 1, -1);
	 unit_cell->SetEdgeInFace(5, 4, 14, 0, 0, -1);
	 unit_cell->SetEdgeInFace(5, 5, 9, 0, 0, 0);

	 unit_cell->SetFace(6, 6);
	 unit_cell->SetEdgeInFace(6, 0, 1, 0, -1, 0);
	 unit_cell->SetEdgeInFace(6, 1, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(6, 2, 13, 1, -1, -1);
	 unit_cell->SetEdgeInFace(6, 3, 10, 1, 0, -1);
	 unit_cell->SetEdgeInFace(6, 4, 15, 1, 0, -1);
	 unit_cell->SetEdgeInFace(6, 5, 8, 0, 0, 0);

	 unit_cell->SetFace(7, 6);
	 unit_cell->SetEdgeInFace(7, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 3, 11, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 4, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 5, 3, 0, 0, 0);

	 unit_cell->SetFace(8, 6);
	 unit_cell->SetEdgeInFace(8, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 4, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 5, 2, 0, 0, 0);

	 unit_cell->SetFace(9, 6);
	 unit_cell->SetEdgeInFace(9, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 2, 13, 0, 0, -1);
	 unit_cell->SetEdgeInFace(9, 3, 11, -1, 0, -1);
	 unit_cell->SetEdgeInFace(9, 4, 15, 0, 0, -1);
	 unit_cell->SetEdgeInFace(9, 5, 5, 0, 0, 0);

	 unit_cell->SetFace(10, 6);
	 unit_cell->SetEdgeInFace(10, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 2, 12, 0, 0, -1);
	 unit_cell->SetEdgeInFace(10, 3, 11, 0, 0, -1);
	 unit_cell->SetEdgeInFace(10, 4, 14, 0, 0, -1);
	 unit_cell->SetEdgeInFace(10, 5, 4, 0, 0, 0);

	 unit_cell->SetFace(11, 6);
	 unit_cell->SetEdgeInFace(11, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 5, 0, 0, 1);
	 unit_cell->SetEdgeInFace(11, 3, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(11, 4, 4, 0, 0, 1);
	 unit_cell->SetEdgeInFace(11, 5, 3, 0, 0, 0);

	 unit_cell->SetFace(12, 6);
	 unit_cell->SetEdgeInFace(12, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 13, 1, 0, 0);
	 unit_cell->SetEdgeInFace(12, 2, 3, 1, 0, 0);
	 unit_cell->SetEdgeInFace(12, 3, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(12, 4, 13, 1, 0, -1);
	 unit_cell->SetEdgeInFace(12, 5, 9, 0, 0, 0);

	 unit_cell->SetFace(13, 6);
	 unit_cell->SetEdgeInFace(13, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 14, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 2, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 3, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 4, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 5, 6, 0, 0, 0);

	 unit_cell->SetFace(14, 6);
	 unit_cell->SetEdgeInFace(14, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 15, 1, 0, -1);
	 unit_cell->SetEdgeInFace(14, 2, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(14, 3, 2, 1, 0, 0);
	 unit_cell->SetEdgeInFace(14, 4, 15, 1, 0, 0);
	 unit_cell->SetEdgeInFace(14, 5, 7, 0, 0, 0);

	 unit_cell->SetFace(15, 6);
	 unit_cell->SetEdgeInFace(15, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 1, 10, 0, 1, 0);
	 unit_cell->SetEdgeInFace(15, 2, 2, 0, 1, 0);
	 unit_cell->SetEdgeInFace(15, 3, 5, 0, 1, 0);
	 unit_cell->SetEdgeInFace(15, 4, 10, 0, 1, -1);
	 unit_cell->SetEdgeInFace(15, 5, 4, 0, 0, 0);

	 return unit_cell;
}
