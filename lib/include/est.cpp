#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("est", 4, 10);

	 // vertex 0 located at (0.25, 0.25, 0.60355)
	 // vertex 1 located at (0.75, 0.75, 0.10355000000000003)
	 // vertex 2 located at (0.75, 0.75, 0.39644999999999997)
	 // vertex 3 located at (0.25, 0.25, 0.89645)

	 unit_cell->SetEdge(0, 0, 0, 1, 0, 0);
	 unit_cell->SetEdge(1, 1, 1, 0, 1, 0);
	 unit_cell->SetEdge(2, 2, 2, -1, 0, 0);
	 unit_cell->SetEdge(3, 3, 3, 0, -1, 0);
	 unit_cell->SetEdge(4, 0, 3, 0, 0, 0);
	 unit_cell->SetEdge(5, 1, 2, 0, 0, 0);
	 unit_cell->SetEdge(6, 0, 2, 0, 0, 0);
	 unit_cell->SetEdge(7, 1, 3, 0, 1, -1);
	 unit_cell->SetEdge(8, 0, 2, -1, -1, 0);
	 unit_cell->SetEdge(9, 1, 3, 1, 0, -1);

	 return unit_cell;
}
