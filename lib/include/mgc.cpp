#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("mgc", 24, 96, 96);

	 // vertex 0 located at (0.0, 0.0, 0.0)
	 // vertex 1 located at (0.0, 0.25, 0.25)
	 // vertex 2 located at (0.75, 0.25, 0.5)
	 // vertex 3 located at (0.75, 0.0, 0.75)
	 // vertex 4 located at (0.5, 0.75, 0.25)
	 // vertex 5 located at (0.25, 0.75, 0.5)
	 // vertex 6 located at (0.25, 0.5, 0.75)
	 // vertex 7 located at (0.0, 0.5, 0.5)
	 // vertex 8 located at (0.25, 0.25, 0.0)
	 // vertex 9 located at (0.25, 0.0, 0.25)
	 // vertex 10 located at (0.5, 0.25, 0.75)
	 // vertex 11 located at (0.0, 0.75, 0.75)
	 // vertex 12 located at (0.75, 0.5, 0.25)
	 // vertex 13 located at (0.75, 0.75, 0.0)
	 // vertex 14 located at (0.5, 0.0, 0.5)
	 // vertex 15 located at (0.5, 0.5, 0.0)
	 // vertex 16 located at (0.125, 0.125, 0.625)
	 // vertex 17 located at (0.875, 0.375, 0.875)
	 // vertex 18 located at (0.625, 0.125, 0.125)
	 // vertex 19 located at (0.875, 0.875, 0.375)
	 // vertex 20 located at (0.125, 0.625, 0.125)
	 // vertex 21 located at (0.375, 0.375, 0.375)
	 // vertex 22 located at (0.375, 0.875, 0.875)
	 // vertex 23 located at (0.625, 0.625, 0.625)

	 unit_cell->SetEdge(0, 0, 16, 0, 0, -1);
	 unit_cell->SetEdge(1, 1, 17, -1, 0, -1);
	 unit_cell->SetEdge(2, 2, 18, 0, 0, 0);
	 unit_cell->SetEdge(3, 3, 19, 0, -1, 0);
	 unit_cell->SetEdge(4, 1, 16, 0, 0, 0);
	 unit_cell->SetEdge(5, 2, 17, 0, 0, 0);
	 unit_cell->SetEdge(6, 3, 18, 0, 0, 1);
	 unit_cell->SetEdge(7, 0, 19, -1, -1, 0);
	 unit_cell->SetEdge(8, 0, 18, -1, 0, 0);
	 unit_cell->SetEdge(9, 1, 19, -1, -1, 0);
	 unit_cell->SetEdge(10, 2, 16, 1, 0, 0);
	 unit_cell->SetEdge(11, 3, 17, 0, 0, 0);
	 unit_cell->SetEdge(12, 1, 18, -1, 0, 0);
	 unit_cell->SetEdge(13, 2, 19, 0, -1, 0);
	 unit_cell->SetEdge(14, 3, 16, 1, 0, 0);
	 unit_cell->SetEdge(15, 0, 17, -1, 0, -1);
	 unit_cell->SetEdge(16, 0, 20, 0, -1, 0);
	 unit_cell->SetEdge(17, 4, 18, 0, 1, 0);
	 unit_cell->SetEdge(18, 5, 19, -1, 0, 0);
	 unit_cell->SetEdge(19, 6, 16, 0, 0, 0);
	 unit_cell->SetEdge(20, 7, 21, 0, 0, 0);
	 unit_cell->SetEdge(21, 8, 20, 0, 0, 0);
	 unit_cell->SetEdge(22, 9, 19, -1, -1, 0);
	 unit_cell->SetEdge(23, 10, 17, 0, 0, 0);
	 unit_cell->SetEdge(24, 11, 20, 0, 0, 1);
	 unit_cell->SetEdge(25, 5, 22, 0, 0, 0);
	 unit_cell->SetEdge(26, 9, 16, 0, 0, 0);
	 unit_cell->SetEdge(27, 11, 19, -1, 0, 0);
	 unit_cell->SetEdge(28, 5, 20, 0, 0, 0);
	 unit_cell->SetEdge(29, 9, 22, 0, -1, -1);
	 unit_cell->SetEdge(30, 0, 22, 0, -1, -1);
	 unit_cell->SetEdge(31, 11, 16, 0, 1, 0);
	 unit_cell->SetEdge(32, 9, 20, 0, -1, 0);
	 unit_cell->SetEdge(33, 11, 22, 0, 0, 0);
	 unit_cell->SetEdge(34, 5, 16, 0, 1, 0);
	 unit_cell->SetEdge(35, 10, 22, 0, -1, 0);
	 unit_cell->SetEdge(36, 12, 19, 0, 0, 0);
	 unit_cell->SetEdge(37, 7, 23, -1, 0, 0);
	 unit_cell->SetEdge(38, 13, 17, 0, 0, -1);
	 unit_cell->SetEdge(39, 4, 20, 0, 0, 0);
	 unit_cell->SetEdge(40, 7, 20, 0, 0, 0);
	 unit_cell->SetEdge(41, 13, 23, 0, 0, -1);
	 unit_cell->SetEdge(42, 12, 17, 0, 0, -1);
	 unit_cell->SetEdge(43, 13, 19, 0, 0, 0);
	 unit_cell->SetEdge(44, 12, 23, 0, 0, 0);
	 unit_cell->SetEdge(45, 7, 17, -1, 0, 0);
	 unit_cell->SetEdge(46, 11, 17, -1, 0, 0);
	 unit_cell->SetEdge(47, 13, 20, 1, 0, 0);
	 unit_cell->SetEdge(48, 11, 23, -1, 0, 0);
	 unit_cell->SetEdge(49, 12, 20, 1, 0, 0);
	 unit_cell->SetEdge(50, 7, 19, -1, 0, 0);
	 unit_cell->SetEdge(51, 7, 16, 0, 0, 0);
	 unit_cell->SetEdge(52, 10, 23, 0, 0, 0);
	 unit_cell->SetEdge(53, 8, 17, -1, 0, -1);
	 unit_cell->SetEdge(54, 6, 17, -1, 0, 0);
	 unit_cell->SetEdge(55, 4, 19, 0, 0, 0);
	 unit_cell->SetEdge(56, 8, 21, 0, 0, 0);
	 unit_cell->SetEdge(57, 6, 20, 0, 0, 1);
	 unit_cell->SetEdge(58, 8, 16, 0, 0, -1);
	 unit_cell->SetEdge(59, 6, 21, 0, 0, 0);
	 unit_cell->SetEdge(60, 1, 20, 0, 0, 0);
	 unit_cell->SetEdge(61, 1, 21, 0, 0, 0);
	 unit_cell->SetEdge(62, 4, 21, 0, 0, 0);
	 unit_cell->SetEdge(63, 10, 16, 0, 0, 0);
	 unit_cell->SetEdge(64, 14, 18, 0, 0, 0);
	 unit_cell->SetEdge(65, 10, 21, 0, 0, 0);
	 unit_cell->SetEdge(66, 10, 18, 0, 0, 1);
	 unit_cell->SetEdge(67, 14, 22, 0, -1, 0);
	 unit_cell->SetEdge(68, 14, 16, 0, 0, 0);
	 unit_cell->SetEdge(69, 8, 18, 0, 0, 0);
	 unit_cell->SetEdge(70, 9, 21, 0, 0, 0);
	 unit_cell->SetEdge(71, 8, 22, 0, -1, -1);
	 unit_cell->SetEdge(72, 9, 18, 0, 0, 0);
	 unit_cell->SetEdge(73, 14, 21, 0, 0, 0);
	 unit_cell->SetEdge(74, 14, 23, 0, -1, 0);
	 unit_cell->SetEdge(75, 13, 22, 0, 0, -1);
	 unit_cell->SetEdge(76, 12, 18, 0, 0, 0);
	 unit_cell->SetEdge(77, 15, 17, 0, 0, -1);
	 unit_cell->SetEdge(78, 2, 23, 0, 0, 0);
	 unit_cell->SetEdge(79, 3, 22, 0, -1, 0);
	 unit_cell->SetEdge(80, 4, 23, 0, 0, 0);
	 unit_cell->SetEdge(81, 4, 22, 0, 0, -1);
	 unit_cell->SetEdge(82, 14, 19, 0, -1, 0);
	 unit_cell->SetEdge(83, 3, 23, 0, -1, 0);
	 unit_cell->SetEdge(84, 13, 18, 0, 1, 0);
	 unit_cell->SetEdge(85, 6, 22, 0, 0, 0);
	 unit_cell->SetEdge(86, 15, 20, 0, 0, 0);
	 unit_cell->SetEdge(87, 5, 21, 0, 0, 0);
	 unit_cell->SetEdge(88, 15, 23, 0, 0, -1);
	 unit_cell->SetEdge(89, 15, 21, 0, 0, 0);
	 unit_cell->SetEdge(90, 5, 23, 0, 0, 0);
	 unit_cell->SetEdge(91, 6, 23, 0, 0, 0);
	 unit_cell->SetEdge(92, 15, 22, 0, 0, -1);
	 unit_cell->SetEdge(93, 15, 18, 0, 0, 0);
	 unit_cell->SetEdge(94, 2, 21, 0, 0, 0);
	 unit_cell->SetEdge(95, 12, 21, 0, 0, 0);

	 unit_cell->SetFace(0, 4);
	 unit_cell->SetEdgeInFace(0, 0, 86, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 39, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 62, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 3, 89, 0, 0, 0);

	 unit_cell->SetFace(1, 4);
	 unit_cell->SetEdgeInFace(1, 0, 62, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 87, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 2, 90, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 3, 80, 0, 0, 0);

	 unit_cell->SetFace(2, 4);
	 unit_cell->SetEdgeInFace(2, 0, 90, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 91, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 2, 85, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 3, 25, 0, 0, 0);

	 unit_cell->SetFace(3, 4);
	 unit_cell->SetEdgeInFace(3, 0, 85, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 92, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 2, 86, 0, 0, 1);
	 unit_cell->SetEdgeInFace(3, 3, 57, 0, 0, 0);

	 unit_cell->SetFace(4, 4);
	 unit_cell->SetEdgeInFace(4, 0, 39, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 86, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 92, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 3, 81, 0, 0, 0);

	 unit_cell->SetFace(5, 4);
	 unit_cell->SetEdgeInFace(5, 0, 87, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 62, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 2, 39, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 3, 28, 0, 0, 0);

	 unit_cell->SetFace(6, 4);
	 unit_cell->SetEdgeInFace(6, 0, 91, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 90, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 2, 87, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 3, 59, 0, 0, 0);

	 unit_cell->SetFace(7, 4);
	 unit_cell->SetEdgeInFace(7, 0, 92, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 85, 0, 0, -1);
	 unit_cell->SetEdgeInFace(7, 2, 91, 0, 0, -1);
	 unit_cell->SetEdgeInFace(7, 3, 88, 0, 0, 0);

	 unit_cell->SetFace(8, 4);
	 unit_cell->SetEdgeInFace(8, 0, 51, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 59, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 20, 0, 0, 0);

	 unit_cell->SetFace(9, 4);
	 unit_cell->SetEdgeInFace(9, 0, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 77, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 2, 88, 0, 0, 1);
	 unit_cell->SetEdgeInFace(9, 3, 52, 0, 0, 0);

	 unit_cell->SetFace(10, 4);
	 unit_cell->SetEdgeInFace(10, 0, 84, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 2, 81, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 3, 75, 0, 0, 0);

	 unit_cell->SetFace(11, 4);
	 unit_cell->SetEdgeInFace(11, 0, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 18, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 2, 28, 0, -1, 0);
	 unit_cell->SetEdgeInFace(11, 3, 32, 0, 0, 0);

	 unit_cell->SetFace(12, 4);
	 unit_cell->SetEdgeInFace(12, 0, 31, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 34, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 2, 25, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 3, 33, 0, 0, 0);

	 unit_cell->SetFace(13, 4);
	 unit_cell->SetEdgeInFace(13, 0, 53, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 54, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 2, 57, 0, 0, -1);
	 unit_cell->SetEdgeInFace(13, 3, 21, 0, 0, 0);

	 unit_cell->SetFace(14, 4);
	 unit_cell->SetEdgeInFace(14, 0, 76, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 93, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 2, 89, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 3, 95, 0, 0, 0);

	 unit_cell->SetFace(15, 4);
	 unit_cell->SetEdgeInFace(15, 0, 82, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 1, 55, 0, -1, 0);
	 unit_cell->SetEdgeInFace(15, 2, 80, 0, -1, 0);
	 unit_cell->SetEdgeInFace(15, 3, 74, 0, 0, 0);

	 unit_cell->SetFace(16, 4);
	 unit_cell->SetEdgeInFace(16, 0, 64, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 2, 94, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 3, 73, 0, 0, 0);

	 unit_cell->SetFace(17, 4);
	 unit_cell->SetEdgeInFace(17, 0, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 1, 57, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 2, 54, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 3, 46, 0, 0, 0);

	 unit_cell->SetFace(18, 4);
	 unit_cell->SetEdgeInFace(18, 0, 56, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 1, 89, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 2, 93, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 3, 69, 0, 0, 0);

	 unit_cell->SetFace(19, 4);
	 unit_cell->SetEdgeInFace(19, 0, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 1, 80, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 2, 55, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 3, 36, 0, 0, 0);

	 unit_cell->SetFace(20, 4);
	 unit_cell->SetEdgeInFace(20, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 1, 43, -1, -1, 0);
	 unit_cell->SetEdgeInFace(20, 2, 84, -1, -1, 0);
	 unit_cell->SetEdgeInFace(20, 3, 8, 0, 0, 0);

	 unit_cell->SetFace(21, 4);
	 unit_cell->SetEdgeInFace(21, 0, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 1, 64, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 2, 82, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 3, 13, 0, 0, 0);

	 unit_cell->SetFace(22, 4);
	 unit_cell->SetEdgeInFace(22, 0, 59, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 1, 65, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 2, 52, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 3, 91, 0, 0, 0);

	 unit_cell->SetFace(23, 4);
	 unit_cell->SetEdgeInFace(23, 0, 81, 0, 0, 0);
	 unit_cell->SetEdgeInFace(23, 1, 29, 0, 1, 0);
	 unit_cell->SetEdgeInFace(23, 2, 32, 0, 1, 0);
	 unit_cell->SetEdgeInFace(23, 3, 39, 0, 0, 0);

	 unit_cell->SetFace(24, 4);
	 unit_cell->SetEdgeInFace(24, 0, 52, 0, 0, 0);
	 unit_cell->SetEdgeInFace(24, 1, 78, 0, 0, 0);
	 unit_cell->SetEdgeInFace(24, 2, 94, 0, 0, 0);
	 unit_cell->SetEdgeInFace(24, 3, 65, 0, 0, 0);

	 unit_cell->SetFace(25, 4);
	 unit_cell->SetEdgeInFace(25, 0, 94, 0, 0, 0);
	 unit_cell->SetEdgeInFace(25, 1, 95, 0, 0, 0);
	 unit_cell->SetEdgeInFace(25, 2, 76, 0, 0, 0);
	 unit_cell->SetEdgeInFace(25, 3, 2, 0, 0, 0);

	 unit_cell->SetFace(26, 4);
	 unit_cell->SetEdgeInFace(26, 0, 76, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 1, 93, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 2, 77, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 3, 42, 0, 0, 0);

	 unit_cell->SetFace(27, 4);
	 unit_cell->SetEdgeInFace(27, 0, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 1, 77, 0, 0, 1);
	 unit_cell->SetEdgeInFace(27, 2, 93, 0, 0, 1);
	 unit_cell->SetEdgeInFace(27, 3, 66, 0, 0, 0);

	 unit_cell->SetFace(28, 4);
	 unit_cell->SetEdgeInFace(28, 0, 78, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 1, 52, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 2, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 3, 5, 0, 0, 0);

	 unit_cell->SetFace(29, 4);
	 unit_cell->SetEdgeInFace(29, 0, 95, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 1, 94, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 2, 78, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 3, 44, 0, 0, 0);

	 unit_cell->SetFace(30, 4);
	 unit_cell->SetEdgeInFace(30, 0, 50, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 1, 36, -1, 0, 0);
	 unit_cell->SetEdgeInFace(30, 2, 44, -1, 0, 0);
	 unit_cell->SetEdgeInFace(30, 3, 37, 0, 0, 0);

	 unit_cell->SetFace(31, 4);
	 unit_cell->SetEdgeInFace(31, 0, 71, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 1, 35, 0, 0, -1);
	 unit_cell->SetEdgeInFace(31, 2, 66, 0, 0, -1);
	 unit_cell->SetEdgeInFace(31, 3, 69, 0, 0, 0);

	 unit_cell->SetFace(32, 4);
	 unit_cell->SetEdgeInFace(32, 0, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 1, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 2, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 3, 11, 0, 0, 0);

	 unit_cell->SetFace(33, 4);
	 unit_cell->SetEdgeInFace(33, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(33, 1, 13, -1, 0, 0);
	 unit_cell->SetEdgeInFace(33, 2, 2, -1, 0, 0);
	 unit_cell->SetEdgeInFace(33, 3, 12, 0, 0, 0);

	 unit_cell->SetFace(34, 4);
	 unit_cell->SetEdgeInFace(34, 0, 47, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 1, 49, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 2, 42, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 3, 38, 0, 0, 0);

	 unit_cell->SetFace(35, 4);
	 unit_cell->SetEdgeInFace(35, 0, 68, 0, 0, 0);
	 unit_cell->SetEdgeInFace(35, 1, 63, 0, 0, 0);
	 unit_cell->SetEdgeInFace(35, 2, 65, 0, 0, 0);
	 unit_cell->SetEdgeInFace(35, 3, 73, 0, 0, 0);

	 unit_cell->SetFace(36, 4);
	 unit_cell->SetEdgeInFace(36, 0, 67, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 1, 25, 0, -1, 0);
	 unit_cell->SetEdgeInFace(36, 2, 90, 0, -1, 0);
	 unit_cell->SetEdgeInFace(36, 3, 74, 0, 0, 0);

	 unit_cell->SetFace(37, 4);
	 unit_cell->SetEdgeInFace(37, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(37, 1, 42, -1, 0, 0);
	 unit_cell->SetEdgeInFace(37, 2, 49, -1, 0, 0);
	 unit_cell->SetEdgeInFace(37, 3, 60, 0, 0, 0);

	 unit_cell->SetFace(38, 4);
	 unit_cell->SetEdgeInFace(38, 0, 41, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 1, 88, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 2, 92, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 3, 75, 0, 0, 0);

	 unit_cell->SetFace(39, 4);
	 unit_cell->SetEdgeInFace(39, 0, 59, 0, 0, 0);
	 unit_cell->SetEdgeInFace(39, 1, 65, 0, 0, 0);
	 unit_cell->SetEdgeInFace(39, 2, 63, 0, 0, 0);
	 unit_cell->SetEdgeInFace(39, 3, 19, 0, 0, 0);

	 unit_cell->SetFace(40, 4);
	 unit_cell->SetEdgeInFace(40, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 1, 58, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 2, 71, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 3, 30, 0, 0, 0);

	 unit_cell->SetFace(41, 4);
	 unit_cell->SetEdgeInFace(41, 0, 25, 0, 0, 0);
	 unit_cell->SetEdgeInFace(41, 1, 67, 0, 1, 0);
	 unit_cell->SetEdgeInFace(41, 2, 68, 0, 1, 0);
	 unit_cell->SetEdgeInFace(41, 3, 34, 0, 0, 0);

	 unit_cell->SetFace(42, 4);
	 unit_cell->SetEdgeInFace(42, 0, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(42, 1, 80, 0, 0, 0);
	 unit_cell->SetEdgeInFace(42, 2, 62, 0, 0, 0);
	 unit_cell->SetEdgeInFace(42, 3, 95, 0, 0, 0);

	 unit_cell->SetFace(43, 4);
	 unit_cell->SetEdgeInFace(43, 0, 66, 0, 0, 0);
	 unit_cell->SetEdgeInFace(43, 1, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(43, 2, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(43, 3, 23, 0, 0, 0);

	 unit_cell->SetFace(44, 4);
	 unit_cell->SetEdgeInFace(44, 0, 68, 0, 0, 0);
	 unit_cell->SetEdgeInFace(44, 1, 63, 0, 0, 0);
	 unit_cell->SetEdgeInFace(44, 2, 35, 0, 0, 0);
	 unit_cell->SetEdgeInFace(44, 3, 67, 0, 0, 0);

	 unit_cell->SetFace(45, 4);
	 unit_cell->SetEdgeInFace(45, 0, 69, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 1, 72, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 2, 70, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 3, 56, 0, 0, 0);

	 unit_cell->SetFace(46, 4);
	 unit_cell->SetEdgeInFace(46, 0, 70, 0, 0, 0);
	 unit_cell->SetEdgeInFace(46, 1, 73, 0, 0, 0);
	 unit_cell->SetEdgeInFace(46, 2, 68, 0, 0, 0);
	 unit_cell->SetEdgeInFace(46, 3, 26, 0, 0, 0);

	 unit_cell->SetFace(47, 4);
	 unit_cell->SetEdgeInFace(47, 0, 71, 0, 0, 0);
	 unit_cell->SetEdgeInFace(47, 1, 35, 0, 0, -1);
	 unit_cell->SetEdgeInFace(47, 2, 63, 0, 0, -1);
	 unit_cell->SetEdgeInFace(47, 3, 58, 0, 0, 0);

	 unit_cell->SetFace(48, 4);
	 unit_cell->SetEdgeInFace(48, 0, 72, 0, 0, 0);
	 unit_cell->SetEdgeInFace(48, 1, 69, 0, 0, 0);
	 unit_cell->SetEdgeInFace(48, 2, 71, 0, 0, 0);
	 unit_cell->SetEdgeInFace(48, 3, 29, 0, 0, 0);

	 unit_cell->SetFace(49, 4);
	 unit_cell->SetEdgeInFace(49, 0, 73, 0, 0, 0);
	 unit_cell->SetEdgeInFace(49, 1, 70, 0, 0, 0);
	 unit_cell->SetEdgeInFace(49, 2, 72, 0, 0, 0);
	 unit_cell->SetEdgeInFace(49, 3, 64, 0, 0, 0);

	 unit_cell->SetFace(50, 4);
	 unit_cell->SetEdgeInFace(50, 0, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(50, 1, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(50, 2, 29, 0, 0, 0);
	 unit_cell->SetEdgeInFace(50, 3, 30, 0, 0, 0);

	 unit_cell->SetFace(51, 4);
	 unit_cell->SetEdgeInFace(51, 0, 55, 0, 0, 0);
	 unit_cell->SetEdgeInFace(51, 1, 82, 0, 1, 0);
	 unit_cell->SetEdgeInFace(51, 2, 64, 0, 1, 0);
	 unit_cell->SetEdgeInFace(51, 3, 17, 0, 0, 0);

	 unit_cell->SetFace(52, 4);
	 unit_cell->SetEdgeInFace(52, 0, 54, 0, 0, 0);
	 unit_cell->SetEdgeInFace(52, 1, 53, 0, 0, 1);
	 unit_cell->SetEdgeInFace(52, 2, 58, 0, 0, 1);
	 unit_cell->SetEdgeInFace(52, 3, 19, 0, 0, 0);

	 unit_cell->SetFace(53, 4);
	 unit_cell->SetEdgeInFace(53, 0, 60, 0, 0, 0);
	 unit_cell->SetEdgeInFace(53, 1, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(53, 2, 56, 0, 0, 0);
	 unit_cell->SetEdgeInFace(53, 3, 61, 0, 0, 0);

	 unit_cell->SetFace(54, 4);
	 unit_cell->SetEdgeInFace(54, 0, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(54, 1, 22, 0, 1, 0);
	 unit_cell->SetEdgeInFace(54, 2, 26, 0, 1, 0);
	 unit_cell->SetEdgeInFace(54, 3, 34, 0, 0, 0);

	 unit_cell->SetFace(55, 4);
	 unit_cell->SetEdgeInFace(55, 0, 83, 0, 0, 0);
	 unit_cell->SetEdgeInFace(55, 1, 74, 0, 0, 0);
	 unit_cell->SetEdgeInFace(55, 2, 67, 0, 0, 0);
	 unit_cell->SetEdgeInFace(55, 3, 79, 0, 0, 0);

	 unit_cell->SetFace(56, 4);
	 unit_cell->SetEdgeInFace(56, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(56, 1, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(56, 2, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(56, 3, 9, 0, 0, 0);

	 unit_cell->SetFace(57, 4);
	 unit_cell->SetEdgeInFace(57, 0, 45, 0, 0, 0);
	 unit_cell->SetEdgeInFace(57, 1, 5, -1, 0, 0);
	 unit_cell->SetEdgeInFace(57, 2, 78, -1, 0, 0);
	 unit_cell->SetEdgeInFace(57, 3, 37, 0, 0, 0);

	 unit_cell->SetFace(58, 4);
	 unit_cell->SetEdgeInFace(58, 0, 41, 0, 0, 0);
	 unit_cell->SetEdgeInFace(58, 1, 88, 0, 0, 0);
	 unit_cell->SetEdgeInFace(58, 2, 77, 0, 0, 0);
	 unit_cell->SetEdgeInFace(58, 3, 38, 0, 0, 0);

	 unit_cell->SetFace(59, 4);
	 unit_cell->SetEdgeInFace(59, 0, 29, 0, 0, 0);
	 unit_cell->SetEdgeInFace(59, 1, 81, 0, -1, 0);
	 unit_cell->SetEdgeInFace(59, 2, 17, 0, -1, 0);
	 unit_cell->SetEdgeInFace(59, 3, 72, 0, 0, 0);

	 unit_cell->SetFace(60, 4);
	 unit_cell->SetEdgeInFace(60, 0, 75, 0, 0, 0);
	 unit_cell->SetEdgeInFace(60, 1, 79, 0, 1, -1);
	 unit_cell->SetEdgeInFace(60, 2, 83, 0, 1, -1);
	 unit_cell->SetEdgeInFace(60, 3, 41, 0, 0, 0);

	 unit_cell->SetFace(61, 4);
	 unit_cell->SetEdgeInFace(61, 0, 83, 0, 0, 0);
	 unit_cell->SetEdgeInFace(61, 1, 74, 0, 0, 0);
	 unit_cell->SetEdgeInFace(61, 2, 82, 0, 0, 0);
	 unit_cell->SetEdgeInFace(61, 3, 3, 0, 0, 0);

	 unit_cell->SetFace(62, 4);
	 unit_cell->SetEdgeInFace(62, 0, 84, 0, 0, 0);
	 unit_cell->SetEdgeInFace(62, 1, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(62, 2, 55, 0, 0, 0);
	 unit_cell->SetEdgeInFace(62, 3, 43, 0, 0, 0);

	 unit_cell->SetFace(63, 4);
	 unit_cell->SetEdgeInFace(63, 0, 79, 0, 0, 0);
	 unit_cell->SetEdgeInFace(63, 1, 75, 0, -1, 1);
	 unit_cell->SetEdgeInFace(63, 2, 84, 0, -1, 1);
	 unit_cell->SetEdgeInFace(63, 3, 6, 0, 0, 0);

	 unit_cell->SetFace(64, 4);
	 unit_cell->SetEdgeInFace(64, 0, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(64, 1, 11, -1, 0, -1);
	 unit_cell->SetEdgeInFace(64, 2, 6, -1, 0, -1);
	 unit_cell->SetEdgeInFace(64, 3, 8, 0, 0, 0);

	 unit_cell->SetFace(65, 4);
	 unit_cell->SetEdgeInFace(65, 0, 49, 0, 0, 0);
	 unit_cell->SetEdgeInFace(65, 1, 47, 0, 0, 0);
	 unit_cell->SetEdgeInFace(65, 2, 43, 0, 0, 0);
	 unit_cell->SetEdgeInFace(65, 3, 36, 0, 0, 0);

	 unit_cell->SetFace(66, 4);
	 unit_cell->SetEdgeInFace(66, 0, 46, 0, 0, 0);
	 unit_cell->SetEdgeInFace(66, 1, 38, -1, 0, 1);
	 unit_cell->SetEdgeInFace(66, 2, 41, -1, 0, 1);
	 unit_cell->SetEdgeInFace(66, 3, 48, 0, 0, 0);

	 unit_cell->SetFace(67, 4);
	 unit_cell->SetEdgeInFace(67, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(67, 1, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(67, 2, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(67, 3, 13, 0, 0, 0);

	 unit_cell->SetFace(68, 4);
	 unit_cell->SetEdgeInFace(68, 0, 27, 0, 0, 0);
	 unit_cell->SetEdgeInFace(68, 1, 3, -1, 1, 0);
	 unit_cell->SetEdgeInFace(68, 2, 14, -1, 1, 0);
	 unit_cell->SetEdgeInFace(68, 3, 31, 0, 0, 0);

	 unit_cell->SetFace(69, 4);
	 unit_cell->SetEdgeInFace(69, 0, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(69, 1, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(69, 2, 87, 0, 0, 0);
	 unit_cell->SetEdgeInFace(69, 3, 20, 0, 0, 0);

	 unit_cell->SetFace(70, 4);
	 unit_cell->SetEdgeInFace(70, 0, 56, 0, 0, 0);
	 unit_cell->SetEdgeInFace(70, 1, 89, 0, 0, 0);
	 unit_cell->SetEdgeInFace(70, 2, 86, 0, 0, 0);
	 unit_cell->SetEdgeInFace(70, 3, 21, 0, 0, 0);

	 unit_cell->SetFace(71, 4);
	 unit_cell->SetEdgeInFace(71, 0, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(71, 1, 66, 0, 0, 0);
	 unit_cell->SetEdgeInFace(71, 2, 35, 0, 0, 0);
	 unit_cell->SetEdgeInFace(71, 3, 79, 0, 0, 0);

	 unit_cell->SetFace(72, 4);
	 unit_cell->SetEdgeInFace(72, 0, 37, 0, 0, 0);
	 unit_cell->SetEdgeInFace(72, 1, 48, 0, 0, 0);
	 unit_cell->SetEdgeInFace(72, 2, 46, 0, 0, 0);
	 unit_cell->SetEdgeInFace(72, 3, 45, 0, 0, 0);

	 unit_cell->SetFace(73, 4);
	 unit_cell->SetEdgeInFace(73, 0, 46, 0, 0, 0);
	 unit_cell->SetEdgeInFace(73, 1, 38, -1, 0, 1);
	 unit_cell->SetEdgeInFace(73, 2, 47, -1, 0, 1);
	 unit_cell->SetEdgeInFace(73, 3, 24, 0, 0, 0);

	 unit_cell->SetFace(74, 4);
	 unit_cell->SetEdgeInFace(74, 0, 48, 0, 0, 0);
	 unit_cell->SetEdgeInFace(74, 1, 37, 0, 0, 0);
	 unit_cell->SetEdgeInFace(74, 2, 50, 0, 0, 0);
	 unit_cell->SetEdgeInFace(74, 3, 27, 0, 0, 0);

	 unit_cell->SetFace(75, 4);
	 unit_cell->SetEdgeInFace(75, 0, 50, 0, 0, 0);
	 unit_cell->SetEdgeInFace(75, 1, 36, -1, 0, 0);
	 unit_cell->SetEdgeInFace(75, 2, 49, -1, 0, 0);
	 unit_cell->SetEdgeInFace(75, 3, 40, 0, 0, 0);

	 unit_cell->SetFace(76, 4);
	 unit_cell->SetEdgeInFace(76, 0, 61, 0, 0, 0);
	 unit_cell->SetEdgeInFace(76, 1, 20, 0, 0, 0);
	 unit_cell->SetEdgeInFace(76, 2, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(76, 3, 60, 0, 0, 0);

	 unit_cell->SetFace(77, 4);
	 unit_cell->SetEdgeInFace(77, 0, 34, 0, 0, 0);
	 unit_cell->SetEdgeInFace(77, 1, 31, 0, 0, 0);
	 unit_cell->SetEdgeInFace(77, 2, 27, 0, 0, 0);
	 unit_cell->SetEdgeInFace(77, 3, 18, 0, 0, 0);

	 unit_cell->SetFace(78, 4);
	 unit_cell->SetEdgeInFace(78, 0, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(78, 1, 51, 0, 0, 0);
	 unit_cell->SetEdgeInFace(78, 2, 45, 0, 0, 0);
	 unit_cell->SetEdgeInFace(78, 3, 54, 0, 0, 0);

	 unit_cell->SetFace(79, 4);
	 unit_cell->SetEdgeInFace(79, 0, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(79, 1, 33, 0, -1, -1);
	 unit_cell->SetEdgeInFace(79, 2, 24, 0, -1, -1);
	 unit_cell->SetEdgeInFace(79, 3, 16, 0, 0, 0);

	 unit_cell->SetFace(80, 4);
	 unit_cell->SetEdgeInFace(80, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(80, 1, 58, 0, 0, 0);
	 unit_cell->SetEdgeInFace(80, 2, 53, 0, 0, 0);
	 unit_cell->SetEdgeInFace(80, 3, 15, 0, 0, 0);

	 unit_cell->SetFace(81, 4);
	 unit_cell->SetEdgeInFace(81, 0, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(81, 1, 45, 1, 0, 0);
	 unit_cell->SetEdgeInFace(81, 2, 51, 1, 0, 0);
	 unit_cell->SetEdgeInFace(81, 3, 10, 0, 0, 0);

	 unit_cell->SetFace(82, 4);
	 unit_cell->SetEdgeInFace(82, 0, 57, 0, 0, 0);
	 unit_cell->SetEdgeInFace(82, 1, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(82, 2, 33, 0, 0, 0);
	 unit_cell->SetEdgeInFace(82, 3, 85, 0, 0, 0);

	 unit_cell->SetFace(83, 4);
	 unit_cell->SetEdgeInFace(83, 0, 27, 0, 0, 0);
	 unit_cell->SetEdgeInFace(83, 1, 3, -1, 1, 0);
	 unit_cell->SetEdgeInFace(83, 2, 83, -1, 1, 0);
	 unit_cell->SetEdgeInFace(83, 3, 48, 0, 0, 0);

	 unit_cell->SetFace(84, 4);
	 unit_cell->SetEdgeInFace(84, 0, 60, 0, 0, 0);
	 unit_cell->SetEdgeInFace(84, 1, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(84, 2, 53, 0, 0, 0);
	 unit_cell->SetEdgeInFace(84, 3, 1, 0, 0, 0);

	 unit_cell->SetFace(85, 4);
	 unit_cell->SetEdgeInFace(85, 0, 61, 0, 0, 0);
	 unit_cell->SetEdgeInFace(85, 1, 20, 0, 0, 0);
	 unit_cell->SetEdgeInFace(85, 2, 51, 0, 0, 0);
	 unit_cell->SetEdgeInFace(85, 3, 4, 0, 0, 0);

	 unit_cell->SetFace(86, 4);
	 unit_cell->SetEdgeInFace(86, 0, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(86, 1, 9, 1, 0, 0);
	 unit_cell->SetEdgeInFace(86, 2, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(86, 3, 10, 0, 0, 0);

	 unit_cell->SetFace(87, 4);
	 unit_cell->SetEdgeInFace(87, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(87, 1, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(87, 2, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(87, 3, 15, 0, 0, 0);

	 unit_cell->SetFace(88, 4);
	 unit_cell->SetEdgeInFace(88, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(88, 1, 43, -1, -1, 0);
	 unit_cell->SetEdgeInFace(88, 2, 47, -1, -1, 0);
	 unit_cell->SetEdgeInFace(88, 3, 16, 0, 0, 0);

	 unit_cell->SetFace(89, 4);
	 unit_cell->SetEdgeInFace(89, 0, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(89, 1, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(89, 2, 50, 0, 0, 0);
	 unit_cell->SetEdgeInFace(89, 3, 18, 0, 0, 0);

	 unit_cell->SetFace(90, 4);
	 unit_cell->SetEdgeInFace(90, 0, 42, 0, 0, 0);
	 unit_cell->SetEdgeInFace(90, 1, 1, 1, 0, 0);
	 unit_cell->SetEdgeInFace(90, 2, 12, 1, 0, 0);
	 unit_cell->SetEdgeInFace(90, 3, 76, 0, 0, 0);

	 unit_cell->SetFace(91, 4);
	 unit_cell->SetEdgeInFace(91, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(91, 1, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(91, 2, 70, 0, 0, 0);
	 unit_cell->SetEdgeInFace(91, 3, 61, 0, 0, 0);

	 unit_cell->SetFace(92, 4);
	 unit_cell->SetEdgeInFace(92, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(92, 1, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(92, 2, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(92, 3, 7, 0, 0, 0);

	 unit_cell->SetFace(93, 4);
	 unit_cell->SetEdgeInFace(93, 0, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(93, 1, 11, -1, 0, -1);
	 unit_cell->SetEdgeInFace(93, 2, 14, -1, 0, -1);
	 unit_cell->SetEdgeInFace(93, 3, 0, 0, 0, 0);

	 unit_cell->SetFace(94, 4);
	 unit_cell->SetEdgeInFace(94, 0, 33, 0, 0, 0);
	 unit_cell->SetEdgeInFace(94, 1, 30, 0, 1, 1);
	 unit_cell->SetEdgeInFace(94, 2, 0, 0, 1, 1);
	 unit_cell->SetEdgeInFace(94, 3, 31, 0, 0, 0);

	 unit_cell->SetFace(95, 4);
	 unit_cell->SetEdgeInFace(95, 0, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(95, 1, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(95, 2, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(95, 3, 22, 0, 0, 0);

	 return unit_cell;
}
