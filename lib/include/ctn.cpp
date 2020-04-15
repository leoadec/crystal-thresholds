#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("ctn", 28, 48, 48);

	 // vertex 0 located at (0.04171, 0.04171, 0.04171)
	 // vertex 1 located at (0.29171, 0.70829, 0.20829)
	 // vertex 2 located at (0.95829, 0.45829, 0.04171)
	 // vertex 3 located at (0.70829, 0.79171, 0.20829)
	 // vertex 4 located at (0.04171, 0.95829, 0.45829)
	 // vertex 5 located at (0.20829, 0.70829, 0.79171)
	 // vertex 6 located at (0.95829, 0.54171, 0.45829)
	 // vertex 7 located at (0.79171, 0.79171, 0.79171)
	 // vertex 8 located at (0.29171, 0.29171, 0.29171)
	 // vertex 9 located at (0.45829, 0.95829, 0.54171)
	 // vertex 10 located at (0.20829, 0.29171, 0.70829)
	 // vertex 11 located at (0.79171, 0.20829, 0.70829)
	 // vertex 12 located at (0.54171, 0.54171, 0.54171)
	 // vertex 13 located at (0.54171, 0.45829, 0.95829)
	 // vertex 14 located at (0.70829, 0.2082900000000001, 0.2917099999999999)
	 // vertex 15 located at (0.45829, 0.041709999999999914, 0.95829)
	 // vertex 16 located at (0.25, 0.875, 0.0)
	 // vertex 17 located at (0.125, 0.5, 0.25)
	 // vertex 18 located at (0.75, 0.625, 0.0)
	 // vertex 19 located at (0.875, 0.0, 0.25)
	 // vertex 20 located at (0.25, 0.125, 0.5)
	 // vertex 21 located at (0.375, 0.5, 0.75)
	 // vertex 22 located at (0.75, 0.375, 0.5)
	 // vertex 23 located at (0.625, 0.0, 0.75)
	 // vertex 24 located at (0.0, 0.25, 0.875)
	 // vertex 25 located at (0.5, 0.75, 0.375)
	 // vertex 26 located at (0.0, 0.75, 0.625)
	 // vertex 27 located at (0.5, 0.25, 0.125)

	 unit_cell->SetEdge(0, 16, 5, 0, 0, -1);
	 unit_cell->SetEdge(1, 17, 6, -1, 0, 0);
	 unit_cell->SetEdge(2, 18, 7, 0, 0, -1);
	 unit_cell->SetEdge(3, 19, 4, 1, -1, 0);
	 unit_cell->SetEdge(4, 20, 10, 0, 0, 0);
	 unit_cell->SetEdge(5, 21, 12, 0, 0, 0);
	 unit_cell->SetEdge(6, 22, 11, 0, 0, 0);
	 unit_cell->SetEdge(7, 23, 9, 0, -1, 0);
	 unit_cell->SetEdge(8, 24, 11, -1, 0, 0);
	 unit_cell->SetEdge(9, 25, 9, 0, 0, 0);
	 unit_cell->SetEdge(10, 24, 10, 0, 0, 0);
	 unit_cell->SetEdge(11, 25, 12, 0, 0, 0);
	 unit_cell->SetEdge(12, 26, 7, -1, 0, 0);
	 unit_cell->SetEdge(13, 26, 4, 0, 0, 0);
	 unit_cell->SetEdge(14, 26, 5, 0, 0, 0);
	 unit_cell->SetEdge(15, 26, 6, -1, 0, 0);
	 unit_cell->SetEdge(16, 19, 3, 0, -1, 0);
	 unit_cell->SetEdge(17, 19, 14, 0, 0, 0);
	 unit_cell->SetEdge(18, 16, 15, 0, 1, -1);
	 unit_cell->SetEdge(19, 17, 8, 0, 0, 0);
	 unit_cell->SetEdge(20, 20, 4, 0, -1, 0);
	 unit_cell->SetEdge(21, 23, 11, 0, 0, 0);
	 unit_cell->SetEdge(22, 20, 9, 0, -1, 0);
	 unit_cell->SetEdge(23, 22, 12, 0, 0, 0);
	 unit_cell->SetEdge(24, 22, 14, 0, 0, 0);
	 unit_cell->SetEdge(25, 23, 15, 0, 0, 0);
	 unit_cell->SetEdge(26, 20, 8, 0, 0, 0);
	 unit_cell->SetEdge(27, 21, 13, 0, 0, 0);
	 unit_cell->SetEdge(28, 18, 3, 0, 0, 0);
	 unit_cell->SetEdge(29, 19, 0, 1, 0, 0);
	 unit_cell->SetEdge(30, 16, 1, 0, 0, 0);
	 unit_cell->SetEdge(31, 17, 2, -1, 0, 0);
	 unit_cell->SetEdge(32, 25, 1, 0, 0, 0);
	 unit_cell->SetEdge(33, 24, 2, -1, 0, 1);
	 unit_cell->SetEdge(34, 25, 3, 0, 0, 0);
	 unit_cell->SetEdge(35, 24, 0, 0, 0, 1);
	 unit_cell->SetEdge(36, 27, 8, 0, 0, 0);
	 unit_cell->SetEdge(37, 27, 13, 0, 0, -1);
	 unit_cell->SetEdge(38, 27, 14, 0, 0, 0);
	 unit_cell->SetEdge(39, 27, 15, 0, 0, -1);
	 unit_cell->SetEdge(40, 21, 10, 0, 0, 0);
	 unit_cell->SetEdge(41, 21, 5, 0, 0, 0);
	 unit_cell->SetEdge(42, 22, 6, 0, 0, 0);
	 unit_cell->SetEdge(43, 23, 7, 0, -1, 0);
	 unit_cell->SetEdge(44, 18, 13, 0, 0, -1);
	 unit_cell->SetEdge(45, 17, 1, 0, 0, 0);
	 unit_cell->SetEdge(46, 18, 2, 0, 0, 0);
	 unit_cell->SetEdge(47, 16, 0, 0, 1, 0);

	 unit_cell->SetFace(0, 8);
	 unit_cell->SetEdgeInFace(0, 0, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(0, 1, 30, 0, 0, 1);
	 unit_cell->SetEdgeInFace(0, 2, 45, 0, 0, 1);
	 unit_cell->SetEdgeInFace(0, 3, 31, 0, 0, 1);
	 unit_cell->SetEdgeInFace(0, 4, 33, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 5, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 6, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 7, 41, 0, 0, 0);

	 unit_cell->SetFace(1, 8);
	 unit_cell->SetEdgeInFace(1, 0, 1, 1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 31, 1, 0, 0);
	 unit_cell->SetEdgeInFace(1, 2, 46, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 3, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 4, 34, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 5, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 6, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 7, 42, 0, 0, 0);

	 unit_cell->SetFace(2, 8);
	 unit_cell->SetEdgeInFace(2, 0, 2, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 1, 28, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 2, 16, 0, 1, 1);
	 unit_cell->SetEdgeInFace(2, 3, 29, 0, 1, 1);
	 unit_cell->SetEdgeInFace(2, 4, 35, 1, 1, 0);
	 unit_cell->SetEdgeInFace(2, 5, 8, 1, 1, 0);
	 unit_cell->SetEdgeInFace(2, 6, 21, 0, 1, 0);
	 unit_cell->SetEdgeInFace(2, 7, 43, 0, 1, 0);

	 unit_cell->SetFace(3, 8);
	 unit_cell->SetEdgeInFace(3, 0, 3, -1, 1, 0);
	 unit_cell->SetEdgeInFace(3, 1, 29, -1, 1, 0);
	 unit_cell->SetEdgeInFace(3, 2, 47, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 3, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 4, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 5, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 6, 22, 0, 1, 0);
	 unit_cell->SetEdgeInFace(3, 7, 20, 0, 1, 0);

	 unit_cell->SetFace(4, 8);
	 unit_cell->SetEdgeInFace(4, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 3, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 4, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 5, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 6, 41, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 7, 40, 0, 0, 0);

	 unit_cell->SetFace(5, 8);
	 unit_cell->SetEdgeInFace(5, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 27, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 2, 44, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 3, 2, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 4, 12, 1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 5, 15, 1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 6, 42, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 7, 23, 0, 0, 0);

	 unit_cell->SetFace(6, 8);
	 unit_cell->SetEdgeInFace(6, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 2, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 3, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 4, 13, 1, -1, 0);
	 unit_cell->SetEdgeInFace(6, 5, 12, 1, -1, 0);
	 unit_cell->SetEdgeInFace(6, 6, 43, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 7, 21, 0, 0, 0);

	 unit_cell->SetFace(7, 8);
	 unit_cell->SetEdgeInFace(7, 0, 7, 0, 1, 0);
	 unit_cell->SetEdgeInFace(7, 1, 25, 0, 1, 0);
	 unit_cell->SetEdgeInFace(7, 2, 18, 0, 0, 1);
	 unit_cell->SetEdgeInFace(7, 3, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(7, 4, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 5, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 6, 20, 0, 1, 0);
	 unit_cell->SetEdgeInFace(7, 7, 22, 0, 1, 0);

	 unit_cell->SetFace(8, 8);
	 unit_cell->SetEdgeInFace(8, 0, 8, 1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 10, 1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 20, 1, 0, 0);
	 unit_cell->SetEdgeInFace(8, 4, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 5, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 6, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 7, 6, 0, 0, 0);

	 unit_cell->SetFace(9, 8);
	 unit_cell->SetEdgeInFace(9, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 2, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 3, 41, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 4, 0, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 5, 18, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 6, 25, 0, 1, 0);
	 unit_cell->SetEdgeInFace(9, 7, 7, 0, 1, 0);

	 unit_cell->SetFace(10, 8);
	 unit_cell->SetEdgeInFace(10, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 2, 6, -1, 0, 0);
	 unit_cell->SetEdgeInFace(10, 3, 42, -1, 0, 0);
	 unit_cell->SetEdgeInFace(10, 4, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 5, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 6, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 7, 4, 0, 0, 0);

	 unit_cell->SetFace(11, 8);
	 unit_cell->SetEdgeInFace(11, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 7, 0, 1, 0);
	 unit_cell->SetEdgeInFace(11, 3, 43, 0, 1, 0);
	 unit_cell->SetEdgeInFace(11, 4, 2, 0, 0, 1);
	 unit_cell->SetEdgeInFace(11, 5, 44, 0, 0, 1);
	 unit_cell->SetEdgeInFace(11, 6, 27, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 7, 5, 0, 0, 0);

	 unit_cell->SetFace(12, 8);
	 unit_cell->SetEdgeInFace(12, 0, 12, 1, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 14, 1, 0, 0);
	 unit_cell->SetEdgeInFace(12, 2, 0, 1, 0, 1);
	 unit_cell->SetEdgeInFace(12, 3, 47, 1, 0, 1);
	 unit_cell->SetEdgeInFace(12, 4, 29, 0, 1, 1);
	 unit_cell->SetEdgeInFace(12, 5, 16, 0, 1, 1);
	 unit_cell->SetEdgeInFace(12, 6, 28, 0, 0, 1);
	 unit_cell->SetEdgeInFace(12, 7, 2, 0, 0, 1);

	 unit_cell->SetFace(13, 8);
	 unit_cell->SetEdgeInFace(13, 0, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 2, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 3, 45, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 4, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 5, 47, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 6, 29, -1, 1, 0);
	 unit_cell->SetEdgeInFace(13, 7, 3, -1, 1, 0);

	 unit_cell->SetFace(14, 8);
	 unit_cell->SetEdgeInFace(14, 0, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 2, 2, -1, 0, 1);
	 unit_cell->SetEdgeInFace(14, 3, 46, -1, 0, 1);
	 unit_cell->SetEdgeInFace(14, 4, 31, 0, 0, 1);
	 unit_cell->SetEdgeInFace(14, 5, 45, 0, 0, 1);
	 unit_cell->SetEdgeInFace(14, 6, 30, 0, 0, 1);
	 unit_cell->SetEdgeInFace(14, 7, 0, 0, 0, 1);

	 unit_cell->SetFace(15, 8);
	 unit_cell->SetEdgeInFace(15, 0, 15, 1, 0, 0);
	 unit_cell->SetEdgeInFace(15, 1, 13, 1, 0, 0);
	 unit_cell->SetEdgeInFace(15, 2, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(15, 3, 16, 0, 1, 0);
	 unit_cell->SetEdgeInFace(15, 4, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 5, 46, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 6, 31, 1, 0, 0);
	 unit_cell->SetEdgeInFace(15, 7, 1, 1, 0, 0);

	 unit_cell->SetFace(16, 8);
	 unit_cell->SetEdgeInFace(16, 0, 16, 0, 1, 0);
	 unit_cell->SetEdgeInFace(16, 1, 17, 0, 1, 0);
	 unit_cell->SetEdgeInFace(16, 2, 38, 0, 1, 0);
	 unit_cell->SetEdgeInFace(16, 3, 39, 0, 1, 0);
	 unit_cell->SetEdgeInFace(16, 4, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 5, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 6, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 7, 34, 0, 0, 0);

	 unit_cell->SetFace(17, 8);
	 unit_cell->SetEdgeInFace(17, 0, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 1, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 2, 34, 0, -1, 0);
	 unit_cell->SetEdgeInFace(17, 3, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(17, 4, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 5, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 6, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 7, 38, 0, 0, 0);

	 unit_cell->SetFace(18, 8);
	 unit_cell->SetEdgeInFace(18, 0, 18, 0, -1, 1);
	 unit_cell->SetEdgeInFace(18, 1, 47, 0, -1, 1);
	 unit_cell->SetEdgeInFace(18, 2, 35, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 3, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 4, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 5, 27, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 6, 37, 0, 0, 1);
	 unit_cell->SetEdgeInFace(18, 7, 39, 0, 0, 1);

	 unit_cell->SetFace(19, 8);
	 unit_cell->SetEdgeInFace(19, 0, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 1, 45, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 2, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 3, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 4, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 5, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 6, 38, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 7, 36, 0, 0, 0);

	 unit_cell->SetFace(20, 8);
	 unit_cell->SetEdgeInFace(20, 0, 20, 0, 1, 0);
	 unit_cell->SetEdgeInFace(20, 1, 22, 0, 1, 0);
	 unit_cell->SetEdgeInFace(20, 2, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 3, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 4, 45, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 5, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 6, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 7, 13, 0, 0, 0);

	 unit_cell->SetFace(21, 8);
	 unit_cell->SetEdgeInFace(21, 0, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 1, 43, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 2, 12, 1, -1, 0);
	 unit_cell->SetEdgeInFace(21, 3, 13, 1, -1, 0);
	 unit_cell->SetEdgeInFace(21, 4, 20, 1, 0, 0);
	 unit_cell->SetEdgeInFace(21, 5, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(21, 6, 10, 1, 0, 0);
	 unit_cell->SetEdgeInFace(21, 7, 8, 1, 0, 0);

	 unit_cell->SetFace(22, 8);
	 unit_cell->SetEdgeInFace(22, 0, 22, 0, 1, 0);
	 unit_cell->SetEdgeInFace(22, 1, 20, 0, 1, 0);
	 unit_cell->SetEdgeInFace(22, 2, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 3, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 4, 41, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 5, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 6, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 7, 9, 0, 0, 0);

	 unit_cell->SetFace(23, 8);
	 unit_cell->SetEdgeInFace(23, 0, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(23, 1, 42, 0, 0, 0);
	 unit_cell->SetEdgeInFace(23, 2, 15, 1, 0, 0);
	 unit_cell->SetEdgeInFace(23, 3, 12, 1, 0, 0);
	 unit_cell->SetEdgeInFace(23, 4, 43, 0, 1, 0);
	 unit_cell->SetEdgeInFace(23, 5, 7, 0, 1, 0);
	 unit_cell->SetEdgeInFace(23, 6, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(23, 7, 11, 0, 0, 0);

	 unit_cell->SetFace(24, 8);
	 unit_cell->SetEdgeInFace(24, 0, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(24, 1, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(24, 2, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(24, 3, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(24, 4, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(24, 5, 34, 0, -1, 0);
	 unit_cell->SetEdgeInFace(24, 6, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(24, 7, 17, 0, 0, 0);

	 unit_cell->SetFace(25, 8);
	 unit_cell->SetEdgeInFace(25, 0, 25, 0, 0, 0);
	 unit_cell->SetEdgeInFace(25, 1, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(25, 2, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(25, 3, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(25, 4, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(25, 5, 35, 0, 0, 0);
	 unit_cell->SetEdgeInFace(25, 6, 47, 0, -1, 1);
	 unit_cell->SetEdgeInFace(25, 7, 18, 0, -1, 1);

	 unit_cell->SetFace(26, 8);
	 unit_cell->SetEdgeInFace(26, 0, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 1, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 2, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 3, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 4, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 5, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 6, 45, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 7, 19, 0, 0, 0);

	 unit_cell->SetFace(27, 8);
	 unit_cell->SetEdgeInFace(27, 0, 27, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 1, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 2, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 3, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 4, 8, 1, 0, 0);
	 unit_cell->SetEdgeInFace(27, 5, 33, 1, 0, 0);
	 unit_cell->SetEdgeInFace(27, 6, 46, 0, 0, 1);
	 unit_cell->SetEdgeInFace(27, 7, 44, 0, 0, 1);

	 unit_cell->SetFace(28, 8);
	 unit_cell->SetEdgeInFace(28, 0, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 2, 43, 0, 1, -1);
	 unit_cell->SetEdgeInFace(28, 3, 25, 0, 1, -1);
	 unit_cell->SetEdgeInFace(28, 4, 39, 0, 1, 0);
	 unit_cell->SetEdgeInFace(28, 5, 38, 0, 1, 0);
	 unit_cell->SetEdgeInFace(28, 6, 17, 0, 1, 0);
	 unit_cell->SetEdgeInFace(28, 7, 16, 0, 1, 0);

	 unit_cell->SetFace(29, 8);
	 unit_cell->SetEdgeInFace(29, 0, 29, -1, 0, 0);
	 unit_cell->SetEdgeInFace(29, 1, 3, -1, 0, 0);
	 unit_cell->SetEdgeInFace(29, 2, 20, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 3, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 4, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 5, 39, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 6, 18, 0, -1, 0);
	 unit_cell->SetEdgeInFace(29, 7, 47, 0, -1, 0);

	 unit_cell->SetFace(30, 8);
	 unit_cell->SetEdgeInFace(30, 0, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 1, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 2, 41, 0, 0, -1);
	 unit_cell->SetEdgeInFace(30, 3, 27, 0, 0, -1);
	 unit_cell->SetEdgeInFace(30, 4, 37, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 5, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 6, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 7, 45, 0, 0, 0);

	 unit_cell->SetFace(31, 8);
	 unit_cell->SetEdgeInFace(31, 0, 31, 1, 0, 0);
	 unit_cell->SetEdgeInFace(31, 1, 1, 1, 0, 0);
	 unit_cell->SetEdgeInFace(31, 2, 42, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 3, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 4, 38, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 5, 37, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 6, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 7, 46, 0, 0, 0);

	 unit_cell->SetFace(32, 8);
	 unit_cell->SetEdgeInFace(32, 0, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 1, 34, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 2, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 3, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 4, 27, 0, 0, -1);
	 unit_cell->SetEdgeInFace(32, 5, 41, 0, 0, -1);
	 unit_cell->SetEdgeInFace(32, 6, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 7, 30, 0, 0, 0);

	 unit_cell->SetFace(33, 8);
	 unit_cell->SetEdgeInFace(33, 0, 33, 1, 0, -1);
	 unit_cell->SetEdgeInFace(33, 1, 35, 1, 0, -1);
	 unit_cell->SetEdgeInFace(33, 2, 29, 0, 0, 0);
	 unit_cell->SetEdgeInFace(33, 3, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(33, 4, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(33, 5, 42, 0, 0, 0);
	 unit_cell->SetEdgeInFace(33, 6, 1, 1, 0, 0);
	 unit_cell->SetEdgeInFace(33, 7, 31, 1, 0, 0);

	 unit_cell->SetFace(34, 8);
	 unit_cell->SetEdgeInFace(34, 0, 34, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 1, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 2, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 3, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 4, 25, 0, 1, -1);
	 unit_cell->SetEdgeInFace(34, 5, 43, 0, 1, -1);
	 unit_cell->SetEdgeInFace(34, 6, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 7, 28, 0, 0, 0);

	 unit_cell->SetFace(35, 8);
	 unit_cell->SetEdgeInFace(35, 0, 35, 0, 0, -1);
	 unit_cell->SetEdgeInFace(35, 1, 33, 0, 0, -1);
	 unit_cell->SetEdgeInFace(35, 2, 31, 0, 0, 0);
	 unit_cell->SetEdgeInFace(35, 3, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(35, 4, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(35, 5, 20, 0, 0, 0);
	 unit_cell->SetEdgeInFace(35, 6, 3, -1, 0, 0);
	 unit_cell->SetEdgeInFace(35, 7, 29, -1, 0, 0);

	 unit_cell->SetFace(36, 8);
	 unit_cell->SetEdgeInFace(36, 0, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 1, 38, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 2, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 3, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 4, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 5, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 6, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 7, 26, 0, 0, 0);

	 unit_cell->SetFace(37, 8);
	 unit_cell->SetEdgeInFace(37, 0, 37, 0, 0, 1);
	 unit_cell->SetEdgeInFace(37, 1, 39, 0, 0, 1);
	 unit_cell->SetEdgeInFace(37, 2, 25, 0, 0, 0);
	 unit_cell->SetEdgeInFace(37, 3, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(37, 4, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(37, 5, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(37, 6, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(37, 7, 27, 0, 0, 0);

	 unit_cell->SetFace(38, 8);
	 unit_cell->SetEdgeInFace(38, 0, 38, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 1, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 2, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 3, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 4, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 5, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 6, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 7, 24, 0, 0, 0);

	 unit_cell->SetFace(39, 8);
	 unit_cell->SetEdgeInFace(39, 0, 39, 0, 0, 1);
	 unit_cell->SetEdgeInFace(39, 1, 37, 0, 0, 1);
	 unit_cell->SetEdgeInFace(39, 2, 27, 0, 0, 0);
	 unit_cell->SetEdgeInFace(39, 3, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(39, 4, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(39, 5, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(39, 6, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(39, 7, 25, 0, 0, 0);

	 unit_cell->SetFace(40, 8);
	 unit_cell->SetEdgeInFace(40, 0, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 1, 41, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 2, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 3, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 4, 42, -1, 0, 0);
	 unit_cell->SetEdgeInFace(40, 5, 6, -1, 0, 0);
	 unit_cell->SetEdgeInFace(40, 6, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 7, 10, 0, 0, 0);

	 unit_cell->SetFace(41, 8);
	 unit_cell->SetEdgeInFace(41, 0, 41, 0, 0, 0);
	 unit_cell->SetEdgeInFace(41, 1, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(41, 2, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(41, 3, 33, 0, 0, 0);
	 unit_cell->SetEdgeInFace(41, 4, 46, -1, 0, 1);
	 unit_cell->SetEdgeInFace(41, 5, 2, -1, 0, 1);
	 unit_cell->SetEdgeInFace(41, 6, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(41, 7, 14, 0, 0, 0);

	 unit_cell->SetFace(42, 8);
	 unit_cell->SetEdgeInFace(42, 0, 42, 0, 0, 0);
	 unit_cell->SetEdgeInFace(42, 1, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(42, 2, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(42, 3, 34, 0, 0, 0);
	 unit_cell->SetEdgeInFace(42, 4, 16, 0, 1, 0);
	 unit_cell->SetEdgeInFace(42, 5, 3, 0, 1, 0);
	 unit_cell->SetEdgeInFace(42, 6, 13, 1, 0, 0);
	 unit_cell->SetEdgeInFace(42, 7, 15, 1, 0, 0);

	 unit_cell->SetFace(43, 8);
	 unit_cell->SetEdgeInFace(43, 0, 43, 0, 1, 0);
	 unit_cell->SetEdgeInFace(43, 1, 21, 0, 1, 0);
	 unit_cell->SetEdgeInFace(43, 2, 8, 1, 1, 0);
	 unit_cell->SetEdgeInFace(43, 3, 35, 1, 1, 0);
	 unit_cell->SetEdgeInFace(43, 4, 47, 1, 0, 1);
	 unit_cell->SetEdgeInFace(43, 5, 0, 1, 0, 1);
	 unit_cell->SetEdgeInFace(43, 6, 14, 1, 0, 0);
	 unit_cell->SetEdgeInFace(43, 7, 12, 1, 0, 0);

	 unit_cell->SetFace(44, 8);
	 unit_cell->SetEdgeInFace(44, 0, 44, 0, 0, 1);
	 unit_cell->SetEdgeInFace(44, 1, 46, 0, 0, 1);
	 unit_cell->SetEdgeInFace(44, 2, 33, 1, 0, 0);
	 unit_cell->SetEdgeInFace(44, 3, 8, 1, 0, 0);
	 unit_cell->SetEdgeInFace(44, 4, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(44, 5, 25, 0, 0, 0);
	 unit_cell->SetEdgeInFace(44, 6, 39, 0, 0, 1);
	 unit_cell->SetEdgeInFace(44, 7, 37, 0, 0, 1);

	 unit_cell->SetFace(45, 8);
	 unit_cell->SetEdgeInFace(45, 0, 45, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 1, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 2, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 3, 37, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 4, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 5, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 6, 34, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 7, 32, 0, 0, 0);

	 unit_cell->SetFace(46, 8);
	 unit_cell->SetEdgeInFace(46, 0, 46, 0, 0, 0);
	 unit_cell->SetEdgeInFace(46, 1, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(46, 2, 37, 0, 0, 0);
	 unit_cell->SetEdgeInFace(46, 3, 38, 0, 0, 0);
	 unit_cell->SetEdgeInFace(46, 4, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(46, 5, 29, 0, 0, 0);
	 unit_cell->SetEdgeInFace(46, 6, 35, 1, 0, -1);
	 unit_cell->SetEdgeInFace(46, 7, 33, 1, 0, -1);

	 unit_cell->SetFace(47, 8);
	 unit_cell->SetEdgeInFace(47, 0, 47, 0, -1, 0);
	 unit_cell->SetEdgeInFace(47, 1, 18, 0, -1, 0);
	 unit_cell->SetEdgeInFace(47, 2, 39, 0, 0, 0);
	 unit_cell->SetEdgeInFace(47, 3, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(47, 4, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(47, 5, 31, 0, 0, 0);
	 unit_cell->SetEdgeInFace(47, 6, 33, 0, 0, -1);
	 unit_cell->SetEdgeInFace(47, 7, 35, 0, 0, -1);

	 return unit_cell;
}
