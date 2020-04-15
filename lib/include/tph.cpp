#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("tph", 28, 96, 96);

	 // vertex 0 located at (0.16667, 0.16667, 0.16667)
	 // vertex 1 located at (0.41667, 0.58333, 0.08332999999999999)
	 // vertex 2 located at (0.83333, 0.33333, 0.16667)
	 // vertex 3 located at (0.58333, 0.91667, 0.08332999999999999)
	 // vertex 4 located at (0.16667, 0.83333, 0.33333)
	 // vertex 5 located at (0.08332999999999999, 0.58333, 0.91667)
	 // vertex 6 located at (0.83333, 0.66667, 0.33333)
	 // vertex 7 located at (0.91667, 0.91667, 0.91667)
	 // vertex 8 located at (0.41667, 0.41667, 0.41667)
	 // vertex 9 located at (0.33333, 0.83333, 0.66667)
	 // vertex 10 located at (0.08332999999999999, 0.41667, 0.58333)
	 // vertex 11 located at (0.91667, 0.08332999999999999, 0.58333)
	 // vertex 12 located at (0.66667, 0.66667, 0.66667)
	 // vertex 13 located at (0.66667, 0.33333, 0.83333)
	 // vertex 14 located at (0.58333, 0.0833299999999999, 0.4166700000000001)
	 // vertex 15 located at (0.33333, 0.1666700000000001, 0.83333)
	 // vertex 16 located at (0.0, 0.25, 0.875)
	 // vertex 17 located at (0.5, 0.75, 0.375)
	 // vertex 18 located at (0.0, 0.75, 0.625)
	 // vertex 19 located at (0.875, 0.0, 0.25)
	 // vertex 20 located at (0.25, 0.875, 0.0)
	 // vertex 21 located at (0.125, 0.5, 0.25)
	 // vertex 22 located at (0.75, 0.625, 0.0)
	 // vertex 23 located at (0.25, 0.125, 0.5)
	 // vertex 24 located at (0.375, 0.5, 0.75)
	 // vertex 25 located at (0.75, 0.375, 0.5)
	 // vertex 26 located at (0.625, 0.0, 0.75)
	 // vertex 27 located at (0.5, 0.25, 0.125)

	 unit_cell->SetEdge(0, 16, 10, 0, 0, 0);
	 unit_cell->SetEdge(1, 17, 12, 0, 0, 0);
	 unit_cell->SetEdge(2, 16, 11, -1, 0, 0);
	 unit_cell->SetEdge(3, 17, 9, 0, 0, 0);
	 unit_cell->SetEdge(4, 18, 5, 0, 0, 0);
	 unit_cell->SetEdge(5, 18, 6, -1, 0, 0);
	 unit_cell->SetEdge(6, 18, 7, -1, 0, 0);
	 unit_cell->SetEdge(7, 18, 4, 0, 0, 0);
	 unit_cell->SetEdge(8, 19, 14, 0, 0, 0);
	 unit_cell->SetEdge(9, 20, 15, 0, 1, -1);
	 unit_cell->SetEdge(10, 21, 8, 0, 0, 0);
	 unit_cell->SetEdge(11, 22, 13, 0, 0, -1);
	 unit_cell->SetEdge(12, 19, 3, 0, -1, 0);
	 unit_cell->SetEdge(13, 20, 0, 0, 1, 0);
	 unit_cell->SetEdge(14, 21, 1, 0, 0, 0);
	 unit_cell->SetEdge(15, 22, 2, 0, 0, 0);
	 unit_cell->SetEdge(16, 20, 1, 0, 0, 0);
	 unit_cell->SetEdge(17, 23, 8, 0, 0, 0);
	 unit_cell->SetEdge(18, 24, 13, 0, 0, 0);
	 unit_cell->SetEdge(19, 25, 14, 0, 0, 0);
	 unit_cell->SetEdge(20, 21, 6, -1, 0, 0);
	 unit_cell->SetEdge(21, 23, 10, 0, 0, 0);
	 unit_cell->SetEdge(22, 24, 12, 0, 0, 0);
	 unit_cell->SetEdge(23, 26, 9, 0, -1, 0);
	 unit_cell->SetEdge(24, 17, 3, 0, 0, 0);
	 unit_cell->SetEdge(25, 16, 0, 0, 0, 1);
	 unit_cell->SetEdge(26, 17, 1, 0, 0, 0);
	 unit_cell->SetEdge(27, 16, 2, -1, 0, 1);
	 unit_cell->SetEdge(28, 27, 14, 0, 0, 0);
	 unit_cell->SetEdge(29, 27, 15, 0, 0, -1);
	 unit_cell->SetEdge(30, 27, 8, 0, 0, 0);
	 unit_cell->SetEdge(31, 27, 13, 0, 0, -1);
	 unit_cell->SetEdge(32, 24, 5, 0, 0, 0);
	 unit_cell->SetEdge(33, 25, 6, 0, 0, 0);
	 unit_cell->SetEdge(34, 26, 7, 0, -1, 0);
	 unit_cell->SetEdge(35, 23, 4, 0, -1, 0);
	 unit_cell->SetEdge(36, 24, 10, 0, 0, 0);
	 unit_cell->SetEdge(37, 25, 12, 0, 0, 0);
	 unit_cell->SetEdge(38, 26, 11, 0, 0, 0);
	 unit_cell->SetEdge(39, 23, 9, 0, -1, 0);
	 unit_cell->SetEdge(40, 25, 11, 0, 0, 0);
	 unit_cell->SetEdge(41, 22, 7, 0, 0, -1);
	 unit_cell->SetEdge(42, 19, 4, 1, -1, 0);
	 unit_cell->SetEdge(43, 20, 5, 0, 0, -1);
	 unit_cell->SetEdge(44, 26, 15, 0, 0, 0);
	 unit_cell->SetEdge(45, 22, 3, 0, 0, 0);
	 unit_cell->SetEdge(46, 19, 0, 1, 0, 0);
	 unit_cell->SetEdge(47, 21, 2, -1, 0, 0);
	 unit_cell->SetEdge(48, 16, 15, 0, 0, 0);
	 unit_cell->SetEdge(49, 17, 8, 0, 0, 0);
	 unit_cell->SetEdge(50, 16, 13, -1, 0, 0);
	 unit_cell->SetEdge(51, 17, 14, 0, 1, 0);
	 unit_cell->SetEdge(52, 18, 9, 0, 0, 0);
	 unit_cell->SetEdge(53, 18, 10, 0, 0, 0);
	 unit_cell->SetEdge(54, 18, 12, -1, 0, 0);
	 unit_cell->SetEdge(55, 18, 11, -1, 1, 0);
	 unit_cell->SetEdge(56, 19, 2, 0, 0, 0);
	 unit_cell->SetEdge(57, 20, 3, 0, 0, 0);
	 unit_cell->SetEdge(58, 21, 0, 0, 0, 0);
	 unit_cell->SetEdge(59, 22, 1, 0, 0, 0);
	 unit_cell->SetEdge(60, 19, 6, 0, -1, 0);
	 unit_cell->SetEdge(61, 20, 7, -1, 0, -1);
	 unit_cell->SetEdge(62, 21, 4, 0, 0, 0);
	 unit_cell->SetEdge(63, 22, 5, 1, 0, -1);
	 unit_cell->SetEdge(64, 20, 4, 0, 0, 0);
	 unit_cell->SetEdge(65, 23, 0, 0, 0, 0);
	 unit_cell->SetEdge(66, 24, 1, 0, 0, 1);
	 unit_cell->SetEdge(67, 25, 2, 0, 0, 0);
	 unit_cell->SetEdge(68, 21, 10, 0, 0, 0);
	 unit_cell->SetEdge(69, 23, 15, 0, 0, 0);
	 unit_cell->SetEdge(70, 24, 8, 0, 0, 0);
	 unit_cell->SetEdge(71, 26, 14, 0, 0, 0);
	 unit_cell->SetEdge(72, 17, 6, 0, 0, 0);
	 unit_cell->SetEdge(73, 16, 7, -1, -1, 0);
	 unit_cell->SetEdge(74, 17, 4, 0, 0, 0);
	 unit_cell->SetEdge(75, 16, 5, 0, 0, 0);
	 unit_cell->SetEdge(76, 27, 2, 0, 0, 0);
	 unit_cell->SetEdge(77, 27, 3, 0, -1, 0);
	 unit_cell->SetEdge(78, 27, 0, 0, 0, 0);
	 unit_cell->SetEdge(79, 27, 1, 0, 0, 0);
	 unit_cell->SetEdge(80, 24, 9, 0, 0, 0);
	 unit_cell->SetEdge(81, 25, 10, 1, 0, 0);
	 unit_cell->SetEdge(82, 26, 12, 0, -1, 0);
	 unit_cell->SetEdge(83, 23, 11, -1, 0, 0);
	 unit_cell->SetEdge(84, 24, 15, 0, 0, 0);
	 unit_cell->SetEdge(85, 25, 8, 0, 0, 0);
	 unit_cell->SetEdge(86, 26, 13, 0, 0, 0);
	 unit_cell->SetEdge(87, 23, 14, 0, 0, 0);
	 unit_cell->SetEdge(88, 25, 13, 0, 0, 0);
	 unit_cell->SetEdge(89, 22, 12, 0, 0, -1);
	 unit_cell->SetEdge(90, 19, 11, 0, 0, 0);
	 unit_cell->SetEdge(91, 20, 9, 0, 0, -1);
	 unit_cell->SetEdge(92, 26, 3, 0, -1, 1);
	 unit_cell->SetEdge(93, 22, 6, 0, 0, 0);
	 unit_cell->SetEdge(94, 19, 7, 0, -1, -1);
	 unit_cell->SetEdge(95, 21, 5, 0, 0, -1);

	 unit_cell->SetFace(0, 4);
	 unit_cell->SetEdgeInFace(0, 0, 81, -1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 67, -1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 47, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 3, 68, 0, 0, 0);

	 unit_cell->SetFace(1, 4);
	 unit_cell->SetEdgeInFace(1, 0, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 2, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 3, 68, 0, 0, 0);

	 unit_cell->SetFace(2, 4);
	 unit_cell->SetEdgeInFace(2, 0, 82, 0, 1, 0);
	 unit_cell->SetEdgeInFace(2, 1, 92, 0, 1, 0);
	 unit_cell->SetEdgeInFace(2, 2, 45, 0, 0, 1);
	 unit_cell->SetEdgeInFace(2, 3, 89, 0, 0, 1);

	 unit_cell->SetFace(3, 4);
	 unit_cell->SetEdgeInFace(3, 0, 83, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 65, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 46, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 3, 90, 0, 0, 0);

	 unit_cell->SetFace(4, 4);
	 unit_cell->SetEdgeInFace(4, 0, 80, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 66, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 16, 0, 0, 1);
	 unit_cell->SetEdgeInFace(4, 3, 91, 0, 0, 1);

	 unit_cell->SetFace(5, 4);
	 unit_cell->SetEdgeInFace(5, 0, 63, -1, 0, 1);
	 unit_cell->SetEdgeInFace(5, 1, 93, -1, 0, 1);
	 unit_cell->SetEdgeInFace(5, 2, 20, 0, 0, 1);
	 unit_cell->SetEdgeInFace(5, 3, 95, 0, 0, 1);

	 unit_cell->SetFace(6, 4);
	 unit_cell->SetEdgeInFace(6, 0, 60, 0, 1, 0);
	 unit_cell->SetEdgeInFace(6, 1, 94, 0, 1, 0);
	 unit_cell->SetEdgeInFace(6, 2, 41, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 3, 93, 0, 0, 0);

	 unit_cell->SetFace(7, 4);
	 unit_cell->SetEdgeInFace(7, 0, 61, 1, 0, 1);
	 unit_cell->SetEdgeInFace(7, 1, 64, 1, 0, 1);
	 unit_cell->SetEdgeInFace(7, 2, 42, 0, 1, 1);
	 unit_cell->SetEdgeInFace(7, 3, 94, 0, 1, 1);

	 unit_cell->SetFace(8, 4);
	 unit_cell->SetEdgeInFace(8, 0, 62, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 95, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 43, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 3, 64, 0, 0, 0);

	 unit_cell->SetFace(9, 4);
	 unit_cell->SetEdgeInFace(9, 0, 51, 0, -1, 0);
	 unit_cell->SetEdgeInFace(9, 1, 74, 0, -1, 0);
	 unit_cell->SetEdgeInFace(9, 2, 35, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 3, 87, 0, 0, 0);

	 unit_cell->SetFace(10, 4);
	 unit_cell->SetEdgeInFace(10, 0, 48, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 75, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 2, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 3, 84, 0, 0, 0);

	 unit_cell->SetFace(11, 4);
	 unit_cell->SetEdgeInFace(11, 0, 49, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 72, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 33, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 3, 85, 0, 0, 0);

	 unit_cell->SetFace(12, 4);
	 unit_cell->SetEdgeInFace(12, 0, 50, 1, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 73, 1, 0, 0);
	 unit_cell->SetEdgeInFace(12, 2, 34, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 3, 86, 0, 0, 0);

	 unit_cell->SetFace(13, 4);
	 unit_cell->SetEdgeInFace(13, 0, 77, 0, 1, 0);
	 unit_cell->SetEdgeInFace(13, 1, 78, 0, 1, 0);
	 unit_cell->SetEdgeInFace(13, 2, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 3, 57, 0, 0, 0);

	 unit_cell->SetFace(14, 4);
	 unit_cell->SetEdgeInFace(14, 0, 78, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 79, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 2, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 3, 58, 0, 0, 0);

	 unit_cell->SetFace(15, 4);
	 unit_cell->SetEdgeInFace(15, 0, 79, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 1, 76, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 2, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 3, 59, 0, 0, 0);

	 unit_cell->SetFace(16, 4);
	 unit_cell->SetEdgeInFace(16, 0, 76, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 1, 77, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 2, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 3, 56, 0, 0, 0);

	 unit_cell->SetFace(17, 4);
	 unit_cell->SetEdgeInFace(17, 0, 66, 0, 0, -1);
	 unit_cell->SetEdgeInFace(17, 1, 84, 0, 0, -1);
	 unit_cell->SetEdgeInFace(17, 2, 29, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 3, 79, 0, 0, 0);

	 unit_cell->SetFace(18, 4);
	 unit_cell->SetEdgeInFace(18, 0, 70, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 1, 80, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 2, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 3, 49, 0, 0, 0);

	 unit_cell->SetFace(19, 4);
	 unit_cell->SetEdgeInFace(19, 0, 88, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 1, 81, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 2, 0, 1, 0, 0);
	 unit_cell->SetEdgeInFace(19, 3, 50, 1, 0, 0);

	 unit_cell->SetFace(20, 4);
	 unit_cell->SetEdgeInFace(20, 0, 71, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 1, 82, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 2, 1, 0, -1, 0);
	 unit_cell->SetEdgeInFace(20, 3, 51, 0, -1, 0);

	 unit_cell->SetFace(21, 4);
	 unit_cell->SetEdgeInFace(21, 0, 93, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 1, 59, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 2, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 3, 72, 0, 0, 0);

	 unit_cell->SetFace(22, 4);
	 unit_cell->SetEdgeInFace(22, 0, 68, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 1, 62, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 2, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 3, 53, 0, 0, 0);

	 unit_cell->SetFace(23, 4);
	 unit_cell->SetEdgeInFace(23, 0, 89, 0, 0, 1);
	 unit_cell->SetEdgeInFace(23, 1, 63, 0, 0, 1);
	 unit_cell->SetEdgeInFace(23, 2, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(23, 3, 54, 1, 0, 0);

	 unit_cell->SetFace(24, 4);
	 unit_cell->SetEdgeInFace(24, 0, 91, 0, 0, 1);
	 unit_cell->SetEdgeInFace(24, 1, 61, 0, 0, 1);
	 unit_cell->SetEdgeInFace(24, 2, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(24, 3, 52, 0, 0, 0);

	 unit_cell->SetFace(25, 4);
	 unit_cell->SetEdgeInFace(25, 0, 57, 0, 0, 0);
	 unit_cell->SetEdgeInFace(25, 1, 91, 0, 0, 0);
	 unit_cell->SetEdgeInFace(25, 2, 23, 0, 1, -1);
	 unit_cell->SetEdgeInFace(25, 3, 92, 0, 1, -1);

	 unit_cell->SetFace(26, 4);
	 unit_cell->SetEdgeInFace(26, 0, 58, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 1, 68, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 2, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 3, 65, 0, 0, 0);

	 unit_cell->SetFace(27, 4);
	 unit_cell->SetEdgeInFace(27, 0, 59, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 1, 89, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 2, 22, 0, 0, -1);
	 unit_cell->SetEdgeInFace(27, 3, 66, 0, 0, -1);

	 unit_cell->SetFace(28, 4);
	 unit_cell->SetEdgeInFace(28, 0, 56, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 1, 90, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 2, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 3, 67, 0, 0, 0);

	 unit_cell->SetFace(29, 4);
	 unit_cell->SetEdgeInFace(29, 0, 87, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 1, 69, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 2, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 3, 71, 0, 0, 0);

	 unit_cell->SetFace(30, 4);
	 unit_cell->SetEdgeInFace(30, 0, 84, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 1, 70, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 2, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 3, 69, 0, 0, 0);

	 unit_cell->SetFace(31, 4);
	 unit_cell->SetEdgeInFace(31, 0, 85, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 1, 88, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 2, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 3, 70, 0, 0, 0);

	 unit_cell->SetFace(32, 4);
	 unit_cell->SetEdgeInFace(32, 0, 86, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 1, 71, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 2, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 3, 88, 0, 0, 0);

	 unit_cell->SetFace(33, 4);
	 unit_cell->SetEdgeInFace(33, 0, 75, 0, 0, 0);
	 unit_cell->SetEdgeInFace(33, 1, 50, 0, 0, 0);
	 unit_cell->SetEdgeInFace(33, 2, 11, -1, 0, 1);
	 unit_cell->SetEdgeInFace(33, 3, 63, -1, 0, 1);

	 unit_cell->SetFace(34, 4);
	 unit_cell->SetEdgeInFace(34, 0, 72, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 1, 51, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 2, 8, 0, 1, 0);
	 unit_cell->SetEdgeInFace(34, 3, 60, 0, 1, 0);

	 unit_cell->SetFace(35, 4);
	 unit_cell->SetEdgeInFace(35, 0, 73, 1, 1, 0);
	 unit_cell->SetEdgeInFace(35, 1, 48, 1, 1, 0);
	 unit_cell->SetEdgeInFace(35, 2, 9, 1, 0, 1);
	 unit_cell->SetEdgeInFace(35, 3, 61, 1, 0, 1);

	 unit_cell->SetFace(36, 4);
	 unit_cell->SetEdgeInFace(36, 0, 74, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 1, 49, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 2, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 3, 62, 0, 0, 0);

	 unit_cell->SetFace(37, 4);
	 unit_cell->SetEdgeInFace(37, 0, 53, 0, 0, 0);
	 unit_cell->SetEdgeInFace(37, 1, 54, 0, 0, 0);
	 unit_cell->SetEdgeInFace(37, 2, 37, -1, 0, 0);
	 unit_cell->SetEdgeInFace(37, 3, 81, -1, 0, 0);

	 unit_cell->SetFace(38, 4);
	 unit_cell->SetEdgeInFace(38, 0, 54, 1, 0, 0);
	 unit_cell->SetEdgeInFace(38, 1, 55, 1, 0, 0);
	 unit_cell->SetEdgeInFace(38, 2, 38, 0, 1, 0);
	 unit_cell->SetEdgeInFace(38, 3, 82, 0, 1, 0);

	 unit_cell->SetFace(39, 4);
	 unit_cell->SetEdgeInFace(39, 0, 55, 1, -1, 0);
	 unit_cell->SetEdgeInFace(39, 1, 52, 1, -1, 0);
	 unit_cell->SetEdgeInFace(39, 2, 39, 1, 0, 0);
	 unit_cell->SetEdgeInFace(39, 3, 83, 1, 0, 0);

	 unit_cell->SetFace(40, 4);
	 unit_cell->SetEdgeInFace(40, 0, 52, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 1, 53, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 2, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 3, 80, 0, 0, 0);

	 unit_cell->SetFace(41, 4);
	 unit_cell->SetEdgeInFace(41, 0, 90, 0, 0, 0);
	 unit_cell->SetEdgeInFace(41, 1, 60, 0, 0, 0);
	 unit_cell->SetEdgeInFace(41, 2, 5, 1, -1, 0);
	 unit_cell->SetEdgeInFace(41, 3, 55, 1, -1, 0);

	 unit_cell->SetFace(42, 4);
	 unit_cell->SetEdgeInFace(42, 0, 94, 0, 1, 1);
	 unit_cell->SetEdgeInFace(42, 1, 56, 0, 1, 1);
	 unit_cell->SetEdgeInFace(42, 2, 27, 1, 1, 0);
	 unit_cell->SetEdgeInFace(42, 3, 73, 1, 1, 0);

	 unit_cell->SetFace(43, 4);
	 unit_cell->SetEdgeInFace(43, 0, 64, 0, 0, 0);
	 unit_cell->SetEdgeInFace(43, 1, 57, 0, 0, 0);
	 unit_cell->SetEdgeInFace(43, 2, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(43, 3, 74, 0, 0, 0);

	 unit_cell->SetFace(44, 4);
	 unit_cell->SetEdgeInFace(44, 0, 95, 0, 0, 1);
	 unit_cell->SetEdgeInFace(44, 1, 58, 0, 0, 1);
	 unit_cell->SetEdgeInFace(44, 2, 25, 0, 0, 0);
	 unit_cell->SetEdgeInFace(44, 3, 75, 0, 0, 0);

	 unit_cell->SetFace(45, 4);
	 unit_cell->SetEdgeInFace(45, 0, 69, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 1, 83, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 2, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 3, 48, 0, 0, 0);

	 unit_cell->SetFace(46, 4);
	 unit_cell->SetEdgeInFace(46, 0, 92, 0, 1, -1);
	 unit_cell->SetEdgeInFace(46, 1, 86, 0, 1, -1);
	 unit_cell->SetEdgeInFace(46, 2, 31, 0, 1, 0);
	 unit_cell->SetEdgeInFace(46, 3, 77, 0, 1, 0);

	 unit_cell->SetFace(47, 4);
	 unit_cell->SetEdgeInFace(47, 0, 65, 0, 0, 0);
	 unit_cell->SetEdgeInFace(47, 1, 87, 0, 0, 0);
	 unit_cell->SetEdgeInFace(47, 2, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(47, 3, 78, 0, 0, 0);

	 unit_cell->SetFace(48, 4);
	 unit_cell->SetEdgeInFace(48, 0, 67, 0, 0, 0);
	 unit_cell->SetEdgeInFace(48, 1, 85, 0, 0, 0);
	 unit_cell->SetEdgeInFace(48, 2, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(48, 3, 76, 0, 0, 0);

	 unit_cell->SetFace(49, 4);
	 unit_cell->SetEdgeInFace(49, 0, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(49, 1, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(49, 2, 11, 0, 0, 1);
	 unit_cell->SetEdgeInFace(49, 3, 89, 0, 0, 1);

	 unit_cell->SetFace(50, 4);
	 unit_cell->SetEdgeInFace(50, 0, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(50, 1, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(50, 2, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(50, 3, 90, 0, 0, 0);

	 unit_cell->SetFace(51, 4);
	 unit_cell->SetEdgeInFace(51, 0, 23, 0, 1, 0);
	 unit_cell->SetEdgeInFace(51, 1, 44, 0, 1, 0);
	 unit_cell->SetEdgeInFace(51, 2, 9, 0, 0, 1);
	 unit_cell->SetEdgeInFace(51, 3, 91, 0, 0, 1);

	 unit_cell->SetFace(52, 4);
	 unit_cell->SetEdgeInFace(52, 0, 43, 0, 0, 1);
	 unit_cell->SetEdgeInFace(52, 1, 16, 0, 0, 1);
	 unit_cell->SetEdgeInFace(52, 2, 14, 0, 0, 1);
	 unit_cell->SetEdgeInFace(52, 3, 95, 0, 0, 1);

	 unit_cell->SetFace(53, 4);
	 unit_cell->SetEdgeInFace(53, 0, 20, 1, 0, 0);
	 unit_cell->SetEdgeInFace(53, 1, 47, 1, 0, 0);
	 unit_cell->SetEdgeInFace(53, 2, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(53, 3, 93, 0, 0, 0);

	 unit_cell->SetFace(54, 4);
	 unit_cell->SetEdgeInFace(54, 0, 41, 0, 0, 1);
	 unit_cell->SetEdgeInFace(54, 1, 45, 0, 0, 1);
	 unit_cell->SetEdgeInFace(54, 2, 12, 0, 1, 1);
	 unit_cell->SetEdgeInFace(54, 3, 94, 0, 1, 1);

	 unit_cell->SetFace(55, 4);
	 unit_cell->SetEdgeInFace(55, 0, 42, -1, 1, 0);
	 unit_cell->SetEdgeInFace(55, 1, 46, -1, 1, 0);
	 unit_cell->SetEdgeInFace(55, 2, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(55, 3, 64, 0, 0, 0);

	 unit_cell->SetFace(56, 4);
	 unit_cell->SetEdgeInFace(56, 0, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(56, 1, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(56, 2, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(56, 3, 87, 0, 0, 0);

	 unit_cell->SetFace(57, 4);
	 unit_cell->SetEdgeInFace(57, 0, 29, 0, 0, 1);
	 unit_cell->SetEdgeInFace(57, 1, 31, 0, 0, 1);
	 unit_cell->SetEdgeInFace(57, 2, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(57, 3, 84, 0, 0, 0);

	 unit_cell->SetFace(58, 4);
	 unit_cell->SetEdgeInFace(58, 0, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(58, 1, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(58, 2, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(58, 3, 85, 0, 0, 0);

	 unit_cell->SetFace(59, 4);
	 unit_cell->SetEdgeInFace(59, 0, 31, 0, 0, 1);
	 unit_cell->SetEdgeInFace(59, 1, 29, 0, 0, 1);
	 unit_cell->SetEdgeInFace(59, 2, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(59, 3, 86, 0, 0, 0);

	 unit_cell->SetFace(60, 4);
	 unit_cell->SetEdgeInFace(60, 0, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(60, 1, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(60, 2, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(60, 3, 57, 0, 0, 0);

	 unit_cell->SetFace(61, 4);
	 unit_cell->SetEdgeInFace(61, 0, 25, 0, 0, -1);
	 unit_cell->SetEdgeInFace(61, 1, 27, 0, 0, -1);
	 unit_cell->SetEdgeInFace(61, 2, 47, 0, 0, 0);
	 unit_cell->SetEdgeInFace(61, 3, 58, 0, 0, 0);

	 unit_cell->SetFace(62, 4);
	 unit_cell->SetEdgeInFace(62, 0, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(62, 1, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(62, 2, 45, 0, 0, 0);
	 unit_cell->SetEdgeInFace(62, 3, 59, 0, 0, 0);

	 unit_cell->SetFace(63, 4);
	 unit_cell->SetEdgeInFace(63, 0, 27, 1, 0, -1);
	 unit_cell->SetEdgeInFace(63, 1, 25, 1, 0, -1);
	 unit_cell->SetEdgeInFace(63, 2, 46, 0, 0, 0);
	 unit_cell->SetEdgeInFace(63, 3, 56, 0, 0, 0);

	 unit_cell->SetFace(64, 4);
	 unit_cell->SetEdgeInFace(64, 0, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(64, 1, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(64, 2, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(64, 3, 79, 0, 0, 0);

	 unit_cell->SetFace(65, 4);
	 unit_cell->SetEdgeInFace(65, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(65, 1, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(65, 2, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(65, 3, 49, 0, 0, 0);

	 unit_cell->SetFace(66, 4);
	 unit_cell->SetEdgeInFace(66, 0, 11, 0, 0, 1);
	 unit_cell->SetEdgeInFace(66, 1, 15, 0, 0, 1);
	 unit_cell->SetEdgeInFace(66, 2, 27, 1, 0, 0);
	 unit_cell->SetEdgeInFace(66, 3, 50, 1, 0, 0);

	 unit_cell->SetFace(67, 4);
	 unit_cell->SetEdgeInFace(67, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(67, 1, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(67, 2, 24, 0, -1, 0);
	 unit_cell->SetEdgeInFace(67, 3, 51, 0, -1, 0);

	 unit_cell->SetFace(68, 4);
	 unit_cell->SetEdgeInFace(68, 0, 33, 0, 0, 0);
	 unit_cell->SetEdgeInFace(68, 1, 37, 0, 0, 0);
	 unit_cell->SetEdgeInFace(68, 2, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(68, 3, 72, 0, 0, 0);

	 unit_cell->SetFace(69, 4);
	 unit_cell->SetEdgeInFace(69, 0, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(69, 1, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(69, 2, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(69, 3, 53, 0, 0, 0);

	 unit_cell->SetFace(70, 4);
	 unit_cell->SetEdgeInFace(70, 0, 37, 0, 0, 0);
	 unit_cell->SetEdgeInFace(70, 1, 33, 0, 0, 0);
	 unit_cell->SetEdgeInFace(70, 2, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(70, 3, 54, 1, 0, 0);

	 unit_cell->SetFace(71, 4);
	 unit_cell->SetEdgeInFace(71, 0, 39, 0, 1, 0);
	 unit_cell->SetEdgeInFace(71, 1, 35, 0, 1, 0);
	 unit_cell->SetEdgeInFace(71, 2, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(71, 3, 52, 0, 0, 0);

	 unit_cell->SetFace(72, 4);
	 unit_cell->SetEdgeInFace(72, 0, 45, 0, 0, 0);
	 unit_cell->SetEdgeInFace(72, 1, 41, 0, 0, 0);
	 unit_cell->SetEdgeInFace(72, 2, 34, 0, 1, -1);
	 unit_cell->SetEdgeInFace(72, 3, 92, 0, 1, -1);

	 unit_cell->SetFace(73, 4);
	 unit_cell->SetEdgeInFace(73, 0, 46, -1, 0, 0);
	 unit_cell->SetEdgeInFace(73, 1, 42, -1, 0, 0);
	 unit_cell->SetEdgeInFace(73, 2, 35, 0, 0, 0);
	 unit_cell->SetEdgeInFace(73, 3, 65, 0, 0, 0);

	 unit_cell->SetFace(74, 4);
	 unit_cell->SetEdgeInFace(74, 0, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(74, 1, 43, 0, 0, 0);
	 unit_cell->SetEdgeInFace(74, 2, 32, 0, 0, -1);
	 unit_cell->SetEdgeInFace(74, 3, 66, 0, 0, -1);

	 unit_cell->SetFace(75, 4);
	 unit_cell->SetEdgeInFace(75, 0, 47, 1, 0, 0);
	 unit_cell->SetEdgeInFace(75, 1, 20, 1, 0, 0);
	 unit_cell->SetEdgeInFace(75, 2, 33, 0, 0, 0);
	 unit_cell->SetEdgeInFace(75, 3, 67, 0, 0, 0);

	 unit_cell->SetFace(76, 4);
	 unit_cell->SetEdgeInFace(76, 0, 19, 0, 0, 0);
	 unit_cell->SetEdgeInFace(76, 1, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(76, 2, 38, 0, 0, 0);
	 unit_cell->SetEdgeInFace(76, 3, 71, 0, 0, 0);

	 unit_cell->SetFace(77, 4);
	 unit_cell->SetEdgeInFace(77, 0, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(77, 1, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(77, 2, 39, 0, 0, 0);
	 unit_cell->SetEdgeInFace(77, 3, 69, 0, 0, 0);

	 unit_cell->SetFace(78, 4);
	 unit_cell->SetEdgeInFace(78, 0, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(78, 1, 21, 0, 0, 0);
	 unit_cell->SetEdgeInFace(78, 2, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(78, 3, 70, 0, 0, 0);

	 unit_cell->SetFace(79, 4);
	 unit_cell->SetEdgeInFace(79, 0, 18, 0, 0, 0);
	 unit_cell->SetEdgeInFace(79, 1, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(79, 2, 37, 0, 0, 0);
	 unit_cell->SetEdgeInFace(79, 3, 88, 0, 0, 0);

	 unit_cell->SetFace(80, 4);
	 unit_cell->SetEdgeInFace(80, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(80, 1, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(80, 2, 41, -1, 0, 1);
	 unit_cell->SetEdgeInFace(80, 3, 63, -1, 0, 1);

	 unit_cell->SetFace(81, 4);
	 unit_cell->SetEdgeInFace(81, 0, 5, 1, 0, 0);
	 unit_cell->SetEdgeInFace(81, 1, 7, 1, 0, 0);
	 unit_cell->SetEdgeInFace(81, 2, 42, 0, 1, 0);
	 unit_cell->SetEdgeInFace(81, 3, 60, 0, 1, 0);

	 unit_cell->SetFace(82, 4);
	 unit_cell->SetEdgeInFace(82, 0, 6, 1, 0, 0);
	 unit_cell->SetEdgeInFace(82, 1, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(82, 2, 43, 1, 0, 1);
	 unit_cell->SetEdgeInFace(82, 3, 61, 1, 0, 1);

	 unit_cell->SetFace(83, 4);
	 unit_cell->SetEdgeInFace(83, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(83, 1, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(83, 2, 20, 0, 0, 0);
	 unit_cell->SetEdgeInFace(83, 3, 62, 0, 0, 0);

	 unit_cell->SetFace(84, 4);
	 unit_cell->SetEdgeInFace(84, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(84, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(84, 2, 40, -1, 0, 0);
	 unit_cell->SetEdgeInFace(84, 3, 81, -1, 0, 0);

	 unit_cell->SetFace(85, 4);
	 unit_cell->SetEdgeInFace(85, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(85, 1, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(85, 2, 23, 0, 1, 0);
	 unit_cell->SetEdgeInFace(85, 3, 82, 0, 1, 0);

	 unit_cell->SetFace(86, 4);
	 unit_cell->SetEdgeInFace(86, 0, 2, 1, 0, 0);
	 unit_cell->SetEdgeInFace(86, 1, 0, 1, 0, 0);
	 unit_cell->SetEdgeInFace(86, 2, 21, 1, 0, 0);
	 unit_cell->SetEdgeInFace(86, 3, 83, 1, 0, 0);

	 unit_cell->SetFace(87, 4);
	 unit_cell->SetEdgeInFace(87, 0, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(87, 1, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(87, 2, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(87, 3, 80, 0, 0, 0);

	 unit_cell->SetFace(88, 4);
	 unit_cell->SetEdgeInFace(88, 0, 38, 0, 0, 0);
	 unit_cell->SetEdgeInFace(88, 1, 34, 0, 0, 0);
	 unit_cell->SetEdgeInFace(88, 2, 6, 1, -1, 0);
	 unit_cell->SetEdgeInFace(88, 3, 55, 1, -1, 0);

	 unit_cell->SetFace(89, 4);
	 unit_cell->SetEdgeInFace(89, 0, 34, 0, 1, 0);
	 unit_cell->SetEdgeInFace(89, 1, 38, 0, 1, 0);
	 unit_cell->SetEdgeInFace(89, 2, 2, 1, 1, 0);
	 unit_cell->SetEdgeInFace(89, 3, 73, 1, 1, 0);

	 unit_cell->SetFace(90, 4);
	 unit_cell->SetEdgeInFace(90, 0, 35, 0, 1, 0);
	 unit_cell->SetEdgeInFace(90, 1, 39, 0, 1, 0);
	 unit_cell->SetEdgeInFace(90, 2, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(90, 3, 74, 0, 0, 0);

	 unit_cell->SetFace(91, 4);
	 unit_cell->SetEdgeInFace(91, 0, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(91, 1, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(91, 2, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(91, 3, 75, 0, 0, 0);

	 unit_cell->SetFace(92, 4);
	 unit_cell->SetEdgeInFace(92, 0, 9, 0, -1, 1);
	 unit_cell->SetEdgeInFace(92, 1, 13, 0, -1, 1);
	 unit_cell->SetEdgeInFace(92, 2, 25, 0, 0, 0);
	 unit_cell->SetEdgeInFace(92, 3, 48, 0, 0, 0);

	 unit_cell->SetFace(93, 4);
	 unit_cell->SetEdgeInFace(93, 0, 12, 0, 1, 0);
	 unit_cell->SetEdgeInFace(93, 1, 8, 0, 1, 0);
	 unit_cell->SetEdgeInFace(93, 2, 28, 0, 1, 0);
	 unit_cell->SetEdgeInFace(93, 3, 77, 0, 1, 0);

	 unit_cell->SetFace(94, 4);
	 unit_cell->SetEdgeInFace(94, 0, 13, 0, -1, 0);
	 unit_cell->SetEdgeInFace(94, 1, 9, 0, -1, 0);
	 unit_cell->SetEdgeInFace(94, 2, 29, 0, 0, 0);
	 unit_cell->SetEdgeInFace(94, 3, 78, 0, 0, 0);

	 unit_cell->SetFace(95, 4);
	 unit_cell->SetEdgeInFace(95, 0, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(95, 1, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(95, 2, 31, 0, 0, 0);
	 unit_cell->SetEdgeInFace(95, 3, 76, 0, 0, 0);

	 return unit_cell;
}
