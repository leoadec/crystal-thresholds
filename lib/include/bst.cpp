#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("bst", 24, 144, 144);

	 // vertex 0 located at (0.125, 0.125, 0.125)
	 // vertex 1 located at (0.875, 0.375, 0.375)
	 // vertex 2 located at (0.625, 0.125, 0.625)
	 // vertex 3 located at (0.875, 0.875, 0.875)
	 // vertex 4 located at (0.625, 0.625, 0.125)
	 // vertex 5 located at (0.375, 0.875, 0.375)
	 // vertex 6 located at (0.125, 0.625, 0.625)
	 // vertex 7 located at (0.375, 0.375, 0.875)
	 // vertex 8 located at (0.5, 0.25, 0.25)
	 // vertex 9 located at (0.75, 0.75, 0.5)
	 // vertex 10 located at (0.25, 0.0, 0.75)
	 // vertex 11 located at (0.0, 0.5, 0.0)
	 // vertex 12 located at (0.5, 0.0, 0.0)
	 // vertex 13 located at (0.0, 0.75, 0.25)
	 // vertex 14 located at (0.25, 0.25, 0.5)
	 // vertex 15 located at (0.75, 0.5, 0.75)
	 // vertex 16 located at (0.25, 0.5, 0.25)
	 // vertex 17 located at (0.5, 0.5, 0.5)
	 // vertex 18 located at (0.5, 0.75, 0.75)
	 // vertex 19 located at (0.25, 0.75, 0.0)
	 // vertex 20 located at (0.75, 0.25, 0.0)
	 // vertex 21 located at (0.0, 0.0, 0.5)
	 // vertex 22 located at (0.75, 0.0, 0.25)
	 // vertex 23 located at (0.0, 0.25, 0.75)

	 unit_cell->SetEdge(0, 0, 8, 0, 0, 0);
	 unit_cell->SetEdge(1, 1, 9, 0, 0, 0);
	 unit_cell->SetEdge(2, 2, 10, 0, 0, 0);
	 unit_cell->SetEdge(3, 3, 11, 1, 0, 1);
	 unit_cell->SetEdge(4, 0, 12, 0, 0, 0);
	 unit_cell->SetEdge(5, 1, 13, 1, 0, 0);
	 unit_cell->SetEdge(6, 2, 14, 0, 0, 0);
	 unit_cell->SetEdge(7, 3, 15, 0, 0, 0);
	 unit_cell->SetEdge(8, 0, 16, 0, 0, 0);
	 unit_cell->SetEdge(9, 1, 17, 0, 0, 0);
	 unit_cell->SetEdge(10, 2, 18, 0, -1, 0);
	 unit_cell->SetEdge(11, 3, 19, 1, 0, 1);
	 unit_cell->SetEdge(12, 0, 19, 0, -1, 0);
	 unit_cell->SetEdge(13, 1, 16, 1, 0, 0);
	 unit_cell->SetEdge(14, 2, 17, 0, 0, 0);
	 unit_cell->SetEdge(15, 3, 18, 0, 0, 0);
	 unit_cell->SetEdge(16, 0, 14, 0, 0, 0);
	 unit_cell->SetEdge(17, 4, 15, 0, 0, -1);
	 unit_cell->SetEdge(18, 5, 12, 0, 1, 0);
	 unit_cell->SetEdge(19, 6, 13, 0, 0, 0);
	 unit_cell->SetEdge(20, 1, 20, 0, 0, 0);
	 unit_cell->SetEdge(21, 0, 21, 0, 0, 0);
	 unit_cell->SetEdge(22, 5, 18, 0, 0, 0);
	 unit_cell->SetEdge(23, 7, 16, 0, 0, 1);
	 unit_cell->SetEdge(24, 6, 14, 0, 0, 0);
	 unit_cell->SetEdge(25, 5, 22, 0, 1, 0);
	 unit_cell->SetEdge(26, 0, 11, 0, 0, 0);
	 unit_cell->SetEdge(27, 3, 12, 0, 1, 1);
	 unit_cell->SetEdge(28, 6, 23, 0, 0, 0);
	 unit_cell->SetEdge(29, 5, 9, 0, 0, 0);
	 unit_cell->SetEdge(30, 6, 17, 0, 0, 0);
	 unit_cell->SetEdge(31, 5, 8, 0, 1, 0);
	 unit_cell->SetEdge(32, 0, 20, -1, 0, 0);
	 unit_cell->SetEdge(33, 3, 20, 0, 1, 1);
	 unit_cell->SetEdge(34, 6, 15, -1, 0, 0);
	 unit_cell->SetEdge(35, 5, 17, 0, 0, 0);
	 unit_cell->SetEdge(36, 3, 9, 0, 0, 0);
	 unit_cell->SetEdge(37, 2, 12, 0, 0, 1);
	 unit_cell->SetEdge(38, 1, 23, 1, 0, 0);
	 unit_cell->SetEdge(39, 6, 19, 0, 0, 1);
	 unit_cell->SetEdge(40, 3, 21, 1, 1, 0);
	 unit_cell->SetEdge(41, 2, 8, 0, 0, 0);
	 unit_cell->SetEdge(42, 6, 18, 0, 0, 0);
	 unit_cell->SetEdge(43, 4, 16, 0, 0, 0);
	 unit_cell->SetEdge(44, 1, 21, 1, 0, 0);
	 unit_cell->SetEdge(45, 3, 23, 1, 1, 0);
	 unit_cell->SetEdge(46, 4, 19, 0, 0, 0);
	 unit_cell->SetEdge(47, 1, 22, 0, 0, 0);
	 unit_cell->SetEdge(48, 6, 10, 0, 1, 0);
	 unit_cell->SetEdge(49, 4, 8, 0, 0, 0);
	 unit_cell->SetEdge(50, 1, 14, 1, 0, 0);
	 unit_cell->SetEdge(51, 3, 10, 1, 1, 0);
	 unit_cell->SetEdge(52, 4, 12, 0, 1, 0);
	 unit_cell->SetEdge(53, 1, 8, 0, 0, 0);
	 unit_cell->SetEdge(54, 2, 22, 0, 0, 0);
	 unit_cell->SetEdge(55, 7, 17, 0, 0, 0);
	 unit_cell->SetEdge(56, 0, 23, 0, 0, -1);
	 unit_cell->SetEdge(57, 6, 11, 0, 0, 1);
	 unit_cell->SetEdge(58, 7, 8, 0, 0, 1);
	 unit_cell->SetEdge(59, 5, 10, 0, 1, 0);
	 unit_cell->SetEdge(60, 7, 15, 0, 0, 0);
	 unit_cell->SetEdge(61, 6, 21, 0, 1, 0);
	 unit_cell->SetEdge(62, 0, 13, 0, -1, 0);
	 unit_cell->SetEdge(63, 7, 20, 0, 0, 1);
	 unit_cell->SetEdge(64, 7, 18, 0, 0, 0);
	 unit_cell->SetEdge(65, 6, 9, -1, 0, 0);
	 unit_cell->SetEdge(66, 0, 22, -1, 0, 0);
	 unit_cell->SetEdge(67, 7, 12, 0, 0, 1);
	 unit_cell->SetEdge(68, 4, 17, 0, 0, 0);
	 unit_cell->SetEdge(69, 3, 13, 1, 0, 1);
	 unit_cell->SetEdge(70, 1, 11, 1, 0, 0);
	 unit_cell->SetEdge(71, 4, 18, 0, 0, -1);
	 unit_cell->SetEdge(72, 2, 23, 1, 0, 0);
	 unit_cell->SetEdge(73, 7, 19, 0, 0, 1);
	 unit_cell->SetEdge(74, 2, 21, 1, 0, 0);
	 unit_cell->SetEdge(75, 5, 16, 0, 0, 0);
	 unit_cell->SetEdge(76, 2, 15, 0, 0, 0);
	 unit_cell->SetEdge(77, 7, 11, 0, 0, 1);
	 unit_cell->SetEdge(78, 2, 9, 0, -1, 0);
	 unit_cell->SetEdge(79, 5, 13, 0, 0, 0);
	 unit_cell->SetEdge(80, 2, 20, 0, 0, 1);
	 unit_cell->SetEdge(81, 6, 16, 0, 0, 0);
	 unit_cell->SetEdge(82, 7, 14, 0, 0, 0);
	 unit_cell->SetEdge(83, 1, 15, 0, 0, 0);
	 unit_cell->SetEdge(84, 4, 20, 0, 0, 0);
	 unit_cell->SetEdge(85, 5, 21, 0, 1, 0);
	 unit_cell->SetEdge(86, 4, 11, 1, 0, 0);
	 unit_cell->SetEdge(87, 5, 14, 0, 1, 0);
	 unit_cell->SetEdge(88, 5, 19, 0, 0, 0);
	 unit_cell->SetEdge(89, 4, 9, 0, 0, 0);
	 unit_cell->SetEdge(90, 4, 13, 1, 0, 0);
	 unit_cell->SetEdge(91, 7, 10, 0, 0, 0);
	 unit_cell->SetEdge(92, 4, 22, 0, 1, 0);
	 unit_cell->SetEdge(93, 7, 23, 0, 0, 0);
	 unit_cell->SetEdge(94, 0, 10, 0, 0, -1);
	 unit_cell->SetEdge(95, 3, 22, 0, 1, 1);
	 unit_cell->SetEdge(96, 17, 8, 0, 0, 0);
	 unit_cell->SetEdge(97, 18, 9, 0, 0, 0);
	 unit_cell->SetEdge(98, 19, 10, 0, 1, -1);
	 unit_cell->SetEdge(99, 16, 11, 0, 0, 0);
	 unit_cell->SetEdge(100, 18, 12, 0, 1, 1);
	 unit_cell->SetEdge(101, 19, 13, 0, 0, 0);
	 unit_cell->SetEdge(102, 16, 14, 0, 0, 0);
	 unit_cell->SetEdge(103, 17, 15, 0, 0, 0);
	 unit_cell->SetEdge(104, 17, 16, 0, 0, 0);
	 unit_cell->SetEdge(105, 18, 17, 0, 0, 0);
	 unit_cell->SetEdge(106, 19, 18, 0, 0, -1);
	 unit_cell->SetEdge(107, 16, 19, 0, 0, 0);
	 unit_cell->SetEdge(108, 17, 14, 0, 0, 0);
	 unit_cell->SetEdge(109, 23, 15, -1, 0, 0);
	 unit_cell->SetEdge(110, 20, 12, 0, 0, 0);
	 unit_cell->SetEdge(111, 22, 13, 1, -1, 0);
	 unit_cell->SetEdge(112, 9, 21, 1, 1, 0);
	 unit_cell->SetEdge(113, 15, 18, 0, 0, 0);
	 unit_cell->SetEdge(114, 13, 16, 0, 0, 0);
	 unit_cell->SetEdge(115, 8, 14, 0, 0, 0);
	 unit_cell->SetEdge(116, 20, 22, 0, 0, 0);
	 unit_cell->SetEdge(117, 15, 11, 1, 0, 1);
	 unit_cell->SetEdge(118, 8, 12, 0, 0, 0);
	 unit_cell->SetEdge(119, 20, 23, 1, 0, -1);
	 unit_cell->SetEdge(120, 15, 9, 0, 0, 0);
	 unit_cell->SetEdge(121, 20, 8, 0, 0, 0);
	 unit_cell->SetEdge(122, 15, 20, 0, 0, 1);
	 unit_cell->SetEdge(123, 17, 9, 0, 0, 0);
	 unit_cell->SetEdge(124, 19, 12, 0, 1, 0);
	 unit_cell->SetEdge(125, 10, 23, 0, 0, 0);
	 unit_cell->SetEdge(126, 14, 21, 0, 0, 0);
	 unit_cell->SetEdge(127, 16, 8, 0, 0, 0);
	 unit_cell->SetEdge(128, 10, 21, 0, 0, 0);
	 unit_cell->SetEdge(129, 14, 23, 0, 0, 0);
	 unit_cell->SetEdge(130, 12, 22, 0, 0, 0);
	 unit_cell->SetEdge(131, 12, 10, 0, 0, -1);
	 unit_cell->SetEdge(132, 10, 14, 0, 0, 0);
	 unit_cell->SetEdge(133, 20, 11, 1, 0, 0);
	 unit_cell->SetEdge(134, 22, 8, 0, 0, 0);
	 unit_cell->SetEdge(135, 22, 21, 1, 0, 0);
	 unit_cell->SetEdge(136, 9, 13, 1, 0, 0);
	 unit_cell->SetEdge(137, 22, 9, 0, -1, 0);
	 unit_cell->SetEdge(138, 19, 11, 0, 0, 0);
	 unit_cell->SetEdge(139, 10, 18, 0, -1, 0);
	 unit_cell->SetEdge(140, 11, 23, 0, 0, -1);
	 unit_cell->SetEdge(141, 13, 21, 0, 1, 0);
	 unit_cell->SetEdge(142, 13, 11, 0, 0, 0);
	 unit_cell->SetEdge(143, 23, 21, 0, 0, 0);

	 unit_cell->SetFace(0, 3);
	 unit_cell->SetEdgeInFace(0, 0, 111, -1, 1, 0);
	 unit_cell->SetEdgeInFace(0, 1, 92, -1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 90, -1, 0, 0);

	 unit_cell->SetFace(1, 3);
	 unit_cell->SetEdgeInFace(1, 0, 130, 0, 0, 0);
	 unit_cell->SetEdgeInFace(1, 1, 92, 0, -1, 0);
	 unit_cell->SetEdgeInFace(1, 2, 52, 0, -1, 0);

	 unit_cell->SetFace(2, 3);
	 unit_cell->SetEdgeInFace(2, 0, 126, 0, 0, 0);
	 unit_cell->SetEdgeInFace(2, 1, 85, 0, -1, 0);
	 unit_cell->SetEdgeInFace(2, 2, 87, 0, -1, 0);

	 unit_cell->SetFace(3, 3);
	 unit_cell->SetEdgeInFace(3, 0, 109, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 28, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 34, 1, 0, 0);

	 unit_cell->SetFace(4, 3);
	 unit_cell->SetEdgeInFace(4, 0, 110, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 63, 0, 0, -1);
	 unit_cell->SetEdgeInFace(4, 2, 67, 0, 0, -1);

	 unit_cell->SetFace(5, 3);
	 unit_cell->SetEdgeInFace(5, 0, 133, -1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 84, -1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 2, 86, -1, 0, 0);

	 unit_cell->SetFace(6, 3);
	 unit_cell->SetEdgeInFace(6, 0, 134, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 25, 0, -1, 0);
	 unit_cell->SetEdgeInFace(6, 2, 31, 0, -1, 0);

	 unit_cell->SetFace(7, 3);
	 unit_cell->SetEdgeInFace(7, 0, 112, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 61, 1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 65, 1, 0, 0);

	 unit_cell->SetFace(8, 3);
	 unit_cell->SetEdgeInFace(8, 0, 125, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 93, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 91, 0, 0, 0);

	 unit_cell->SetFace(9, 3);
	 unit_cell->SetEdgeInFace(9, 0, 98, 0, -1, 1);
	 unit_cell->SetEdgeInFace(9, 1, 39, 0, -1, 0);
	 unit_cell->SetEdgeInFace(9, 2, 48, 0, -1, 0);

	 unit_cell->SetFace(10, 3);
	 unit_cell->SetEdgeInFace(10, 0, 99, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 23, 0, 0, -1);
	 unit_cell->SetEdgeInFace(10, 2, 77, 0, 0, -1);

	 unit_cell->SetFace(11, 3);
	 unit_cell->SetEdgeInFace(11, 0, 96, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 68, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 49, 0, 0, 0);

	 unit_cell->SetFace(12, 3);
	 unit_cell->SetEdgeInFace(12, 0, 97, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 2, 29, 0, 0, 0);

	 unit_cell->SetFace(13, 3);
	 unit_cell->SetEdgeInFace(13, 0, 102, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 81, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 2, 24, 0, 0, 0);

	 unit_cell->SetFace(14, 3);
	 unit_cell->SetEdgeInFace(14, 0, 103, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 55, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 2, 60, 0, 0, 0);

	 unit_cell->SetFace(15, 3);
	 unit_cell->SetEdgeInFace(15, 0, 100, 0, -1, -1);
	 unit_cell->SetEdgeInFace(15, 1, 71, 0, -1, 0);
	 unit_cell->SetEdgeInFace(15, 2, 52, 0, -1, 0);

	 unit_cell->SetFace(16, 3);
	 unit_cell->SetEdgeInFace(16, 0, 101, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 1, 88, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 2, 79, 0, 0, 0);

	 unit_cell->SetFace(17, 3);
	 unit_cell->SetEdgeInFace(17, 0, 119, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 1, 72, 0, 0, -1);
	 unit_cell->SetEdgeInFace(17, 2, 80, 0, 0, -1);

	 unit_cell->SetFace(18, 3);
	 unit_cell->SetEdgeInFace(18, 0, 104, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 1, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 2, 81, 0, 0, 0);

	 unit_cell->SetFace(19, 3);
	 unit_cell->SetEdgeInFace(19, 0, 105, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 1, 64, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 2, 55, 0, 0, 0);

	 unit_cell->SetFace(20, 3);
	 unit_cell->SetEdgeInFace(20, 0, 106, 0, 0, 1);
	 unit_cell->SetEdgeInFace(20, 1, 46, 0, 0, 1);
	 unit_cell->SetEdgeInFace(20, 2, 71, 0, 0, 1);

	 unit_cell->SetFace(21, 3);
	 unit_cell->SetEdgeInFace(21, 0, 120, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 1, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 2, 36, 0, 0, 0);

	 unit_cell->SetFace(22, 3);
	 unit_cell->SetEdgeInFace(22, 0, 131, 0, 0, 0);
	 unit_cell->SetEdgeInFace(22, 1, 2, 0, 0, -1);
	 unit_cell->SetEdgeInFace(22, 2, 37, 0, 0, -1);

	 unit_cell->SetFace(23, 3);
	 unit_cell->SetEdgeInFace(23, 0, 118, 0, 0, 0);
	 unit_cell->SetEdgeInFace(23, 1, 67, 0, 0, -1);
	 unit_cell->SetEdgeInFace(23, 2, 58, 0, 0, -1);

	 unit_cell->SetFace(24, 3);
	 unit_cell->SetEdgeInFace(24, 0, 132, 0, 0, 0);
	 unit_cell->SetEdgeInFace(24, 1, 87, 0, -1, 0);
	 unit_cell->SetEdgeInFace(24, 2, 59, 0, -1, 0);

	 unit_cell->SetFace(25, 3);
	 unit_cell->SetEdgeInFace(25, 0, 112, 0, 0, 0);
	 unit_cell->SetEdgeInFace(25, 1, 74, 0, 1, 0);
	 unit_cell->SetEdgeInFace(25, 2, 78, 0, 1, 0);

	 unit_cell->SetFace(26, 3);
	 unit_cell->SetEdgeInFace(26, 0, 114, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 1, 5, -1, 0, 0);
	 unit_cell->SetEdgeInFace(26, 2, 13, -1, 0, 0);

	 unit_cell->SetFace(27, 3);
	 unit_cell->SetEdgeInFace(27, 0, 124, 0, -1, 0);
	 unit_cell->SetEdgeInFace(27, 1, 46, 0, -1, 0);
	 unit_cell->SetEdgeInFace(27, 2, 52, 0, -1, 0);

	 unit_cell->SetFace(28, 3);
	 unit_cell->SetEdgeInFace(28, 0, 138, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 1, 73, 0, 0, -1);
	 unit_cell->SetEdgeInFace(28, 2, 77, 0, 0, -1);

	 unit_cell->SetFace(29, 3);
	 unit_cell->SetEdgeInFace(29, 0, 139, 0, 1, 0);
	 unit_cell->SetEdgeInFace(29, 1, 2, 0, 1, 0);
	 unit_cell->SetEdgeInFace(29, 2, 10, 0, 1, 0);

	 unit_cell->SetFace(30, 3);
	 unit_cell->SetEdgeInFace(30, 0, 126, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 1, 44, -1, 0, 0);
	 unit_cell->SetEdgeInFace(30, 2, 50, -1, 0, 0);

	 unit_cell->SetFace(31, 3);
	 unit_cell->SetEdgeInFace(31, 0, 116, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 1, 20, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 2, 47, 0, 0, 0);

	 unit_cell->SetFace(32, 3);
	 unit_cell->SetEdgeInFace(32, 0, 117, -1, 0, -1);
	 unit_cell->SetEdgeInFace(32, 1, 17, -1, 0, 0);
	 unit_cell->SetEdgeInFace(32, 2, 86, -1, 0, 0);

	 unit_cell->SetFace(33, 3);
	 unit_cell->SetEdgeInFace(33, 0, 115, 0, 0, 0);
	 unit_cell->SetEdgeInFace(33, 1, 41, 0, 0, 0);
	 unit_cell->SetEdgeInFace(33, 2, 6, 0, 0, 0);

	 unit_cell->SetFace(34, 3);
	 unit_cell->SetEdgeInFace(34, 0, 120, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 1, 83, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 2, 1, 0, 0, 0);

	 unit_cell->SetFace(35, 3);
	 unit_cell->SetEdgeInFace(35, 0, 104, 0, 0, 0);
	 unit_cell->SetEdgeInFace(35, 1, 68, 0, 0, 0);
	 unit_cell->SetEdgeInFace(35, 2, 43, 0, 0, 0);

	 unit_cell->SetFace(36, 3);
	 unit_cell->SetEdgeInFace(36, 0, 103, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 1, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(36, 2, 83, 0, 0, 0);

	 unit_cell->SetFace(37, 3);
	 unit_cell->SetEdgeInFace(37, 0, 121, 0, 0, 0);
	 unit_cell->SetEdgeInFace(37, 1, 63, 0, 0, -1);
	 unit_cell->SetEdgeInFace(37, 2, 58, 0, 0, -1);

	 unit_cell->SetFace(38, 3);
	 unit_cell->SetEdgeInFace(38, 0, 102, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 1, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(38, 2, 16, 0, 0, 0);

	 unit_cell->SetFace(39, 3);
	 unit_cell->SetEdgeInFace(39, 0, 130, 0, 0, 0);
	 unit_cell->SetEdgeInFace(39, 1, 25, 0, -1, 0);
	 unit_cell->SetEdgeInFace(39, 2, 18, 0, -1, 0);

	 unit_cell->SetFace(40, 3);
	 unit_cell->SetEdgeInFace(40, 0, 137, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 1, 78, 0, 0, 0);
	 unit_cell->SetEdgeInFace(40, 2, 54, 0, 0, 0);

	 unit_cell->SetFace(41, 3);
	 unit_cell->SetEdgeInFace(41, 0, 109, 0, 0, 0);
	 unit_cell->SetEdgeInFace(41, 1, 76, -1, 0, 0);
	 unit_cell->SetEdgeInFace(41, 2, 72, -1, 0, 0);

	 unit_cell->SetFace(42, 3);
	 unit_cell->SetEdgeInFace(42, 0, 111, 0, 0, 0);
	 unit_cell->SetEdgeInFace(42, 1, 62, 1, 0, 0);
	 unit_cell->SetEdgeInFace(42, 2, 66, 1, 0, 0);

	 unit_cell->SetFace(43, 3);
	 unit_cell->SetEdgeInFace(43, 0, 123, 0, 0, 0);
	 unit_cell->SetEdgeInFace(43, 1, 29, 0, 0, 0);
	 unit_cell->SetEdgeInFace(43, 2, 35, 0, 0, 0);

	 unit_cell->SetFace(44, 3);
	 unit_cell->SetEdgeInFace(44, 0, 113, 0, 0, 0);
	 unit_cell->SetEdgeInFace(44, 1, 60, 0, 0, 0);
	 unit_cell->SetEdgeInFace(44, 2, 64, 0, 0, 0);

	 unit_cell->SetFace(45, 3);
	 unit_cell->SetEdgeInFace(45, 0, 133, 0, 0, 0);
	 unit_cell->SetEdgeInFace(45, 1, 26, 1, 0, 0);
	 unit_cell->SetEdgeInFace(45, 2, 32, 1, 0, 0);

	 unit_cell->SetFace(46, 3);
	 unit_cell->SetEdgeInFace(46, 0, 114, 0, 0, 0);
	 unit_cell->SetEdgeInFace(46, 1, 79, 0, 0, 0);
	 unit_cell->SetEdgeInFace(46, 2, 75, 0, 0, 0);

	 unit_cell->SetFace(47, 3);
	 unit_cell->SetEdgeInFace(47, 0, 128, 0, 0, 0);
	 unit_cell->SetEdgeInFace(47, 1, 59, 0, -1, 0);
	 unit_cell->SetEdgeInFace(47, 2, 85, 0, -1, 0);

	 unit_cell->SetFace(48, 3);
	 unit_cell->SetEdgeInFace(48, 0, 100, 0, 0, 0);
	 unit_cell->SetEdgeInFace(48, 1, 37, 0, 1, 0);
	 unit_cell->SetEdgeInFace(48, 2, 10, 0, 1, 0);

	 unit_cell->SetFace(49, 3);
	 unit_cell->SetEdgeInFace(49, 0, 98, 0, 0, 0);
	 unit_cell->SetEdgeInFace(49, 1, 94, 0, 1, 0);
	 unit_cell->SetEdgeInFace(49, 2, 12, 0, 1, 0);

	 unit_cell->SetFace(50, 3);
	 unit_cell->SetEdgeInFace(50, 0, 96, 0, 0, 0);
	 unit_cell->SetEdgeInFace(50, 1, 41, 0, 0, 0);
	 unit_cell->SetEdgeInFace(50, 2, 14, 0, 0, 0);

	 unit_cell->SetFace(51, 3);
	 unit_cell->SetEdgeInFace(51, 0, 129, 0, 0, 0);
	 unit_cell->SetEdgeInFace(51, 1, 82, 0, 0, 0);
	 unit_cell->SetEdgeInFace(51, 2, 93, 0, 0, 0);

	 unit_cell->SetFace(52, 3);
	 unit_cell->SetEdgeInFace(52, 0, 136, 0, 0, 0);
	 unit_cell->SetEdgeInFace(52, 1, 90, 0, 0, 0);
	 unit_cell->SetEdgeInFace(52, 2, 89, 0, 0, 0);

	 unit_cell->SetFace(53, 3);
	 unit_cell->SetEdgeInFace(53, 0, 131, 0, 0, 1);
	 unit_cell->SetEdgeInFace(53, 1, 4, 0, 0, 1);
	 unit_cell->SetEdgeInFace(53, 2, 94, 0, 0, 1);

	 unit_cell->SetFace(54, 3);
	 unit_cell->SetEdgeInFace(54, 0, 118, 0, 0, 0);
	 unit_cell->SetEdgeInFace(54, 1, 31, 0, -1, 0);
	 unit_cell->SetEdgeInFace(54, 2, 18, 0, -1, 0);

	 unit_cell->SetFace(55, 3);
	 unit_cell->SetEdgeInFace(55, 0, 105, 0, 0, 0);
	 unit_cell->SetEdgeInFace(55, 1, 35, 0, 0, 0);
	 unit_cell->SetEdgeInFace(55, 2, 22, 0, 0, 0);

	 unit_cell->SetFace(56, 3);
	 unit_cell->SetEdgeInFace(56, 0, 107, 0, 0, 0);
	 unit_cell->SetEdgeInFace(56, 1, 73, 0, 0, -1);
	 unit_cell->SetEdgeInFace(56, 2, 23, 0, 0, -1);

	 unit_cell->SetFace(57, 3);
	 unit_cell->SetEdgeInFace(57, 0, 125, 0, 0, 0);
	 unit_cell->SetEdgeInFace(57, 1, 45, -1, -1, 0);
	 unit_cell->SetEdgeInFace(57, 2, 51, -1, -1, 0);

	 unit_cell->SetFace(58, 3);
	 unit_cell->SetEdgeInFace(58, 0, 108, 0, 0, 0);
	 unit_cell->SetEdgeInFace(58, 1, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(58, 2, 14, 0, 0, 0);

	 unit_cell->SetFace(59, 3);
	 unit_cell->SetEdgeInFace(59, 0, 127, 0, 0, 0);
	 unit_cell->SetEdgeInFace(59, 1, 43, 0, 0, 0);
	 unit_cell->SetEdgeInFace(59, 2, 49, 0, 0, 0);

	 unit_cell->SetFace(60, 3);
	 unit_cell->SetEdgeInFace(60, 0, 138, 0, 0, 0);
	 unit_cell->SetEdgeInFace(60, 1, 3, -1, 0, -1);
	 unit_cell->SetEdgeInFace(60, 2, 11, -1, 0, -1);

	 unit_cell->SetFace(61, 3);
	 unit_cell->SetEdgeInFace(61, 0, 135, -1, 0, 0);
	 unit_cell->SetEdgeInFace(61, 1, 54, -1, 0, 0);
	 unit_cell->SetEdgeInFace(61, 2, 74, -1, 0, 0);

	 unit_cell->SetFace(62, 3);
	 unit_cell->SetEdgeInFace(62, 0, 116, 0, 0, 0);
	 unit_cell->SetEdgeInFace(62, 1, 95, 0, -1, -1);
	 unit_cell->SetEdgeInFace(62, 2, 33, 0, -1, -1);

	 unit_cell->SetFace(63, 3);
	 unit_cell->SetEdgeInFace(63, 0, 130, 0, 0, 0);
	 unit_cell->SetEdgeInFace(63, 1, 27, 0, -1, -1);
	 unit_cell->SetEdgeInFace(63, 2, 95, 0, -1, -1);

	 unit_cell->SetFace(64, 3);
	 unit_cell->SetEdgeInFace(64, 0, 122, 0, 0, 0);
	 unit_cell->SetEdgeInFace(64, 1, 84, 0, 0, 1);
	 unit_cell->SetEdgeInFace(64, 2, 17, 0, 0, 1);

	 unit_cell->SetFace(65, 3);
	 unit_cell->SetEdgeInFace(65, 0, 139, 0, 1, 0);
	 unit_cell->SetEdgeInFace(65, 1, 48, 0, 0, 0);
	 unit_cell->SetEdgeInFace(65, 2, 42, 0, 0, 0);

	 unit_cell->SetFace(66, 3);
	 unit_cell->SetEdgeInFace(66, 0, 110, 0, 0, 0);
	 unit_cell->SetEdgeInFace(66, 1, 27, 0, -1, -1);
	 unit_cell->SetEdgeInFace(66, 2, 33, 0, -1, -1);

	 unit_cell->SetFace(67, 3);
	 unit_cell->SetEdgeInFace(67, 0, 108, 0, 0, 0);
	 unit_cell->SetEdgeInFace(67, 1, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(67, 2, 30, 0, 0, 0);

	 unit_cell->SetFace(68, 3);
	 unit_cell->SetEdgeInFace(68, 0, 134, 0, 0, 0);
	 unit_cell->SetEdgeInFace(68, 1, 53, 0, 0, 0);
	 unit_cell->SetEdgeInFace(68, 2, 47, 0, 0, 0);

	 unit_cell->SetFace(69, 3);
	 unit_cell->SetEdgeInFace(69, 0, 137, 0, 0, 0);
	 unit_cell->SetEdgeInFace(69, 1, 89, 0, -1, 0);
	 unit_cell->SetEdgeInFace(69, 2, 92, 0, -1, 0);

	 unit_cell->SetFace(70, 3);
	 unit_cell->SetEdgeInFace(70, 0, 140, 0, 0, 1);
	 unit_cell->SetEdgeInFace(70, 1, 57, 0, 0, 0);
	 unit_cell->SetEdgeInFace(70, 2, 28, 0, 0, 0);

	 unit_cell->SetFace(71, 3);
	 unit_cell->SetEdgeInFace(71, 0, 101, 0, 0, 0);
	 unit_cell->SetEdgeInFace(71, 1, 69, -1, 0, -1);
	 unit_cell->SetEdgeInFace(71, 2, 11, -1, 0, -1);

	 unit_cell->SetFace(72, 3);
	 unit_cell->SetEdgeInFace(72, 0, 99, 0, 0, 0);
	 unit_cell->SetEdgeInFace(72, 1, 70, -1, 0, 0);
	 unit_cell->SetEdgeInFace(72, 2, 13, -1, 0, 0);

	 unit_cell->SetFace(73, 3);
	 unit_cell->SetEdgeInFace(73, 0, 141, 0, -1, 0);
	 unit_cell->SetEdgeInFace(73, 1, 19, 0, -1, 0);
	 unit_cell->SetEdgeInFace(73, 2, 61, 0, -1, 0);

	 unit_cell->SetFace(74, 3);
	 unit_cell->SetEdgeInFace(74, 0, 97, 0, 0, 0);
	 unit_cell->SetEdgeInFace(74, 1, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(74, 2, 15, 0, 0, 0);

	 unit_cell->SetFace(75, 3);
	 unit_cell->SetEdgeInFace(75, 0, 115, 0, 0, 0);
	 unit_cell->SetEdgeInFace(75, 1, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(75, 2, 16, 0, 0, 0);

	 unit_cell->SetFace(76, 3);
	 unit_cell->SetEdgeInFace(76, 0, 142, 0, 0, 0);
	 unit_cell->SetEdgeInFace(76, 1, 5, -1, 0, 0);
	 unit_cell->SetEdgeInFace(76, 2, 70, -1, 0, 0);

	 unit_cell->SetFace(77, 3);
	 unit_cell->SetEdgeInFace(77, 0, 136, -1, 0, 0);
	 unit_cell->SetEdgeInFace(77, 1, 65, 0, 0, 0);
	 unit_cell->SetEdgeInFace(77, 2, 19, 0, 0, 0);

	 unit_cell->SetFace(78, 3);
	 unit_cell->SetEdgeInFace(78, 0, 107, 0, 0, 0);
	 unit_cell->SetEdgeInFace(78, 1, 75, 0, 0, 0);
	 unit_cell->SetEdgeInFace(78, 2, 88, 0, 0, 0);

	 unit_cell->SetFace(79, 3);
	 unit_cell->SetEdgeInFace(79, 0, 135, -1, 0, 0);
	 unit_cell->SetEdgeInFace(79, 1, 66, 0, 0, 0);
	 unit_cell->SetEdgeInFace(79, 2, 21, 0, 0, 0);

	 unit_cell->SetFace(80, 3);
	 unit_cell->SetEdgeInFace(80, 0, 143, 0, 0, 0);
	 unit_cell->SetEdgeInFace(80, 1, 44, -1, 0, 0);
	 unit_cell->SetEdgeInFace(80, 2, 38, -1, 0, 0);

	 unit_cell->SetFace(81, 3);
	 unit_cell->SetEdgeInFace(81, 0, 124, 0, 0, 0);
	 unit_cell->SetEdgeInFace(81, 1, 4, 0, 1, 0);
	 unit_cell->SetEdgeInFace(81, 2, 12, 0, 1, 0);

	 unit_cell->SetFace(82, 3);
	 unit_cell->SetEdgeInFace(82, 0, 123, 0, 0, 0);
	 unit_cell->SetEdgeInFace(82, 1, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(82, 2, 9, 0, 0, 0);

	 unit_cell->SetFace(83, 3);
	 unit_cell->SetEdgeInFace(83, 0, 132, 0, 0, 0);
	 unit_cell->SetEdgeInFace(83, 1, 82, 0, 0, 0);
	 unit_cell->SetEdgeInFace(83, 2, 91, 0, 0, 0);

	 unit_cell->SetFace(84, 3);
	 unit_cell->SetEdgeInFace(84, 0, 119, 0, 0, 0);
	 unit_cell->SetEdgeInFace(84, 1, 56, 1, 0, 0);
	 unit_cell->SetEdgeInFace(84, 2, 32, 1, 0, 0);

	 unit_cell->SetFace(85, 3);
	 unit_cell->SetEdgeInFace(85, 0, 117, 0, 0, 0);
	 unit_cell->SetEdgeInFace(85, 1, 57, 1, 0, 0);
	 unit_cell->SetEdgeInFace(85, 2, 34, 1, 0, 0);

	 unit_cell->SetFace(86, 3);
	 unit_cell->SetEdgeInFace(86, 0, 129, 0, 0, 0);
	 unit_cell->SetEdgeInFace(86, 1, 50, -1, 0, 0);
	 unit_cell->SetEdgeInFace(86, 2, 38, -1, 0, 0);

	 unit_cell->SetFace(87, 3);
	 unit_cell->SetEdgeInFace(87, 0, 122, 0, 0, -1);
	 unit_cell->SetEdgeInFace(87, 1, 76, 0, 0, -1);
	 unit_cell->SetEdgeInFace(87, 2, 80, 0, 0, -1);

	 unit_cell->SetFace(88, 3);
	 unit_cell->SetEdgeInFace(88, 0, 128, 0, 0, 0);
	 unit_cell->SetEdgeInFace(88, 1, 51, -1, -1, 0);
	 unit_cell->SetEdgeInFace(88, 2, 40, -1, -1, 0);

	 unit_cell->SetFace(89, 3);
	 unit_cell->SetEdgeInFace(89, 0, 127, 0, 0, 0);
	 unit_cell->SetEdgeInFace(89, 1, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(89, 2, 0, 0, 0, 0);

	 unit_cell->SetFace(90, 3);
	 unit_cell->SetEdgeInFace(90, 0, 113, 0, 0, 0);
	 unit_cell->SetEdgeInFace(90, 1, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(90, 2, 7, 0, 0, 0);

	 unit_cell->SetFace(91, 3);
	 unit_cell->SetEdgeInFace(91, 0, 141, 0, 0, 0);
	 unit_cell->SetEdgeInFace(91, 1, 21, 0, 1, 0);
	 unit_cell->SetEdgeInFace(91, 2, 62, 0, 1, 0);

	 unit_cell->SetFace(92, 3);
	 unit_cell->SetEdgeInFace(92, 0, 140, 0, 0, 0);
	 unit_cell->SetEdgeInFace(92, 1, 56, 0, 0, 0);
	 unit_cell->SetEdgeInFace(92, 2, 26, 0, 0, 0);

	 unit_cell->SetFace(93, 3);
	 unit_cell->SetEdgeInFace(93, 0, 121, 0, 0, 0);
	 unit_cell->SetEdgeInFace(93, 1, 20, 0, 0, 0);
	 unit_cell->SetEdgeInFace(93, 2, 53, 0, 0, 0);

	 unit_cell->SetFace(94, 3);
	 unit_cell->SetEdgeInFace(94, 0, 106, 0, 0, 0);
	 unit_cell->SetEdgeInFace(94, 1, 42, 0, 0, -1);
	 unit_cell->SetEdgeInFace(94, 2, 39, 0, 0, -1);

	 unit_cell->SetFace(95, 3);
	 unit_cell->SetEdgeInFace(95, 0, 143, 0, 0, 0);
	 unit_cell->SetEdgeInFace(95, 1, 45, -1, -1, 0);
	 unit_cell->SetEdgeInFace(95, 2, 40, -1, -1, 0);

	 unit_cell->SetFace(96, 3);
	 unit_cell->SetEdgeInFace(96, 0, 142, 0, 0, 0);
	 unit_cell->SetEdgeInFace(96, 1, 3, -1, 0, -1);
	 unit_cell->SetEdgeInFace(96, 2, 69, -1, 0, -1);

	 unit_cell->SetFace(97, 3);
	 unit_cell->SetEdgeInFace(97, 0, 141, 0, 0, 0);
	 unit_cell->SetEdgeInFace(97, 1, 85, 0, 0, 0);
	 unit_cell->SetEdgeInFace(97, 2, 79, 0, 0, 0);

	 unit_cell->SetFace(98, 3);
	 unit_cell->SetEdgeInFace(98, 0, 129, 0, 0, 0);
	 unit_cell->SetEdgeInFace(98, 1, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(98, 2, 24, 0, 0, 0);

	 unit_cell->SetFace(99, 3);
	 unit_cell->SetEdgeInFace(99, 0, 122, 0, 0, 0);
	 unit_cell->SetEdgeInFace(99, 1, 63, 0, 0, 0);
	 unit_cell->SetEdgeInFace(99, 2, 60, 0, 0, 0);

	 unit_cell->SetFace(100, 3);
	 unit_cell->SetEdgeInFace(100, 0, 121, 0, 0, 0);
	 unit_cell->SetEdgeInFace(100, 1, 84, 0, 0, 0);
	 unit_cell->SetEdgeInFace(100, 2, 49, 0, 0, 0);

	 unit_cell->SetFace(101, 3);
	 unit_cell->SetEdgeInFace(101, 0, 137, 0, 1, 0);
	 unit_cell->SetEdgeInFace(101, 1, 25, 0, 0, 0);
	 unit_cell->SetEdgeInFace(101, 2, 29, 0, 0, 0);

	 unit_cell->SetFace(102, 3);
	 unit_cell->SetEdgeInFace(102, 0, 128, 0, 0, 0);
	 unit_cell->SetEdgeInFace(102, 1, 61, 0, -1, 0);
	 unit_cell->SetEdgeInFace(102, 2, 48, 0, -1, 0);

	 unit_cell->SetFace(103, 3);
	 unit_cell->SetEdgeInFace(103, 0, 140, 0, 0, 0);
	 unit_cell->SetEdgeInFace(103, 1, 93, 0, 0, -1);
	 unit_cell->SetEdgeInFace(103, 2, 77, 0, 0, -1);

	 unit_cell->SetFace(104, 3);
	 unit_cell->SetEdgeInFace(104, 0, 138, 0, 0, 0);
	 unit_cell->SetEdgeInFace(104, 1, 39, 0, 0, -1);
	 unit_cell->SetEdgeInFace(104, 2, 57, 0, 0, -1);

	 unit_cell->SetFace(105, 3);
	 unit_cell->SetEdgeInFace(105, 0, 127, 0, 0, 0);
	 unit_cell->SetEdgeInFace(105, 1, 23, 0, 0, -1);
	 unit_cell->SetEdgeInFace(105, 2, 58, 0, 0, -1);

	 unit_cell->SetFace(106, 3);
	 unit_cell->SetEdgeInFace(106, 0, 123, 0, 0, 0);
	 unit_cell->SetEdgeInFace(106, 1, 68, 0, 0, 0);
	 unit_cell->SetEdgeInFace(106, 2, 89, 0, 0, 0);

	 unit_cell->SetFace(107, 3);
	 unit_cell->SetEdgeInFace(107, 0, 139, 0, 0, 0);
	 unit_cell->SetEdgeInFace(107, 1, 22, 0, -1, 0);
	 unit_cell->SetEdgeInFace(107, 2, 59, 0, -1, 0);

	 unit_cell->SetFace(108, 3);
	 unit_cell->SetEdgeInFace(108, 0, 114, 0, 0, 0);
	 unit_cell->SetEdgeInFace(108, 1, 81, 0, 0, 0);
	 unit_cell->SetEdgeInFace(108, 2, 19, 0, 0, 0);

	 unit_cell->SetFace(109, 3);
	 unit_cell->SetEdgeInFace(109, 0, 108, 0, 0, 0);
	 unit_cell->SetEdgeInFace(109, 1, 55, 0, 0, 0);
	 unit_cell->SetEdgeInFace(109, 2, 82, 0, 0, 0);

	 unit_cell->SetFace(110, 3);
	 unit_cell->SetEdgeInFace(110, 0, 113, 0, 0, 0);
	 unit_cell->SetEdgeInFace(110, 1, 71, 0, 0, 1);
	 unit_cell->SetEdgeInFace(110, 2, 17, 0, 0, 1);

	 unit_cell->SetFace(111, 3);
	 unit_cell->SetEdgeInFace(111, 0, 124, 0, -1, 0);
	 unit_cell->SetEdgeInFace(111, 1, 88, 0, -1, 0);
	 unit_cell->SetEdgeInFace(111, 2, 18, 0, -1, 0);

	 unit_cell->SetFace(112, 3);
	 unit_cell->SetEdgeInFace(112, 0, 143, 0, 0, 0);
	 unit_cell->SetEdgeInFace(112, 1, 72, -1, 0, 0);
	 unit_cell->SetEdgeInFace(112, 2, 74, -1, 0, 0);

	 unit_cell->SetFace(113, 3);
	 unit_cell->SetEdgeInFace(113, 0, 105, 0, 0, 0);
	 unit_cell->SetEdgeInFace(113, 1, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(113, 2, 42, 0, 0, 0);

	 unit_cell->SetFace(114, 3);
	 unit_cell->SetEdgeInFace(114, 0, 106, 0, 0, 0);
	 unit_cell->SetEdgeInFace(114, 1, 64, 0, 0, -1);
	 unit_cell->SetEdgeInFace(114, 2, 73, 0, 0, -1);

	 unit_cell->SetFace(115, 3);
	 unit_cell->SetEdgeInFace(115, 0, 107, 0, 0, 0);
	 unit_cell->SetEdgeInFace(115, 1, 46, 0, 0, 0);
	 unit_cell->SetEdgeInFace(115, 2, 43, 0, 0, 0);

	 unit_cell->SetFace(116, 3);
	 unit_cell->SetEdgeInFace(116, 0, 117, -1, 0, -1);
	 unit_cell->SetEdgeInFace(116, 1, 7, -1, 0, -1);
	 unit_cell->SetEdgeInFace(116, 2, 3, -1, 0, -1);

	 unit_cell->SetFace(117, 3);
	 unit_cell->SetEdgeInFace(117, 0, 132, 0, 0, 0);
	 unit_cell->SetEdgeInFace(117, 1, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(117, 2, 6, 0, 0, 0);

	 unit_cell->SetFace(118, 3);
	 unit_cell->SetEdgeInFace(118, 0, 131, 0, 0, 1);
	 unit_cell->SetEdgeInFace(118, 1, 67, 0, 0, 0);
	 unit_cell->SetEdgeInFace(118, 2, 91, 0, 0, 0);

	 unit_cell->SetFace(119, 3);
	 unit_cell->SetEdgeInFace(119, 0, 115, 0, 0, 0);
	 unit_cell->SetEdgeInFace(119, 1, 87, 0, -1, 0);
	 unit_cell->SetEdgeInFace(119, 2, 31, 0, -1, 0);

	 unit_cell->SetFace(120, 3);
	 unit_cell->SetEdgeInFace(120, 0, 136, 0, 0, 0);
	 unit_cell->SetEdgeInFace(120, 1, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(120, 2, 1, 0, 0, 0);

	 unit_cell->SetFace(121, 3);
	 unit_cell->SetEdgeInFace(121, 0, 135, 0, 0, 0);
	 unit_cell->SetEdgeInFace(121, 1, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(121, 2, 47, 0, 0, 0);

	 unit_cell->SetFace(122, 3);
	 unit_cell->SetEdgeInFace(122, 0, 142, 0, 0, 0);
	 unit_cell->SetEdgeInFace(122, 1, 90, -1, 0, 0);
	 unit_cell->SetEdgeInFace(122, 2, 86, -1, 0, 0);

	 unit_cell->SetFace(123, 3);
	 unit_cell->SetEdgeInFace(123, 0, 133, -1, 0, 0);
	 unit_cell->SetEdgeInFace(123, 1, 20, -1, 0, 0);
	 unit_cell->SetEdgeInFace(123, 2, 70, -1, 0, 0);

	 unit_cell->SetFace(124, 3);
	 unit_cell->SetEdgeInFace(124, 0, 134, 0, 0, 0);
	 unit_cell->SetEdgeInFace(124, 1, 41, 0, 0, 0);
	 unit_cell->SetEdgeInFace(124, 2, 54, 0, 0, 0);

	 unit_cell->SetFace(125, 3);
	 unit_cell->SetEdgeInFace(125, 0, 109, 0, 0, 0);
	 unit_cell->SetEdgeInFace(125, 1, 83, -1, 0, 0);
	 unit_cell->SetEdgeInFace(125, 2, 38, -1, 0, 0);

	 unit_cell->SetFace(126, 3);
	 unit_cell->SetEdgeInFace(126, 0, 110, 0, 0, 0);
	 unit_cell->SetEdgeInFace(126, 1, 80, 0, 0, -1);
	 unit_cell->SetEdgeInFace(126, 2, 37, 0, 0, -1);

	 unit_cell->SetFace(127, 3);
	 unit_cell->SetEdgeInFace(127, 0, 96, 0, 0, 0);
	 unit_cell->SetEdgeInFace(127, 1, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(127, 2, 53, 0, 0, 0);

	 unit_cell->SetFace(128, 3);
	 unit_cell->SetEdgeInFace(128, 0, 99, 0, 0, 0);
	 unit_cell->SetEdgeInFace(128, 1, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(128, 2, 26, 0, 0, 0);

	 unit_cell->SetFace(129, 3);
	 unit_cell->SetEdgeInFace(129, 0, 97, 0, 0, 0);
	 unit_cell->SetEdgeInFace(129, 1, 78, 0, 1, 0);
	 unit_cell->SetEdgeInFace(129, 2, 10, 0, 1, 0);

	 unit_cell->SetFace(130, 3);
	 unit_cell->SetEdgeInFace(130, 0, 103, 0, 0, 0);
	 unit_cell->SetEdgeInFace(130, 1, 76, 0, 0, 0);
	 unit_cell->SetEdgeInFace(130, 2, 14, 0, 0, 0);

	 unit_cell->SetFace(131, 3);
	 unit_cell->SetEdgeInFace(131, 0, 101, 0, 0, 0);
	 unit_cell->SetEdgeInFace(131, 1, 62, 0, 1, 0);
	 unit_cell->SetEdgeInFace(131, 2, 12, 0, 1, 0);

	 unit_cell->SetFace(132, 3);
	 unit_cell->SetEdgeInFace(132, 0, 126, 0, 0, 0);
	 unit_cell->SetEdgeInFace(132, 1, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(132, 2, 21, 0, 0, 0);

	 unit_cell->SetFace(133, 3);
	 unit_cell->SetEdgeInFace(133, 0, 125, 0, 0, 0);
	 unit_cell->SetEdgeInFace(133, 1, 94, 0, 0, 1);
	 unit_cell->SetEdgeInFace(133, 2, 56, 0, 0, 1);

	 unit_cell->SetFace(134, 3);
	 unit_cell->SetEdgeInFace(134, 0, 118, 0, 0, 0);
	 unit_cell->SetEdgeInFace(134, 1, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(134, 2, 0, 0, 0, 0);

	 unit_cell->SetFace(135, 3);
	 unit_cell->SetEdgeInFace(135, 0, 104, 0, 0, 0);
	 unit_cell->SetEdgeInFace(135, 1, 35, 0, 0, 0);
	 unit_cell->SetEdgeInFace(135, 2, 75, 0, 0, 0);

	 unit_cell->SetFace(136, 3);
	 unit_cell->SetEdgeInFace(136, 0, 119, 0, 0, 0);
	 unit_cell->SetEdgeInFace(136, 1, 45, 0, -1, -1);
	 unit_cell->SetEdgeInFace(136, 2, 33, 0, -1, -1);

	 unit_cell->SetFace(137, 3);
	 unit_cell->SetEdgeInFace(137, 0, 112, -1, -1, 0);
	 unit_cell->SetEdgeInFace(137, 1, 36, -1, -1, 0);
	 unit_cell->SetEdgeInFace(137, 2, 40, -1, -1, 0);

	 unit_cell->SetFace(138, 3);
	 unit_cell->SetEdgeInFace(138, 0, 111, -1, 1, 0);
	 unit_cell->SetEdgeInFace(138, 1, 95, -1, 0, -1);
	 unit_cell->SetEdgeInFace(138, 2, 69, -1, 0, -1);

	 unit_cell->SetFace(139, 3);
	 unit_cell->SetEdgeInFace(139, 0, 100, 0, 0, 0);
	 unit_cell->SetEdgeInFace(139, 1, 27, 0, 0, 0);
	 unit_cell->SetEdgeInFace(139, 2, 15, 0, 0, 0);

	 unit_cell->SetFace(140, 3);
	 unit_cell->SetEdgeInFace(140, 0, 102, 0, 0, 0);
	 unit_cell->SetEdgeInFace(140, 1, 50, -1, 0, 0);
	 unit_cell->SetEdgeInFace(140, 2, 13, -1, 0, 0);

	 unit_cell->SetFace(141, 3);
	 unit_cell->SetEdgeInFace(141, 0, 98, 0, 0, 0);
	 unit_cell->SetEdgeInFace(141, 1, 51, -1, 0, -1);
	 unit_cell->SetEdgeInFace(141, 2, 11, -1, 0, -1);

	 unit_cell->SetFace(142, 3);
	 unit_cell->SetEdgeInFace(142, 0, 120, 0, 0, 0);
	 unit_cell->SetEdgeInFace(142, 1, 65, 1, 0, 0);
	 unit_cell->SetEdgeInFace(142, 2, 34, 1, 0, 0);

	 unit_cell->SetFace(143, 3);
	 unit_cell->SetEdgeInFace(143, 0, 116, 0, 0, 0);
	 unit_cell->SetEdgeInFace(143, 1, 66, 1, 0, 0);
	 unit_cell->SetEdgeInFace(143, 2, 32, 1, 0, 0);

	 return unit_cell;
}
