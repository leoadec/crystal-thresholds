#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("tfc", 6, 10);

	 // vertex 0 located at (0.0, 0.2885, 0.0)
	 // vertex 1 located at (0.0, 0.7115, 0.0)
	 // vertex 2 located at (0.5, 0.7885, 0.0)
	 // vertex 3 located at (0.5, 0.21150000000000002, 0.0)
	 // vertex 4 located at (0.0, 0.5, 0.0)
	 // vertex 5 located at (0.5, 0.0, 0.0)

	 unit_cell->SetEdge(0, 0, 4, 0, 0, 0);
	 unit_cell->SetEdge(1, 1, 4, 0, 0, 0);
	 unit_cell->SetEdge(2, 2, 5, 0, 1, 0);
	 unit_cell->SetEdge(3, 3, 5, 0, 0, 0);
	 unit_cell->SetEdge(4, 0, 3, 0, 0, 0);
	 unit_cell->SetEdge(5, 1, 2, -1, 0, 0);
	 unit_cell->SetEdge(6, 1, 2, 0, 0, 0);
	 unit_cell->SetEdge(7, 0, 3, -1, 0, 0);
	 unit_cell->SetEdge(8, 4, 4, 0, 0, 1);
	 unit_cell->SetEdge(9, 5, 5, 0, 0, 1);

	 return unit_cell;
}
