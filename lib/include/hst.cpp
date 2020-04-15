#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("hst", 9, 15, 15);

	 // vertex 0 located at (0.0, 0.0, 0.16667)
	 // vertex 1 located at (0.0, 0.0, 0.8333366666666666)
	 // vertex 2 located at (0.0, 0.0, 0.5000033333333334)
	 // vertex 3 located at (0.5, 0.0, 0.08915)
	 // vertex 4 located at (0.5, 0.5, 0.7558166666666666)
	 // vertex 5 located at (0.0, 0.5, 0.4224833333333333)
	 // vertex 6 located at (0.0, 0.5, 0.2441833333333333)
	 // vertex 7 located at (0.5, 0.0, 0.91085)
	 // vertex 8 located at (0.5, 0.5, 0.5775166666666667)

	 unit_cell->SetEdge(0, 0, 3, 0, 0, 0);
	 unit_cell->SetEdge(1, 1, 4, 0, 0, 0);
	 unit_cell->SetEdge(2, 2, 5, 0, 0, 0);
	 unit_cell->SetEdge(3, 0, 3, -1, 0, 0);
	 unit_cell->SetEdge(4, 1, 4, -1, -1, 0);
	 unit_cell->SetEdge(5, 2, 5, 0, -1, 0);
	 unit_cell->SetEdge(6, 0, 6, 0, -1, 0);
	 unit_cell->SetEdge(7, 1, 7, 0, 0, 0);
	 unit_cell->SetEdge(8, 2, 8, 0, 0, 0);
	 unit_cell->SetEdge(9, 0, 6, 0, 0, 0);
	 unit_cell->SetEdge(10, 1, 7, -1, 0, 0);
	 unit_cell->SetEdge(11, 2, 8, -1, -1, 0);
	 unit_cell->SetEdge(12, 3, 7, 0, 0, -1);
	 unit_cell->SetEdge(13, 4, 8, 0, 0, 0);
	 unit_cell->SetEdge(14, 5, 6, 0, 0, 0);

	 unit_cell->SetFace(0, 8);
	 unit_cell->SetEdgeInFace(0, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 5, 0, 1, 0);
	 unit_cell->SetEdgeInFace(0, 2, 8, 0, 1, 0);
	 unit_cell->SetEdgeInFace(0, 3, 11, 1, 2, 0);
	 unit_cell->SetEdgeInFace(0, 4, 5, 1, 2, 0);
	 unit_cell->SetEdgeInFace(0, 5, 2, 1, 1, 0);
	 unit_cell->SetEdgeInFace(0, 6, 11, 1, 1, 0);
	 unit_cell->SetEdgeInFace(0, 7, 8, 0, 0, 0);

	 unit_cell->SetFace(1, 10);
	 unit_cell->SetEdgeInFace(1, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 2, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 3, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 4, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 5, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 6, 13, -1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 7, 11, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 8, 5, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 9, 2, 0, 0, 0);

	 unit_cell->SetFace(2, 8);
	 unit_cell->SetEdgeInFace(2, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 0, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 9, -1, 0, 0);
	 unit_cell->SetEdgeInFace(2, 3, 6, -1, 1, 0);
	 unit_cell->SetEdgeInFace(2, 4, 0, -1, 1, 0);
	 unit_cell->SetEdgeInFace(2, 5, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(2, 6, 6, 0, 1, 0);
	 unit_cell->SetEdgeInFace(2, 7, 9, 0, 0, 0);

	 unit_cell->SetFace(3, 8);
	 unit_cell->SetEdgeInFace(3, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 1, -1, -1, 0);
	 unit_cell->SetEdgeInFace(3, 2, 10, -1, -1, 0);
	 unit_cell->SetEdgeInFace(3, 3, 7, -2, -1, 0);
	 unit_cell->SetEdgeInFace(3, 4, 1, -2, -1, 0);
	 unit_cell->SetEdgeInFace(3, 5, 4, -1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 6, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 7, 10, 0, 0, 0);

	 unit_cell->SetFace(4, 10);
	 unit_cell->SetEdgeInFace(4, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 3, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 4, 8, -1, -1, 0);
	 unit_cell->SetEdgeInFace(4, 5, 2, -1, -1, 0);
	 unit_cell->SetEdgeInFace(4, 6, 14, -1, -1, 0);
	 unit_cell->SetEdgeInFace(4, 7, 6, -1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 8, 0, -1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 9, 3, 0, 0, 0);

	 unit_cell->SetFace(5, 10);
	 unit_cell->SetEdgeInFace(5, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 12, -1, 0, 1);
	 unit_cell->SetEdgeInFace(5, 2, 3, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 3, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 4, 9, 0, -1, 1);
	 unit_cell->SetEdgeInFace(5, 5, 3, 0, -1, 1);
	 unit_cell->SetEdgeInFace(5, 6, 12, -1, -1, 1);
	 unit_cell->SetEdgeInFace(5, 7, 7, -1, -1, 0);
	 unit_cell->SetEdgeInFace(5, 8, 1, -1, -1, 0);
	 unit_cell->SetEdgeInFace(5, 9, 4, 0, 0, 0);

	 unit_cell->SetFace(6, 10);
	 unit_cell->SetEdgeInFace(6, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 13, -1, -1, 0);
	 unit_cell->SetEdgeInFace(6, 2, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 3, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 4, 10, 1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 5, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 6, 13, 0, -1, 0);
	 unit_cell->SetEdgeInFace(6, 7, 8, 0, -1, 0);
	 unit_cell->SetEdgeInFace(6, 8, 2, 0, -1, 0);
	 unit_cell->SetEdgeInFace(6, 9, 5, 0, 0, 0);

	 unit_cell->SetFace(7, 10);
	 unit_cell->SetEdgeInFace(7, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 14, 0, -1, 0);
	 unit_cell->SetEdgeInFace(7, 2, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 3, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 4, 11, 1, 1, 0);
	 unit_cell->SetEdgeInFace(7, 5, 5, 1, 1, 0);
	 unit_cell->SetEdgeInFace(7, 6, 14, 1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 7, 9, 1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 8, 3, 1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 9, 0, 0, 0, 0);

	 unit_cell->SetFace(8, 10);
	 unit_cell->SetEdgeInFace(8, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 12, 0, 0, 1);
	 unit_cell->SetEdgeInFace(8, 2, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(8, 3, 9, 0, 0, 1);
	 unit_cell->SetEdgeInFace(8, 4, 6, 0, 1, 1);
	 unit_cell->SetEdgeInFace(8, 5, 0, 0, 1, 1);
	 unit_cell->SetEdgeInFace(8, 6, 12, 0, 1, 1);
	 unit_cell->SetEdgeInFace(8, 7, 10, 1, 1, 0);
	 unit_cell->SetEdgeInFace(8, 8, 4, 1, 1, 0);
	 unit_cell->SetEdgeInFace(8, 9, 1, 0, 0, 0);

	 unit_cell->SetFace(9, 10);
	 unit_cell->SetEdgeInFace(9, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 13, -1, -1, 0);
	 unit_cell->SetEdgeInFace(9, 2, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 3, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 4, 5, 0, 1, 0);
	 unit_cell->SetEdgeInFace(9, 5, 11, 0, 1, 0);
	 unit_cell->SetEdgeInFace(9, 6, 13, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 7, 1, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 8, 7, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 9, 10, 0, 0, 0);

	 unit_cell->SetFace(10, 10);
	 unit_cell->SetEdgeInFace(10, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 14, 0, -1, 0);
	 unit_cell->SetEdgeInFace(10, 2, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 3, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 4, 0, -1, 0, 0);
	 unit_cell->SetEdgeInFace(10, 5, 6, -1, 0, 0);
	 unit_cell->SetEdgeInFace(10, 6, 14, -1, -1, 0);
	 unit_cell->SetEdgeInFace(10, 7, 2, -1, -1, 0);
	 unit_cell->SetEdgeInFace(10, 8, 8, -1, -1, 0);
	 unit_cell->SetEdgeInFace(10, 9, 11, 0, 0, 0);

	 unit_cell->SetFace(11, 10);
	 unit_cell->SetEdgeInFace(11, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 7, 0, 0, -1);
	 unit_cell->SetEdgeInFace(11, 3, 4, 0, 0, -1);
	 unit_cell->SetEdgeInFace(11, 4, 1, -1, -1, -1);
	 unit_cell->SetEdgeInFace(11, 5, 7, -1, -1, -1);
	 unit_cell->SetEdgeInFace(11, 6, 12, -1, -1, 0);
	 unit_cell->SetEdgeInFace(11, 7, 3, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 8, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 9, 6, 0, 0, 0);

	 unit_cell->SetFace(12, 10);
	 unit_cell->SetEdgeInFace(12, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 2, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 3, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 4, 2, 0, -1, 0);
	 unit_cell->SetEdgeInFace(12, 5, 8, 0, -1, 0);
	 unit_cell->SetEdgeInFace(12, 6, 13, 0, -1, 0);
	 unit_cell->SetEdgeInFace(12, 7, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(12, 8, 10, 1, 0, 0);
	 unit_cell->SetEdgeInFace(12, 9, 7, 0, 0, 0);

	 unit_cell->SetFace(13, 10);
	 unit_cell->SetEdgeInFace(13, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 2, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 3, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 4, 3, 1, 0, 0);
	 unit_cell->SetEdgeInFace(13, 5, 9, 1, 0, 0);
	 unit_cell->SetEdgeInFace(13, 6, 14, 1, 0, 0);
	 unit_cell->SetEdgeInFace(13, 7, 5, 1, 1, 0);
	 unit_cell->SetEdgeInFace(13, 8, 11, 1, 1, 0);
	 unit_cell->SetEdgeInFace(13, 9, 8, 0, 0, 0);

	 unit_cell->SetFace(14, 10);
	 unit_cell->SetEdgeInFace(14, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 12, -1, 0, 0);
	 unit_cell->SetEdgeInFace(14, 2, 10, 0, 0, -1);
	 unit_cell->SetEdgeInFace(14, 3, 1, 0, 0, -1);
	 unit_cell->SetEdgeInFace(14, 4, 4, 1, 1, -1);
	 unit_cell->SetEdgeInFace(14, 5, 10, 1, 1, -1);
	 unit_cell->SetEdgeInFace(14, 6, 12, 0, 1, 0);
	 unit_cell->SetEdgeInFace(14, 7, 0, 0, 1, 0);
	 unit_cell->SetEdgeInFace(14, 8, 6, 0, 1, 0);
	 unit_cell->SetEdgeInFace(14, 9, 9, 0, 0, 0);

	 return unit_cell;
}
