#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("svn", 8, 28);

	 // vertex 0 located at (0.34549, 0.34549, 0.34549)
	 // vertex 1 located at (0.15450999999999998, 0.6545099999999999, 0.8454900000000001)
	 // vertex 2 located at (0.8454900000000001, 0.15450999999999998, 0.6545099999999999)
	 // vertex 3 located at (0.6545099999999999, 0.8454900000000001, 0.15450999999999998)
	 // vertex 4 located at (0.6545099999999999, 0.6545099999999999, 0.6545099999999999)
	 // vertex 5 located at (0.8454900000000001, 0.34549, 0.15450999999999993)
	 // vertex 6 located at (0.15450999999999993, 0.8454900000000001, 0.34549)
	 // vertex 7 located at (0.34549, 0.15450999999999993, 0.8454900000000001)

	 unit_cell->SetEdge(0, 0, 4, 0, 0, 0);
	 unit_cell->SetEdge(1, 1, 5, -1, 0, 1);
	 unit_cell->SetEdge(2, 2, 6, 1, -1, 0);
	 unit_cell->SetEdge(3, 3, 7, 0, 1, -1);
	 unit_cell->SetEdge(4, 0, 6, 0, -1, 0);
	 unit_cell->SetEdge(5, 1, 7, 0, 1, 0);
	 unit_cell->SetEdge(6, 2, 4, 0, 0, 0);
	 unit_cell->SetEdge(7, 3, 5, 0, 0, 0);
	 unit_cell->SetEdge(8, 0, 7, 0, 0, -1);
	 unit_cell->SetEdge(9, 1, 6, 0, 0, 0);
	 unit_cell->SetEdge(10, 2, 5, 0, 0, 1);
	 unit_cell->SetEdge(11, 3, 4, 0, 0, 0);
	 unit_cell->SetEdge(12, 0, 5, -1, 0, 0);
	 unit_cell->SetEdge(13, 2, 7, 0, 0, 0);
	 unit_cell->SetEdge(14, 3, 6, 1, 0, 0);
	 unit_cell->SetEdge(15, 1, 4, 0, 0, 0);
	 unit_cell->SetEdge(16, 4, 2, 0, 1, 0);
	 unit_cell->SetEdge(17, 5, 3, 0, -1, 0);
	 unit_cell->SetEdge(18, 6, 0, 0, 0, 0);
	 unit_cell->SetEdge(19, 7, 1, 0, 0, 0);
	 unit_cell->SetEdge(20, 4, 3, 0, 0, 1);
	 unit_cell->SetEdge(21, 5, 2, 0, 0, 0);
	 unit_cell->SetEdge(22, 6, 1, 0, 0, -1);
	 unit_cell->SetEdge(23, 7, 0, 0, 0, 0);
	 unit_cell->SetEdge(24, 4, 1, 1, 0, 0);
	 unit_cell->SetEdge(25, 6, 3, 0, 0, 0);
	 unit_cell->SetEdge(26, 7, 2, -1, 0, 0);
	 unit_cell->SetEdge(27, 5, 0, 0, 0, 0);

	 return unit_cell;
}
