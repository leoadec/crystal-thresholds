#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("vck", 16, 56, 56);

	 // vertex 0 located at (0.56002, 0.14221, 0.0)
	 // vertex 1 located at (0.43998000000000004, 0.85779, 0.0)
	 // vertex 2 located at (0.68998, 0.39221, 0.25)
	 // vertex 3 located at (0.31001999999999996, 0.60779, 0.25)
	 // vertex 4 located at (0.56002, 0.64221, 0.5)
	 // vertex 5 located at (0.43998000000000004, 0.35779, 0.5)
	 // vertex 6 located at (0.68998, 0.89221, 0.75)
	 // vertex 7 located at (0.31001999999999996, 0.10779000000000005, 0.75)
	 // vertex 8 located at (0.06001999999999996, 0.14221, 0.5)
	 // vertex 9 located at (0.93998, 0.85779, 0.5)
	 // vertex 10 located at (0.18998000000000004, 0.39221, 0.75)
	 // vertex 11 located at (0.81002, 0.60779, 0.75)
	 // vertex 12 located at (0.06001999999999996, 0.64221, 0.0)
	 // vertex 13 located at (0.93998, 0.35779, 0.0)
	 // vertex 14 located at (0.18998000000000004, 0.89221, 0.25)
	 // vertex 15 located at (0.81002, 0.10779000000000005, 0.25)

	 unit_cell->SetEdge(0, 0, 5, 0, 0, 0);
	 unit_cell->SetEdge(1, 1, 4, 0, 0, 0);
	 unit_cell->SetEdge(2, 2, 11, 0, 0, 0);
	 unit_cell->SetEdge(3, 3, 10, 0, 0, 0);
	 unit_cell->SetEdge(4, 4, 1, 0, 0, 1);
	 unit_cell->SetEdge(5, 5, 0, 0, 0, 1);
	 unit_cell->SetEdge(6, 6, 15, 0, 1, 1);
	 unit_cell->SetEdge(7, 7, 14, 0, -1, 1);
	 unit_cell->SetEdge(8, 8, 13, -1, 0, 1);
	 unit_cell->SetEdge(9, 9, 12, 1, 0, 1);
	 unit_cell->SetEdge(10, 10, 3, 0, 0, 1);
	 unit_cell->SetEdge(11, 11, 2, 0, 0, 1);
	 unit_cell->SetEdge(12, 12, 9, -1, 0, 0);
	 unit_cell->SetEdge(13, 13, 8, 1, 0, 0);
	 unit_cell->SetEdge(14, 14, 7, 0, 1, 0);
	 unit_cell->SetEdge(15, 15, 6, 0, -1, 0);
	 unit_cell->SetEdge(16, 0, 0, 0, 0, 1);
	 unit_cell->SetEdge(17, 1, 1, 0, 0, 1);
	 unit_cell->SetEdge(18, 2, 2, 0, 0, 1);
	 unit_cell->SetEdge(19, 3, 3, 0, 0, 1);
	 unit_cell->SetEdge(20, 4, 4, 0, 0, 1);
	 unit_cell->SetEdge(21, 5, 5, 0, 0, 1);
	 unit_cell->SetEdge(22, 6, 6, 0, 0, 1);
	 unit_cell->SetEdge(23, 7, 7, 0, 0, 1);
	 unit_cell->SetEdge(24, 8, 8, 0, 0, 1);
	 unit_cell->SetEdge(25, 9, 9, 0, 0, 1);
	 unit_cell->SetEdge(26, 10, 10, 0, 0, 1);
	 unit_cell->SetEdge(27, 11, 11, 0, 0, 1);
	 unit_cell->SetEdge(28, 12, 12, 0, 0, 1);
	 unit_cell->SetEdge(29, 13, 13, 0, 0, 1);
	 unit_cell->SetEdge(30, 14, 14, 0, 0, 1);
	 unit_cell->SetEdge(31, 15, 15, 0, 0, 1);
	 unit_cell->SetEdge(32, 0, 1, 0, -1, 0);
	 unit_cell->SetEdge(33, 2, 15, 0, 0, 0);
	 unit_cell->SetEdge(34, 3, 14, 0, 0, 0);
	 unit_cell->SetEdge(35, 4, 5, 0, 0, 0);
	 unit_cell->SetEdge(36, 6, 11, 0, 0, 0);
	 unit_cell->SetEdge(37, 7, 10, 0, 0, 0);
	 unit_cell->SetEdge(38, 8, 9, -1, -1, 0);
	 unit_cell->SetEdge(39, 12, 13, -1, 0, 0);
	 unit_cell->SetEdge(40, 0, 6, 0, -1, -1);
	 unit_cell->SetEdge(41, 1, 7, 0, 1, -1);
	 unit_cell->SetEdge(42, 2, 0, 0, 0, 0);
	 unit_cell->SetEdge(43, 3, 1, 0, 0, 0);
	 unit_cell->SetEdge(44, 4, 2, 0, 0, 0);
	 unit_cell->SetEdge(45, 5, 3, 0, 0, 0);
	 unit_cell->SetEdge(46, 6, 4, 0, 0, 0);
	 unit_cell->SetEdge(47, 7, 5, 0, 0, 0);
	 unit_cell->SetEdge(48, 8, 14, 0, -1, 0);
	 unit_cell->SetEdge(49, 9, 15, 0, 1, 0);
	 unit_cell->SetEdge(50, 10, 8, 0, 0, 0);
	 unit_cell->SetEdge(51, 11, 9, 0, 0, 0);
	 unit_cell->SetEdge(52, 12, 10, 0, 0, -1);
	 unit_cell->SetEdge(53, 13, 11, 0, 0, -1);
	 unit_cell->SetEdge(54, 14, 12, 0, 0, 0);
	 unit_cell->SetEdge(55, 15, 13, 0, 0, 0);

	 unit_cell->SetFace(0, 3);
	 unit_cell->SetEdgeInFace(0, 0, 13, -1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 29, -1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 8, 0, 0, 0);

	 unit_cell->SetFace(1, 4);
	 unit_cell->SetEdgeInFace(1, 0, 50, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 52, 0, 0, 1);
	 unit_cell->SetEdgeInFace(1, 2, 39, 0, 0, 1);
	 unit_cell->SetEdgeInFace(1, 3, 8, 0, 0, 0);

	 unit_cell->SetFace(2, 4);
	 unit_cell->SetEdgeInFace(2, 0, 38, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 25, -1, -1, 0);
	 unit_cell->SetEdgeInFace(2, 2, 38, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 3, 24, 0, 0, 0);

	 unit_cell->SetFace(3, 4);
	 unit_cell->SetEdgeInFace(3, 0, 50, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 50, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 3, 24, 0, 0, 0);

	 unit_cell->SetFace(4, 3);
	 unit_cell->SetEdgeInFace(4, 0, 12, 1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 28, 1, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 9, 0, 0, 0);

	 unit_cell->SetFace(5, 3);
	 unit_cell->SetEdgeInFace(5, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 2, 10, 0, 0, 0);

	 unit_cell->SetFace(6, 3);
	 unit_cell->SetEdgeInFace(6, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 2, 11, 0, 0, 0);

	 unit_cell->SetFace(7, 3);
	 unit_cell->SetEdgeInFace(7, 0, 9, -1, 0, -1);
	 unit_cell->SetEdgeInFace(7, 1, 25, -1, 0, -1);
	 unit_cell->SetEdgeInFace(7, 2, 12, 0, 0, 0);

	 unit_cell->SetFace(8, 3);
	 unit_cell->SetEdgeInFace(8, 0, 8, 1, 0, -1);
	 unit_cell->SetEdgeInFace(8, 1, 24, 1, 0, -1);
	 unit_cell->SetEdgeInFace(8, 2, 13, 0, 0, 0);

	 unit_cell->SetFace(9, 3);
	 unit_cell->SetEdgeInFace(9, 0, 7, 0, 1, -1);
	 unit_cell->SetEdgeInFace(9, 1, 23, 0, 1, -1);
	 unit_cell->SetEdgeInFace(9, 2, 14, 0, 0, 0);

	 unit_cell->SetFace(10, 3);
	 unit_cell->SetEdgeInFace(10, 0, 6, 0, -1, -1);
	 unit_cell->SetEdgeInFace(10, 1, 22, 0, -1, -1);
	 unit_cell->SetEdgeInFace(10, 2, 15, 0, 0, 0);

	 unit_cell->SetFace(11, 3);
	 unit_cell->SetEdgeInFace(11, 0, 5, 0, 0, -1);
	 unit_cell->SetEdgeInFace(11, 1, 21, 0, 0, -1);
	 unit_cell->SetEdgeInFace(11, 2, 0, 0, 0, 0);

	 unit_cell->SetFace(12, 3);
	 unit_cell->SetEdgeInFace(12, 0, 4, 0, 0, -1);
	 unit_cell->SetEdgeInFace(12, 1, 20, 0, 0, -1);
	 unit_cell->SetEdgeInFace(12, 2, 1, 0, 0, 0);

	 unit_cell->SetFace(13, 3);
	 unit_cell->SetEdgeInFace(13, 0, 11, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 1, 27, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 2, 2, 0, 0, 0);

	 unit_cell->SetFace(14, 3);
	 unit_cell->SetEdgeInFace(14, 0, 10, 0, 0, -1);
	 unit_cell->SetEdgeInFace(14, 1, 26, 0, 0, -1);
	 unit_cell->SetEdgeInFace(14, 2, 3, 0, 0, 0);

	 unit_cell->SetFace(15, 3);
	 unit_cell->SetEdgeInFace(15, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 1, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 2, 4, 0, 0, 0);

	 unit_cell->SetFace(16, 3);
	 unit_cell->SetEdgeInFace(16, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 1, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 2, 5, 0, 0, 0);

	 unit_cell->SetFace(17, 3);
	 unit_cell->SetEdgeInFace(17, 0, 15, 0, 1, 0);
	 unit_cell->SetEdgeInFace(17, 1, 31, 0, 1, 0);
	 unit_cell->SetEdgeInFace(17, 2, 6, 0, 0, 0);

	 unit_cell->SetFace(18, 3);
	 unit_cell->SetEdgeInFace(18, 0, 14, 0, -1, 0);
	 unit_cell->SetEdgeInFace(18, 1, 30, 0, -1, 0);
	 unit_cell->SetEdgeInFace(18, 2, 7, 0, 0, 0);

	 unit_cell->SetFace(19, 4);
	 unit_cell->SetEdgeInFace(19, 0, 51, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 1, 53, 0, 0, 1);
	 unit_cell->SetEdgeInFace(19, 2, 39, 1, 0, 1);
	 unit_cell->SetEdgeInFace(19, 3, 9, 0, 0, 0);

	 unit_cell->SetFace(20, 4);
	 unit_cell->SetEdgeInFace(20, 0, 52, 0, 0, 1);
	 unit_cell->SetEdgeInFace(20, 1, 54, 0, 0, 1);
	 unit_cell->SetEdgeInFace(20, 2, 34, 0, 0, 1);
	 unit_cell->SetEdgeInFace(20, 3, 10, 0, 0, 0);

	 unit_cell->SetFace(21, 4);
	 unit_cell->SetEdgeInFace(21, 0, 53, 0, 0, 1);
	 unit_cell->SetEdgeInFace(21, 1, 55, 0, 0, 1);
	 unit_cell->SetEdgeInFace(21, 2, 33, 0, 0, 1);
	 unit_cell->SetEdgeInFace(21, 3, 11, 0, 0, 0);

	 unit_cell->SetFace(22, 4);
	 unit_cell->SetEdgeInFace(22, 0, 54, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 1, 48, 0, 1, 0);
	 unit_cell->SetEdgeInFace(22, 2, 38, 0, 1, 0);
	 unit_cell->SetEdgeInFace(22, 3, 12, 0, 0, 0);

	 unit_cell->SetFace(23, 4);
	 unit_cell->SetEdgeInFace(23, 0, 55, 0, 0, 0);
	 unit_cell->SetEdgeInFace(23, 1, 49, 0, -1, 0);
	 unit_cell->SetEdgeInFace(23, 2, 38, 1, 0, 0);
	 unit_cell->SetEdgeInFace(23, 3, 13, 0, 0, 0);

	 unit_cell->SetFace(24, 4);
	 unit_cell->SetEdgeInFace(24, 0, 48, 0, 1, 0);
	 unit_cell->SetEdgeInFace(24, 1, 50, 0, 1, 0);
	 unit_cell->SetEdgeInFace(24, 2, 37, 0, 1, 0);
	 unit_cell->SetEdgeInFace(24, 3, 14, 0, 0, 0);

	 unit_cell->SetFace(25, 4);
	 unit_cell->SetEdgeInFace(25, 0, 49, 0, -1, 0);
	 unit_cell->SetEdgeInFace(25, 1, 51, 0, -1, 0);
	 unit_cell->SetEdgeInFace(25, 2, 36, 0, -1, 0);
	 unit_cell->SetEdgeInFace(25, 3, 15, 0, 0, 0);

	 unit_cell->SetFace(26, 4);
	 unit_cell->SetEdgeInFace(26, 0, 42, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 1, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 2, 35, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 3, 0, 0, 0, 0);

	 unit_cell->SetFace(27, 4);
	 unit_cell->SetEdgeInFace(27, 0, 43, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 1, 45, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 2, 35, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 3, 1, 0, 0, 0);

	 unit_cell->SetFace(28, 4);
	 unit_cell->SetEdgeInFace(28, 0, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 1, 46, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 2, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 3, 2, 0, 0, 0);

	 unit_cell->SetFace(29, 4);
	 unit_cell->SetEdgeInFace(29, 0, 45, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 1, 47, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 2, 37, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 3, 3, 0, 0, 0);

	 unit_cell->SetFace(30, 4);
	 unit_cell->SetEdgeInFace(30, 0, 46, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 1, 40, 0, 1, 1);
	 unit_cell->SetEdgeInFace(30, 2, 32, 0, 1, 1);
	 unit_cell->SetEdgeInFace(30, 3, 4, 0, 0, 0);

	 unit_cell->SetFace(31, 4);
	 unit_cell->SetEdgeInFace(31, 0, 47, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 1, 41, 0, -1, 1);
	 unit_cell->SetEdgeInFace(31, 2, 32, 0, 0, 1);
	 unit_cell->SetEdgeInFace(31, 3, 5, 0, 0, 0);

	 unit_cell->SetFace(32, 4);
	 unit_cell->SetEdgeInFace(32, 0, 40, 0, 1, 1);
	 unit_cell->SetEdgeInFace(32, 1, 42, 0, 1, 1);
	 unit_cell->SetEdgeInFace(32, 2, 33, 0, 1, 1);
	 unit_cell->SetEdgeInFace(32, 3, 6, 0, 0, 0);

	 unit_cell->SetFace(33, 4);
	 unit_cell->SetEdgeInFace(33, 0, 41, 0, -1, 1);
	 unit_cell->SetEdgeInFace(33, 1, 43, 0, -1, 1);
	 unit_cell->SetEdgeInFace(33, 2, 34, 0, -1, 1);
	 unit_cell->SetEdgeInFace(33, 3, 7, 0, 0, 0);

	 unit_cell->SetFace(34, 4);
	 unit_cell->SetEdgeInFace(34, 0, 37, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 1, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 2, 37, 0, 0, 1);
	 unit_cell->SetEdgeInFace(34, 3, 26, 0, 0, 0);

	 unit_cell->SetFace(35, 4);
	 unit_cell->SetEdgeInFace(35, 0, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(35, 1, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(35, 2, 36, 0, 0, 1);
	 unit_cell->SetEdgeInFace(35, 3, 27, 0, 0, 0);

	 unit_cell->SetFace(36, 4);
	 unit_cell->SetEdgeInFace(36, 0, 39, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 1, 29, -1, 0, 0);
	 unit_cell->SetEdgeInFace(36, 2, 39, 0, 0, 1);
	 unit_cell->SetEdgeInFace(36, 3, 28, 0, 0, 0);

	 unit_cell->SetFace(37, 4);
	 unit_cell->SetEdgeInFace(37, 0, 34, 0, 0, 0);
	 unit_cell->SetEdgeInFace(37, 1, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(37, 2, 34, 0, 0, 1);
	 unit_cell->SetEdgeInFace(37, 3, 30, 0, 0, 0);

	 unit_cell->SetFace(38, 4);
	 unit_cell->SetEdgeInFace(38, 0, 33, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 1, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 2, 33, 0, 0, 1);
	 unit_cell->SetEdgeInFace(38, 3, 31, 0, 0, 0);

	 unit_cell->SetFace(39, 4);
	 unit_cell->SetEdgeInFace(39, 0, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(39, 1, 17, 0, -1, 0);
	 unit_cell->SetEdgeInFace(39, 2, 32, 0, 0, 1);
	 unit_cell->SetEdgeInFace(39, 3, 16, 0, 0, 0);

	 unit_cell->SetFace(40, 4);
	 unit_cell->SetEdgeInFace(40, 0, 35, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 1, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 2, 35, 0, 0, 1);
	 unit_cell->SetEdgeInFace(40, 3, 20, 0, 0, 0);

	 unit_cell->SetFace(41, 4);
	 unit_cell->SetEdgeInFace(41, 0, 51, 0, 0, 0);
	 unit_cell->SetEdgeInFace(41, 1, 27, 0, 0, 0);
	 unit_cell->SetEdgeInFace(41, 2, 51, 0, 0, 1);
	 unit_cell->SetEdgeInFace(41, 3, 25, 0, 0, 0);

	 unit_cell->SetFace(42, 4);
	 unit_cell->SetEdgeInFace(42, 0, 52, 0, 0, 1);
	 unit_cell->SetEdgeInFace(42, 1, 28, 0, 0, 1);
	 unit_cell->SetEdgeInFace(42, 2, 52, 0, 0, 2);
	 unit_cell->SetEdgeInFace(42, 3, 26, 0, 0, 0);

	 unit_cell->SetFace(43, 4);
	 unit_cell->SetEdgeInFace(43, 0, 53, 0, 0, 1);
	 unit_cell->SetEdgeInFace(43, 1, 29, 0, 0, 1);
	 unit_cell->SetEdgeInFace(43, 2, 53, 0, 0, 2);
	 unit_cell->SetEdgeInFace(43, 3, 27, 0, 0, 0);

	 unit_cell->SetFace(44, 4);
	 unit_cell->SetEdgeInFace(44, 0, 54, 0, 0, 0);
	 unit_cell->SetEdgeInFace(44, 1, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(44, 2, 54, 0, 0, 1);
	 unit_cell->SetEdgeInFace(44, 3, 28, 0, 0, 0);

	 unit_cell->SetFace(45, 4);
	 unit_cell->SetEdgeInFace(45, 0, 55, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 1, 31, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 2, 55, 0, 0, 1);
	 unit_cell->SetEdgeInFace(45, 3, 29, 0, 0, 0);

	 unit_cell->SetFace(46, 4);
	 unit_cell->SetEdgeInFace(46, 0, 48, 0, 1, 0);
	 unit_cell->SetEdgeInFace(46, 1, 24, 0, 1, 0);
	 unit_cell->SetEdgeInFace(46, 2, 48, 0, 1, 1);
	 unit_cell->SetEdgeInFace(46, 3, 30, 0, 0, 0);

	 unit_cell->SetFace(47, 4);
	 unit_cell->SetEdgeInFace(47, 0, 49, 0, -1, 0);
	 unit_cell->SetEdgeInFace(47, 1, 25, 0, -1, 0);
	 unit_cell->SetEdgeInFace(47, 2, 49, 0, -1, 1);
	 unit_cell->SetEdgeInFace(47, 3, 31, 0, 0, 0);

	 unit_cell->SetFace(48, 4);
	 unit_cell->SetEdgeInFace(48, 0, 42, 0, 0, 0);
	 unit_cell->SetEdgeInFace(48, 1, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(48, 2, 42, 0, 0, 1);
	 unit_cell->SetEdgeInFace(48, 3, 16, 0, 0, 0);

	 unit_cell->SetFace(49, 4);
	 unit_cell->SetEdgeInFace(49, 0, 43, 0, 0, 0);
	 unit_cell->SetEdgeInFace(49, 1, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(49, 2, 43, 0, 0, 1);
	 unit_cell->SetEdgeInFace(49, 3, 17, 0, 0, 0);

	 unit_cell->SetFace(50, 4);
	 unit_cell->SetEdgeInFace(50, 0, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(50, 1, 20, 0, 0, 0);
	 unit_cell->SetEdgeInFace(50, 2, 44, 0, 0, 1);
	 unit_cell->SetEdgeInFace(50, 3, 18, 0, 0, 0);

	 unit_cell->SetFace(51, 4);
	 unit_cell->SetEdgeInFace(51, 0, 45, 0, 0, 0);
	 unit_cell->SetEdgeInFace(51, 1, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(51, 2, 45, 0, 0, 1);
	 unit_cell->SetEdgeInFace(51, 3, 19, 0, 0, 0);

	 unit_cell->SetFace(52, 4);
	 unit_cell->SetEdgeInFace(52, 0, 46, 0, 0, 0);
	 unit_cell->SetEdgeInFace(52, 1, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(52, 2, 46, 0, 0, 1);
	 unit_cell->SetEdgeInFace(52, 3, 20, 0, 0, 0);

	 unit_cell->SetFace(53, 4);
	 unit_cell->SetEdgeInFace(53, 0, 47, 0, 0, 0);
	 unit_cell->SetEdgeInFace(53, 1, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(53, 2, 47, 0, 0, 1);
	 unit_cell->SetEdgeInFace(53, 3, 21, 0, 0, 0);

	 unit_cell->SetFace(54, 4);
	 unit_cell->SetEdgeInFace(54, 0, 40, 0, 1, 1);
	 unit_cell->SetEdgeInFace(54, 1, 16, 0, 1, 1);
	 unit_cell->SetEdgeInFace(54, 2, 40, 0, 1, 2);
	 unit_cell->SetEdgeInFace(54, 3, 22, 0, 0, 0);

	 unit_cell->SetFace(55, 4);
	 unit_cell->SetEdgeInFace(55, 0, 41, 0, -1, 1);
	 unit_cell->SetEdgeInFace(55, 1, 17, 0, -1, 1);
	 unit_cell->SetEdgeInFace(55, 2, 41, 0, -1, 2);
	 unit_cell->SetEdgeInFace(55, 3, 23, 0, 0, 0);

	 return unit_cell;
}
