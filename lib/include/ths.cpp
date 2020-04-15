#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("ths", 8, 12, 12);

	 // vertex 0 located at (0.0, 0.75, 0.03118)
	 // vertex 1 located at (0.5, 0.75, 0.28118)
	 // vertex 2 located at (0.5, 0.25, 0.53118)
	 // vertex 3 located at (0.0, 0.25, 0.78118)
	 // vertex 4 located at (0.0, 0.25, 0.96882)
	 // vertex 5 located at (0.0, 0.75, 0.21882000000000001)
	 // vertex 6 located at (0.5, 0.75, 0.46882)
	 // vertex 7 located at (0.5, 0.25, 0.71882)

	 unit_cell->SetEdge(0, 0, 4, 0, 0, -1);
	 unit_cell->SetEdge(1, 1, 5, 1, 0, 0);
	 unit_cell->SetEdge(2, 2, 6, 0, 0, 0);
	 unit_cell->SetEdge(3, 3, 7, -1, 0, 0);
	 unit_cell->SetEdge(4, 7, 3, 0, 0, 0);
	 unit_cell->SetEdge(5, 5, 1, 0, 0, 0);
	 unit_cell->SetEdge(6, 2, 6, 0, -1, 0);
	 unit_cell->SetEdge(7, 0, 4, 0, 1, -1);
	 unit_cell->SetEdge(8, 0, 5, 0, 0, 0);
	 unit_cell->SetEdge(9, 1, 6, 0, 0, 0);
	 unit_cell->SetEdge(10, 2, 7, 0, 0, 0);
	 unit_cell->SetEdge(11, 3, 4, 0, 0, 0);

	 unit_cell->SetFace(0, 10);
	 unit_cell->SetEdgeInFace(0, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 3, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 4, 6, 0, 1, 0);
	 unit_cell->SetEdgeInFace(0, 5, 10, 0, 1, 0);
	 unit_cell->SetEdgeInFace(0, 6, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(0, 7, 11, 0, 1, 0);
	 unit_cell->SetEdgeInFace(0, 8, 7, 0, 0, 1);
	 unit_cell->SetEdgeInFace(0, 9, 0, 0, 0, 1);

	 unit_cell->SetFace(1, 12);
	 unit_cell->SetEdgeInFace(1, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 2, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 3, 6, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 4, 10, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 5, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 6, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 7, 10, -1, 1, 0);
	 unit_cell->SetEdgeInFace(1, 8, 6, -1, 1, 0);
	 unit_cell->SetEdgeInFace(1, 9, 2, -1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 10, 10, -1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 11, 3, 0, 0, 0);

	 unit_cell->SetFace(2, 10);
	 unit_cell->SetEdgeInFace(2, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 11, 0, 1, -1);
	 unit_cell->SetEdgeInFace(2, 3, 3, 0, 1, -1);
	 unit_cell->SetEdgeInFace(2, 4, 4, -1, 1, -1);
	 unit_cell->SetEdgeInFace(2, 5, 11, -1, 1, -1);
	 unit_cell->SetEdgeInFace(2, 6, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 7, 8, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 8, 5, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 9, 1, -1, 0, 0);

	 unit_cell->SetFace(3, 10);
	 unit_cell->SetEdgeInFace(3, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 3, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 4, 7, 0, -1, 0);
	 unit_cell->SetEdgeInFace(3, 5, 8, 0, -1, 0);
	 unit_cell->SetEdgeInFace(3, 6, 5, 0, -1, 0);
	 unit_cell->SetEdgeInFace(3, 7, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(3, 8, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 9, 2, 0, 0, 0);

	 unit_cell->SetFace(4, 10);
	 unit_cell->SetEdgeInFace(4, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 3, 1, 0, -1, 0);
	 unit_cell->SetEdgeInFace(4, 4, 5, 1, -1, 0);
	 unit_cell->SetEdgeInFace(4, 5, 9, 1, -1, 0);
	 unit_cell->SetEdgeInFace(4, 6, 6, 1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 7, 10, 1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 8, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 9, 3, 1, 0, 0);

	 unit_cell->SetFace(5, 10);
	 unit_cell->SetEdgeInFace(5, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 2, 9, -1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 3, 2, -1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 4, 6, -1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 5, 9, -1, -1, 0);
	 unit_cell->SetEdgeInFace(5, 6, 1, -1, -1, 0);
	 unit_cell->SetEdgeInFace(5, 7, 8, 0, -1, 0);
	 unit_cell->SetEdgeInFace(5, 8, 7, 0, -1, 0);
	 unit_cell->SetEdgeInFace(5, 9, 0, 0, 0, 0);

	 unit_cell->SetFace(6, 10);
	 unit_cell->SetEdgeInFace(6, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 3, 1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 2, 11, 1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 3, 0, 1, 0, 1);
	 unit_cell->SetEdgeInFace(6, 4, 7, 1, 0, 1);
	 unit_cell->SetEdgeInFace(6, 5, 11, 1, 1, 0);
	 unit_cell->SetEdgeInFace(6, 6, 3, 1, 1, 0);
	 unit_cell->SetEdgeInFace(6, 7, 10, 0, 1, 0);
	 unit_cell->SetEdgeInFace(6, 8, 6, 0, 1, 0);
	 unit_cell->SetEdgeInFace(6, 9, 2, 0, 0, 0);

	 unit_cell->SetFace(7, 10);
	 unit_cell->SetEdgeInFace(7, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 3, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 4, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 5, 9, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 6, 2, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 7, 10, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 8, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 9, 4, 0, 0, 0);

	 unit_cell->SetFace(8, 10);
	 unit_cell->SetEdgeInFace(8, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 11, 0, 0, -1);
	 unit_cell->SetEdgeInFace(8, 3, 4, 0, 0, -1);
	 unit_cell->SetEdgeInFace(8, 4, 3, 1, 0, -1);
	 unit_cell->SetEdgeInFace(8, 5, 11, 1, 0, -1);
	 unit_cell->SetEdgeInFace(8, 6, 0, 1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 7, 8, 1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 8, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 9, 5, 0, 0, 0);

	 unit_cell->SetFace(9, 12);
	 unit_cell->SetEdgeInFace(9, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 11, 0, 1, -1);
	 unit_cell->SetEdgeInFace(9, 2, 3, 0, 1, -1);
	 unit_cell->SetEdgeInFace(9, 3, 4, -1, 1, -1);
	 unit_cell->SetEdgeInFace(9, 4, 11, -1, 1, -1);
	 unit_cell->SetEdgeInFace(9, 5, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 6, 0, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 7, 11, -1, 0, -1);
	 unit_cell->SetEdgeInFace(9, 8, 4, -1, 0, -1);
	 unit_cell->SetEdgeInFace(9, 9, 3, 0, 0, -1);
	 unit_cell->SetEdgeInFace(9, 10, 11, 0, 0, -1);
	 unit_cell->SetEdgeInFace(9, 11, 0, 0, 0, 0);

	 unit_cell->SetFace(10, 12);
	 unit_cell->SetEdgeInFace(10, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 2, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 3, 7, 0, -1, 0);
	 unit_cell->SetEdgeInFace(10, 4, 8, 0, -1, 0);
	 unit_cell->SetEdgeInFace(10, 5, 5, 0, -1, 0);
	 unit_cell->SetEdgeInFace(10, 6, 1, 0, -1, 0);
	 unit_cell->SetEdgeInFace(10, 7, 8, 1, -1, 0);
	 unit_cell->SetEdgeInFace(10, 8, 7, 1, -1, 0);
	 unit_cell->SetEdgeInFace(10, 9, 0, 1, 0, 0);
	 unit_cell->SetEdgeInFace(10, 10, 8, 1, 0, 0);
	 unit_cell->SetEdgeInFace(10, 11, 1, 0, 0, 0);

	 unit_cell->SetFace(11, 12);
	 unit_cell->SetEdgeInFace(11, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 2, 1, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 3, 5, 1, -1, 0);
	 unit_cell->SetEdgeInFace(11, 4, 9, 1, -1, 0);
	 unit_cell->SetEdgeInFace(11, 5, 6, 1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 6, 2, 1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 7, 9, 1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 8, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 9, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 10, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 11, 2, 0, 0, 0);

	 return unit_cell;
}
