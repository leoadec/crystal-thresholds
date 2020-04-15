#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("unj", 6, 12, 12);

	 // vertex 0 located at (0.47255, 0.23628, 0.58333)
	 // vertex 1 located at (0.23627000000000004, 0.47255, 0.7499966666666666)
	 // vertex 2 located at (0.76372, 0.23627000000000004, 0.9166633333333334)
	 // vertex 3 located at (0.52745, 0.76372, 0.08333000000000013)
	 // vertex 4 located at (0.76373, 0.52745, 0.24999666666666664)
	 // vertex 5 located at (0.23628, 0.76373, 0.4166633333333334)

	 unit_cell->SetEdge(0, 0, 5, 0, -1, 0);
	 unit_cell->SetEdge(1, 1, 0, 0, 0, 0);
	 unit_cell->SetEdge(2, 2, 1, 1, 0, 0);
	 unit_cell->SetEdge(3, 3, 2, 0, 1, -1);
	 unit_cell->SetEdge(4, 4, 3, 0, 0, 0);
	 unit_cell->SetEdge(5, 5, 4, -1, 0, 0);
	 unit_cell->SetEdge(6, 0, 4, 0, 0, 0);
	 unit_cell->SetEdge(7, 1, 5, 0, 0, 0);
	 unit_cell->SetEdge(8, 2, 0, 0, 0, 0);
	 unit_cell->SetEdge(9, 3, 1, 0, 0, -1);
	 unit_cell->SetEdge(10, 4, 2, 0, 0, -1);
	 unit_cell->SetEdge(11, 5, 3, 0, 0, 0);

	 unit_cell->SetFace(0, 5);
	 unit_cell->SetEdgeInFace(0, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 11, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 3, 3, 0, -1, 0);
	 unit_cell->SetEdgeInFace(0, 4, 10, 0, 0, 0);

	 unit_cell->SetFace(1, 8);
	 unit_cell->SetEdgeInFace(1, 0, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 0, 1, 1, 0);
	 unit_cell->SetEdgeInFace(1, 2, 1, 1, 1, 0);
	 unit_cell->SetEdgeInFace(1, 3, 2, 0, 1, 0);
	 unit_cell->SetEdgeInFace(1, 4, 3, 0, 0, 1);
	 unit_cell->SetEdgeInFace(1, 5, 9, 0, 0, 1);
	 unit_cell->SetEdgeInFace(1, 6, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 7, 6, 0, 0, 0);

	 unit_cell->SetFace(2, 5);
	 unit_cell->SetEdgeInFace(2, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 3, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 4, 11, 0, 0, 0);

	 unit_cell->SetFace(3, 5);
	 unit_cell->SetEdgeInFace(3, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 7, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 3, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 4, 6, 0, 0, 0);

	 unit_cell->SetFace(4, 5);
	 unit_cell->SetEdgeInFace(4, 0, 9, 0, 0, 1);
	 unit_cell->SetEdgeInFace(4, 1, 3, 0, 0, 1);
	 unit_cell->SetEdgeInFace(4, 2, 8, 0, 1, 0);
	 unit_cell->SetEdgeInFace(4, 3, 0, 0, 1, 0);
	 unit_cell->SetEdgeInFace(4, 4, 7, 0, 0, 0);

	 unit_cell->SetFace(5, 5);
	 unit_cell->SetEdgeInFace(5, 0, 10, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 1, 4, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 2, 9, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 3, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 4, 8, 0, 0, 0);

	 unit_cell->SetFace(6, 5);
	 unit_cell->SetEdgeInFace(6, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 2, 10, -1, 0, 0);
	 unit_cell->SetEdgeInFace(6, 3, 2, -1, 0, -1);
	 unit_cell->SetEdgeInFace(6, 4, 9, 0, 0, 0);

	 unit_cell->SetFace(7, 8);
	 unit_cell->SetEdgeInFace(7, 0, 0, 0, 1, 0);
	 unit_cell->SetEdgeInFace(7, 1, 1, 0, 1, 0);
	 unit_cell->SetEdgeInFace(7, 2, 2, -1, 1, 0);
	 unit_cell->SetEdgeInFace(7, 3, 3, -1, 0, 1);
	 unit_cell->SetEdgeInFace(7, 4, 4, -1, 0, 1);
	 unit_cell->SetEdgeInFace(7, 5, 10, -1, 0, 1);
	 unit_cell->SetEdgeInFace(7, 6, 2, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 7, 7, 0, 0, 0);

	 unit_cell->SetFace(8, 8);
	 unit_cell->SetEdgeInFace(8, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 2, -1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 3, -1, -1, 1);
	 unit_cell->SetEdgeInFace(8, 3, 4, -1, -1, 1);
	 unit_cell->SetEdgeInFace(8, 4, 5, 0, -1, 1);
	 unit_cell->SetEdgeInFace(8, 5, 11, 0, -1, 1);
	 unit_cell->SetEdgeInFace(8, 6, 3, 0, -1, 1);
	 unit_cell->SetEdgeInFace(8, 7, 8, 0, 0, 0);

	 unit_cell->SetFace(9, 8);
	 unit_cell->SetEdgeInFace(9, 0, 2, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 3, -1, -1, 1);
	 unit_cell->SetEdgeInFace(9, 2, 4, -1, -1, 1);
	 unit_cell->SetEdgeInFace(9, 3, 5, 0, -1, 1);
	 unit_cell->SetEdgeInFace(9, 4, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 5, 6, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 6, 4, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 7, 9, 0, 0, 1);

	 unit_cell->SetFace(10, 8);
	 unit_cell->SetEdgeInFace(10, 0, 3, 0, -1, 1);
	 unit_cell->SetEdgeInFace(10, 1, 4, 0, -1, 1);
	 unit_cell->SetEdgeInFace(10, 2, 5, 1, -1, 1);
	 unit_cell->SetEdgeInFace(10, 3, 0, 1, 0, 1);
	 unit_cell->SetEdgeInFace(10, 4, 1, 1, 0, 1);
	 unit_cell->SetEdgeInFace(10, 5, 7, 1, 0, 1);
	 unit_cell->SetEdgeInFace(10, 6, 5, 1, 0, 1);
	 unit_cell->SetEdgeInFace(10, 7, 10, 0, 0, 1);

	 unit_cell->SetFace(11, 8);
	 unit_cell->SetEdgeInFace(11, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 0, 1, 1, 0);
	 unit_cell->SetEdgeInFace(11, 3, 1, 1, 1, 0);
	 unit_cell->SetEdgeInFace(11, 4, 2, 0, 1, 0);
	 unit_cell->SetEdgeInFace(11, 5, 8, 0, 1, 0);
	 unit_cell->SetEdgeInFace(11, 6, 0, 0, 1, 0);
	 unit_cell->SetEdgeInFace(11, 7, 11, 0, 0, 0);

	 return unit_cell;
}
