#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("sto", 9, 15);

	 // vertex 0 located at (0.5, 0.0, 0.38369)
	 // vertex 1 located at (0.5, 0.5, 0.050356666666666605)
	 // vertex 2 located at (0.0, 0.5, 0.7170233333333333)
	 // vertex 3 located at (0.0, 0.5, 0.9496433333333334)
	 // vertex 4 located at (0.5, 0.0, 0.61631)
	 // vertex 5 located at (0.5, 0.5, 0.28297666666666665)
	 // vertex 6 located at (0.5, 0.0, 0.5)
	 // vertex 7 located at (0.5, 0.5, 0.16666666666666652)
	 // vertex 8 located at (0.0, 0.5, 0.8333333333333333)

	 unit_cell->SetEdge(0, 0, 6, 0, 0, 0);
	 unit_cell->SetEdge(1, 1, 7, 0, 0, 0);
	 unit_cell->SetEdge(2, 2, 8, 0, 0, 0);
	 unit_cell->SetEdge(3, 3, 8, 0, 0, 0);
	 unit_cell->SetEdge(4, 4, 6, 0, 0, 0);
	 unit_cell->SetEdge(5, 5, 7, 0, 0, 0);
	 unit_cell->SetEdge(6, 6, 6, 1, 0, 0);
	 unit_cell->SetEdge(7, 7, 7, 1, 1, 0);
	 unit_cell->SetEdge(8, 8, 8, 0, 1, 0);
	 unit_cell->SetEdge(9, 0, 5, 0, 0, 0);
	 unit_cell->SetEdge(10, 1, 3, 0, 0, -1);
	 unit_cell->SetEdge(11, 2, 4, -1, 0, 0);
	 unit_cell->SetEdge(12, 0, 5, 0, -1, 0);
	 unit_cell->SetEdge(13, 1, 3, 1, 0, -1);
	 unit_cell->SetEdge(14, 2, 4, 0, 1, 0);

	 return unit_cell;
}
