#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("gsi", 16, 32);

	 // vertex 0 located at (0.14644, 0.14644, 0.14644)
	 // vertex 1 located at (0.85356, 0.35356, 0.14644)
	 // vertex 2 located at (0.14644, 0.85356, 0.35356)
	 // vertex 3 located at (0.85356, 0.64644, 0.35356)
	 // vertex 4 located at (0.35356, 0.85356, 0.64644)
	 // vertex 5 located at (0.85356, 0.85356, 0.85356)
	 // vertex 6 located at (0.14644, 0.64644, 0.85356)
	 // vertex 7 located at (0.85356, 0.14644, 0.64644)
	 // vertex 8 located at (0.14644, 0.35356, 0.64644)
	 // vertex 9 located at (0.64644, 0.14644, 0.35356)
	 // vertex 10 located at (0.64644, 0.64644, 0.64644)
	 // vertex 11 located at (0.64644, 0.35356, 0.85356)
	 // vertex 12 located at (0.35356, 0.1464399999999999, 0.85356)
	 // vertex 13 located at (0.35356, 0.35356, 0.35356)
	 // vertex 14 located at (0.35356, 0.64644, 0.14644)
	 // vertex 15 located at (0.64644, 0.85356, 0.14644)

	 unit_cell->SetEdge(0, 0, 13, 0, 0, 0);
	 unit_cell->SetEdge(1, 1, 9, 0, 0, 0);
	 unit_cell->SetEdge(2, 2, 14, 0, 0, 0);
	 unit_cell->SetEdge(3, 3, 15, 0, 0, 0);
	 unit_cell->SetEdge(4, 4, 6, 0, 0, 0);
	 unit_cell->SetEdge(5, 5, 10, 0, 0, 0);
	 unit_cell->SetEdge(6, 7, 11, 0, 0, 0);
	 unit_cell->SetEdge(7, 8, 12, 0, 0, 0);
	 unit_cell->SetEdge(8, 0, 2, 0, -1, 0);
	 unit_cell->SetEdge(9, 1, 3, 0, 0, 0);
	 unit_cell->SetEdge(10, 0, 12, 0, 0, -1);
	 unit_cell->SetEdge(11, 1, 11, 0, 0, -1);
	 unit_cell->SetEdge(12, 2, 4, 0, 0, 0);
	 unit_cell->SetEdge(13, 3, 10, 0, 0, 0);
	 unit_cell->SetEdge(14, 0, 1, -1, 0, 0);
	 unit_cell->SetEdge(15, 2, 3, -1, 0, 0);
	 unit_cell->SetEdge(16, 4, 10, 0, 0, 0);
	 unit_cell->SetEdge(17, 5, 7, 0, 1, 0);
	 unit_cell->SetEdge(18, 6, 8, 0, 0, 0);
	 unit_cell->SetEdge(19, 5, 15, 0, 0, 1);
	 unit_cell->SetEdge(20, 6, 14, 0, 0, 1);
	 unit_cell->SetEdge(21, 7, 9, 0, 0, 0);
	 unit_cell->SetEdge(22, 8, 13, 0, 0, 0);
	 unit_cell->SetEdge(23, 5, 6, 1, 0, 0);
	 unit_cell->SetEdge(24, 7, 8, 1, 0, 0);
	 unit_cell->SetEdge(25, 9, 13, 0, 0, 0);
	 unit_cell->SetEdge(26, 10, 11, 0, 0, 0);
	 unit_cell->SetEdge(27, 4, 12, 0, 1, 0);
	 unit_cell->SetEdge(28, 11, 12, 0, 0, 0);
	 unit_cell->SetEdge(29, 13, 14, 0, 0, 0);
	 unit_cell->SetEdge(30, 9, 15, 0, -1, 0);
	 unit_cell->SetEdge(31, 14, 15, 0, 0, 0);

	 return unit_cell;
}
