#include "../../src/include/UnitCell.h"

UnitCell *_UnitCell() {
	 UnitCell *unit_cell = new UnitCell("swl", 16, 56, 56);

	 // vertex 0 located at (0.125, 0.125, 0.49103)
	 // vertex 1 located at (0.125, 0.125, 0.7589699999999999)
	 // vertex 2 located at (0.875, 0.875, 0.5089699999999999)
	 // vertex 3 located at (0.875, 0.875, 0.24103000000000002)
	 // vertex 4 located at (0.125, 0.625, 0.9910300000000001)
	 // vertex 5 located at (0.125, 0.625, 0.25897)
	 // vertex 6 located at (0.875, 0.375, 0.008969999999999978)
	 // vertex 7 located at (0.875, 0.375, 0.7410300000000001)
	 // vertex 8 located at (0.625, 0.125, 0.9910300000000001)
	 // vertex 9 located at (0.625, 0.125, 0.25897)
	 // vertex 10 located at (0.375, 0.875, 0.008969999999999978)
	 // vertex 11 located at (0.375, 0.875, 0.7410300000000001)
	 // vertex 12 located at (0.625, 0.625, 0.49103)
	 // vertex 13 located at (0.625, 0.625, 0.7589699999999999)
	 // vertex 14 located at (0.375, 0.375, 0.5089699999999999)
	 // vertex 15 located at (0.375, 0.375, 0.24103000000000002)

	 unit_cell->SetEdge(0, 0, 14, 0, 0, 0);
	 unit_cell->SetEdge(1, 0, 2, -1, -1, 0);
	 unit_cell->SetEdge(2, 1, 11, 0, -1, 0);
	 unit_cell->SetEdge(3, 1, 7, -1, 0, 0);
	 unit_cell->SetEdge(4, 2, 12, 0, 0, 0);
	 unit_cell->SetEdge(5, 3, 9, 0, 1, 0);
	 unit_cell->SetEdge(6, 3, 5, 1, 0, 0);
	 unit_cell->SetEdge(7, 4, 10, 0, 0, 1);
	 unit_cell->SetEdge(8, 4, 6, -1, 0, 1);
	 unit_cell->SetEdge(9, 5, 15, 0, 0, 0);
	 unit_cell->SetEdge(10, 6, 8, 0, 0, -1);
	 unit_cell->SetEdge(11, 7, 13, 0, 0, 0);
	 unit_cell->SetEdge(12, 8, 10, 0, -1, 1);
	 unit_cell->SetEdge(13, 9, 15, 0, 0, 0);
	 unit_cell->SetEdge(14, 11, 13, 0, 0, 0);
	 unit_cell->SetEdge(15, 12, 14, 0, 0, 0);
	 unit_cell->SetEdge(16, 0, 1, 0, 0, 0);
	 unit_cell->SetEdge(17, 2, 3, 0, 0, 0);
	 unit_cell->SetEdge(18, 4, 5, 0, 0, 1);
	 unit_cell->SetEdge(19, 6, 7, 0, 0, -1);
	 unit_cell->SetEdge(20, 8, 9, 0, 0, 1);
	 unit_cell->SetEdge(21, 10, 11, 0, 0, -1);
	 unit_cell->SetEdge(22, 12, 13, 0, 0, 0);
	 unit_cell->SetEdge(23, 14, 15, 0, 0, 0);
	 unit_cell->SetEdge(24, 0, 9, 0, 0, 0);
	 unit_cell->SetEdge(25, 0, 9, -1, 0, 0);
	 unit_cell->SetEdge(26, 1, 8, 0, 0, 0);
	 unit_cell->SetEdge(27, 1, 8, -1, 0, 0);
	 unit_cell->SetEdge(28, 2, 11, 0, 0, 0);
	 unit_cell->SetEdge(29, 2, 11, 1, 0, 0);
	 unit_cell->SetEdge(30, 3, 10, 0, 0, 0);
	 unit_cell->SetEdge(31, 3, 10, 1, 0, 0);
	 unit_cell->SetEdge(32, 4, 13, 0, 0, 0);
	 unit_cell->SetEdge(33, 4, 13, -1, 0, 0);
	 unit_cell->SetEdge(34, 5, 12, 0, 0, 0);
	 unit_cell->SetEdge(35, 5, 12, -1, 0, 0);
	 unit_cell->SetEdge(36, 6, 15, 0, 0, 0);
	 unit_cell->SetEdge(37, 6, 15, 1, 0, 0);
	 unit_cell->SetEdge(38, 7, 14, 0, 0, 0);
	 unit_cell->SetEdge(39, 7, 14, 1, 0, 0);
	 unit_cell->SetEdge(40, 0, 0, 1, 0, 0);
	 unit_cell->SetEdge(41, 1, 1, 1, 0, 0);
	 unit_cell->SetEdge(42, 2, 2, -1, 0, 0);
	 unit_cell->SetEdge(43, 3, 3, -1, 0, 0);
	 unit_cell->SetEdge(44, 4, 4, 1, 0, 0);
	 unit_cell->SetEdge(45, 5, 5, 1, 0, 0);
	 unit_cell->SetEdge(46, 6, 6, -1, 0, 0);
	 unit_cell->SetEdge(47, 7, 7, -1, 0, 0);
	 unit_cell->SetEdge(48, 8, 8, 1, 0, 0);
	 unit_cell->SetEdge(49, 9, 9, 1, 0, 0);
	 unit_cell->SetEdge(50, 10, 10, -1, 0, 0);
	 unit_cell->SetEdge(51, 11, 11, -1, 0, 0);
	 unit_cell->SetEdge(52, 12, 12, 1, 0, 0);
	 unit_cell->SetEdge(53, 13, 13, 1, 0, 0);
	 unit_cell->SetEdge(54, 14, 14, -1, 0, 0);
	 unit_cell->SetEdge(55, 15, 15, -1, 0, 0);

	 unit_cell->SetFace(0, 3);
	 unit_cell->SetEdgeInFace(0, 0, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(0, 1, 51, 1, 0, 0);
	 unit_cell->SetEdgeInFace(0, 2, 29, 0, 0, 0);

	 unit_cell->SetFace(1, 4);
	 unit_cell->SetEdgeInFace(1, 0, 1, 1, 1, 0);
	 unit_cell->SetEdgeInFace(1, 1, 16, 1, 1, 0);
	 unit_cell->SetEdgeInFace(1, 2, 2, 1, 1, 0);
	 unit_cell->SetEdgeInFace(1, 3, 29, 0, 0, 0);

	 unit_cell->SetFace(2, 4);
	 unit_cell->SetEdgeInFace(2, 0, 1, 1, 1, 0);
	 unit_cell->SetEdgeInFace(2, 1, 40, 1, 1, 0);
	 unit_cell->SetEdgeInFace(2, 2, 1, 2, 1, 0);
	 unit_cell->SetEdgeInFace(2, 3, 42, 1, 0, 0);

	 unit_cell->SetFace(3, 4);
	 unit_cell->SetEdgeInFace(3, 0, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(3, 1, 43, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 2, 17, 1, 0, 0);
	 unit_cell->SetEdgeInFace(3, 3, 42, 1, 0, 0);

	 unit_cell->SetFace(4, 3);
	 unit_cell->SetEdgeInFace(4, 0, 38, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 1, 47, 0, 0, 0);
	 unit_cell->SetEdgeInFace(4, 2, 39, -1, 0, 0);

	 unit_cell->SetFace(5, 3);
	 unit_cell->SetEdgeInFace(5, 0, 38, 0, 0, 0);
	 unit_cell->SetEdgeInFace(5, 1, 54, 1, 0, 0);
	 unit_cell->SetEdgeInFace(5, 2, 39, 0, 0, 0);

	 unit_cell->SetFace(6, 3);
	 unit_cell->SetEdgeInFace(6, 0, 28, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 1, 42, 0, 0, 0);
	 unit_cell->SetEdgeInFace(6, 2, 29, -1, 0, 0);

	 unit_cell->SetFace(7, 3);
	 unit_cell->SetEdgeInFace(7, 0, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(7, 1, 49, -1, 0, 0);
	 unit_cell->SetEdgeInFace(7, 2, 25, 0, 0, 0);

	 unit_cell->SetFace(8, 3);
	 unit_cell->SetEdgeInFace(8, 0, 34, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 1, 45, 0, 0, 0);
	 unit_cell->SetEdgeInFace(8, 2, 35, 1, 0, 0);

	 unit_cell->SetFace(9, 3);
	 unit_cell->SetEdgeInFace(9, 0, 34, 0, 0, 0);
	 unit_cell->SetEdgeInFace(9, 1, 52, -1, 0, 0);
	 unit_cell->SetEdgeInFace(9, 2, 35, 0, 0, 0);

	 unit_cell->SetFace(10, 3);
	 unit_cell->SetEdgeInFace(10, 0, 24, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 1, 40, 0, 0, 0);
	 unit_cell->SetEdgeInFace(10, 2, 25, 1, 0, 0);

	 unit_cell->SetFace(11, 3);
	 unit_cell->SetEdgeInFace(11, 0, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(11, 1, 55, 1, 0, 0);
	 unit_cell->SetEdgeInFace(11, 2, 37, 0, 0, 0);

	 unit_cell->SetFace(12, 3);
	 unit_cell->SetEdgeInFace(12, 0, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 1, 43, 0, 0, 0);
	 unit_cell->SetEdgeInFace(12, 2, 31, -1, 0, 0);

	 unit_cell->SetFace(13, 3);
	 unit_cell->SetEdgeInFace(13, 0, 30, 0, 0, 0);
	 unit_cell->SetEdgeInFace(13, 1, 50, 1, 0, 0);
	 unit_cell->SetEdgeInFace(13, 2, 31, 0, 0, 0);

	 unit_cell->SetFace(14, 3);
	 unit_cell->SetEdgeInFace(14, 0, 36, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 1, 46, 0, 0, 0);
	 unit_cell->SetEdgeInFace(14, 2, 37, -1, 0, 0);

	 unit_cell->SetFace(15, 3);
	 unit_cell->SetEdgeInFace(15, 0, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(15, 1, 53, -1, 0, 0);
	 unit_cell->SetEdgeInFace(15, 2, 33, 0, 0, 0);

	 unit_cell->SetFace(16, 3);
	 unit_cell->SetEdgeInFace(16, 0, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 1, 41, 0, 0, 0);
	 unit_cell->SetEdgeInFace(16, 2, 27, 1, 0, 0);

	 unit_cell->SetFace(17, 3);
	 unit_cell->SetEdgeInFace(17, 0, 26, 0, 0, 0);
	 unit_cell->SetEdgeInFace(17, 1, 48, -1, 0, 0);
	 unit_cell->SetEdgeInFace(17, 2, 27, 0, 0, 0);

	 unit_cell->SetFace(18, 3);
	 unit_cell->SetEdgeInFace(18, 0, 32, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 1, 44, 0, 0, 0);
	 unit_cell->SetEdgeInFace(18, 2, 33, 1, 0, 0);

	 unit_cell->SetFace(19, 4);
	 unit_cell->SetEdgeInFace(19, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 1, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 2, 3, 0, 0, 0);
	 unit_cell->SetEdgeInFace(19, 3, 39, -1, 0, 0);

	 unit_cell->SetFace(20, 4);
	 unit_cell->SetEdgeInFace(20, 0, 1, 0, 0, 0);
	 unit_cell->SetEdgeInFace(20, 1, 17, -1, -1, 0);
	 unit_cell->SetEdgeInFace(20, 2, 5, -1, -1, 0);
	 unit_cell->SetEdgeInFace(20, 3, 25, 0, 0, 0);

	 unit_cell->SetFace(21, 4);
	 unit_cell->SetEdgeInFace(21, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 1, 17, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 2, 6, 0, 0, 0);
	 unit_cell->SetEdgeInFace(21, 3, 35, 1, 0, 0);

	 unit_cell->SetFace(22, 4);
	 unit_cell->SetEdgeInFace(22, 0, 8, 1, 0, -1);
	 unit_cell->SetEdgeInFace(22, 1, 18, 1, 0, -1);
	 unit_cell->SetEdgeInFace(22, 2, 9, 1, 0, 0);
	 unit_cell->SetEdgeInFace(22, 3, 37, 0, 0, 0);

	 unit_cell->SetFace(23, 4);
	 unit_cell->SetEdgeInFace(23, 0, 7, 0, 0, -1);
	 unit_cell->SetEdgeInFace(23, 1, 18, 0, 0, -1);
	 unit_cell->SetEdgeInFace(23, 2, 6, -1, 0, 0);
	 unit_cell->SetEdgeInFace(23, 3, 31, -1, 0, 0);

	 unit_cell->SetFace(24, 4);
	 unit_cell->SetEdgeInFace(24, 0, 8, 0, 0, 0);
	 unit_cell->SetEdgeInFace(24, 1, 19, -1, 0, 1);
	 unit_cell->SetEdgeInFace(24, 2, 11, -1, 0, 0);
	 unit_cell->SetEdgeInFace(24, 3, 33, 0, 0, 0);

	 unit_cell->SetFace(25, 4);
	 unit_cell->SetEdgeInFace(25, 0, 10, 0, 0, 1);
	 unit_cell->SetEdgeInFace(25, 1, 19, 0, 0, 1);
	 unit_cell->SetEdgeInFace(25, 2, 3, 1, 0, 0);
	 unit_cell->SetEdgeInFace(25, 3, 27, 1, 0, 0);

	 unit_cell->SetFace(26, 4);
	 unit_cell->SetEdgeInFace(26, 0, 12, 0, 1, -1);
	 unit_cell->SetEdgeInFace(26, 1, 20, 0, 1, -1);
	 unit_cell->SetEdgeInFace(26, 2, 5, 0, 0, 0);
	 unit_cell->SetEdgeInFace(26, 3, 30, 0, 0, 0);

	 unit_cell->SetFace(27, 4);
	 unit_cell->SetEdgeInFace(27, 0, 10, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 1, 20, 0, 0, -1);
	 unit_cell->SetEdgeInFace(27, 2, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(27, 3, 36, 0, 0, 0);

	 unit_cell->SetFace(28, 4);
	 unit_cell->SetEdgeInFace(28, 0, 12, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 1, 21, 0, -1, 1);
	 unit_cell->SetEdgeInFace(28, 2, 2, 0, 0, 0);
	 unit_cell->SetEdgeInFace(28, 3, 26, 0, 0, 0);

	 unit_cell->SetFace(29, 4);
	 unit_cell->SetEdgeInFace(29, 0, 7, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 1, 21, 0, 0, 1);
	 unit_cell->SetEdgeInFace(29, 2, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(29, 3, 32, 0, 0, 0);

	 unit_cell->SetFace(30, 4);
	 unit_cell->SetEdgeInFace(30, 0, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 1, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 2, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(30, 3, 38, 0, 0, 0);

	 unit_cell->SetFace(31, 4);
	 unit_cell->SetEdgeInFace(31, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 1, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 2, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(31, 3, 28, 0, 0, 0);

	 unit_cell->SetFace(32, 4);
	 unit_cell->SetEdgeInFace(32, 0, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 1, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 2, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(32, 3, 34, 0, 0, 0);

	 unit_cell->SetFace(33, 4);
	 unit_cell->SetEdgeInFace(33, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(33, 1, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(33, 2, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(33, 3, 24, 0, 0, 0);

	 unit_cell->SetFace(34, 4);
	 unit_cell->SetEdgeInFace(34, 0, 0, 0, 0, 0);
	 unit_cell->SetEdgeInFace(34, 1, 40, -1, 0, 0);
	 unit_cell->SetEdgeInFace(34, 2, 0, -1, 0, 0);
	 unit_cell->SetEdgeInFace(34, 3, 54, 0, 0, 0);

	 unit_cell->SetFace(35, 4);
	 unit_cell->SetEdgeInFace(35, 0, 3, 1, 0, 0);
	 unit_cell->SetEdgeInFace(35, 1, 41, 1, 0, 0);
	 unit_cell->SetEdgeInFace(35, 2, 3, 2, 0, 0);
	 unit_cell->SetEdgeInFace(35, 3, 47, 1, 0, 0);

	 unit_cell->SetFace(36, 4);
	 unit_cell->SetEdgeInFace(36, 0, 2, 0, 1, 0);
	 unit_cell->SetEdgeInFace(36, 1, 41, -1, 1, 0);
	 unit_cell->SetEdgeInFace(36, 2, 2, -1, 1, 0);
	 unit_cell->SetEdgeInFace(36, 3, 51, 0, 0, 0);

	 unit_cell->SetFace(37, 4);
	 unit_cell->SetEdgeInFace(37, 0, 4, 0, 0, 0);
	 unit_cell->SetEdgeInFace(37, 1, 42, 1, 0, 0);
	 unit_cell->SetEdgeInFace(37, 2, 4, 1, 0, 0);
	 unit_cell->SetEdgeInFace(37, 3, 52, 0, 0, 0);

	 unit_cell->SetFace(38, 4);
	 unit_cell->SetEdgeInFace(38, 0, 6, -1, 0, 0);
	 unit_cell->SetEdgeInFace(38, 1, 43, -1, 0, 0);
	 unit_cell->SetEdgeInFace(38, 2, 6, -2, 0, 0);
	 unit_cell->SetEdgeInFace(38, 3, 45, -1, 0, 0);

	 unit_cell->SetFace(39, 4);
	 unit_cell->SetEdgeInFace(39, 0, 5, 0, -1, 0);
	 unit_cell->SetEdgeInFace(39, 1, 43, 1, -1, 0);
	 unit_cell->SetEdgeInFace(39, 2, 5, 1, -1, 0);
	 unit_cell->SetEdgeInFace(39, 3, 49, 0, 0, 0);

	 unit_cell->SetFace(40, 4);
	 unit_cell->SetEdgeInFace(40, 0, 8, 1, 0, -1);
	 unit_cell->SetEdgeInFace(40, 1, 44, 1, 0, -1);
	 unit_cell->SetEdgeInFace(40, 2, 8, 2, 0, -1);
	 unit_cell->SetEdgeInFace(40, 3, 46, 1, 0, 0);

	 unit_cell->SetFace(41, 4);
	 unit_cell->SetEdgeInFace(41, 0, 7, 0, 0, -1);
	 unit_cell->SetEdgeInFace(41, 1, 44, -1, 0, -1);
	 unit_cell->SetEdgeInFace(41, 2, 7, -1, 0, -1);
	 unit_cell->SetEdgeInFace(41, 3, 50, 0, 0, 0);

	 unit_cell->SetFace(42, 4);
	 unit_cell->SetEdgeInFace(42, 0, 9, 0, 0, 0);
	 unit_cell->SetEdgeInFace(42, 1, 45, -1, 0, 0);
	 unit_cell->SetEdgeInFace(42, 2, 9, -1, 0, 0);
	 unit_cell->SetEdgeInFace(42, 3, 55, 0, 0, 0);

	 unit_cell->SetFace(43, 4);
	 unit_cell->SetEdgeInFace(43, 0, 10, 0, 0, 1);
	 unit_cell->SetEdgeInFace(43, 1, 46, 1, 0, 1);
	 unit_cell->SetEdgeInFace(43, 2, 10, 1, 0, 1);
	 unit_cell->SetEdgeInFace(43, 3, 48, 0, 0, 0);

	 unit_cell->SetFace(44, 4);
	 unit_cell->SetEdgeInFace(44, 0, 11, 0, 0, 0);
	 unit_cell->SetEdgeInFace(44, 1, 47, 1, 0, 0);
	 unit_cell->SetEdgeInFace(44, 2, 11, 1, 0, 0);
	 unit_cell->SetEdgeInFace(44, 3, 53, 0, 0, 0);

	 unit_cell->SetFace(45, 4);
	 unit_cell->SetEdgeInFace(45, 0, 12, 0, 1, -1);
	 unit_cell->SetEdgeInFace(45, 1, 48, 0, 1, -1);
	 unit_cell->SetEdgeInFace(45, 2, 12, 1, 1, -1);
	 unit_cell->SetEdgeInFace(45, 3, 50, 1, 0, 0);

	 unit_cell->SetFace(46, 4);
	 unit_cell->SetEdgeInFace(46, 0, 13, 0, 0, 0);
	 unit_cell->SetEdgeInFace(46, 1, 49, 0, 0, 0);
	 unit_cell->SetEdgeInFace(46, 2, 13, 1, 0, 0);
	 unit_cell->SetEdgeInFace(46, 3, 55, 1, 0, 0);

	 unit_cell->SetFace(47, 4);
	 unit_cell->SetEdgeInFace(47, 0, 14, 0, 0, 0);
	 unit_cell->SetEdgeInFace(47, 1, 51, 0, 0, 0);
	 unit_cell->SetEdgeInFace(47, 2, 14, -1, 0, 0);
	 unit_cell->SetEdgeInFace(47, 3, 53, -1, 0, 0);

	 unit_cell->SetFace(48, 4);
	 unit_cell->SetEdgeInFace(48, 0, 15, 0, 0, 0);
	 unit_cell->SetEdgeInFace(48, 1, 52, 0, 0, 0);
	 unit_cell->SetEdgeInFace(48, 2, 15, 1, 0, 0);
	 unit_cell->SetEdgeInFace(48, 3, 54, 1, 0, 0);

	 unit_cell->SetFace(49, 4);
	 unit_cell->SetEdgeInFace(49, 0, 23, 0, 0, 0);
	 unit_cell->SetEdgeInFace(49, 1, 55, 0, 0, 0);
	 unit_cell->SetEdgeInFace(49, 2, 23, -1, 0, 0);
	 unit_cell->SetEdgeInFace(49, 3, 54, 0, 0, 0);

	 unit_cell->SetFace(50, 4);
	 unit_cell->SetEdgeInFace(50, 0, 19, 0, 0, 1);
	 unit_cell->SetEdgeInFace(50, 1, 46, 1, 0, 1);
	 unit_cell->SetEdgeInFace(50, 2, 19, 1, 0, 1);
	 unit_cell->SetEdgeInFace(50, 3, 47, 1, 0, 0);

	 unit_cell->SetFace(51, 4);
	 unit_cell->SetEdgeInFace(51, 0, 21, 0, 0, 1);
	 unit_cell->SetEdgeInFace(51, 1, 50, 0, 0, 1);
	 unit_cell->SetEdgeInFace(51, 2, 21, -1, 0, 1);
	 unit_cell->SetEdgeInFace(51, 3, 51, 0, 0, 0);

	 unit_cell->SetFace(52, 4);
	 unit_cell->SetEdgeInFace(52, 0, 16, 0, 0, 0);
	 unit_cell->SetEdgeInFace(52, 1, 41, -1, 0, 0);
	 unit_cell->SetEdgeInFace(52, 2, 16, -1, 0, 0);
	 unit_cell->SetEdgeInFace(52, 3, 40, -1, 0, 0);

	 unit_cell->SetFace(53, 4);
	 unit_cell->SetEdgeInFace(53, 0, 22, 0, 0, 0);
	 unit_cell->SetEdgeInFace(53, 1, 53, 0, 0, 0);
	 unit_cell->SetEdgeInFace(53, 2, 22, 1, 0, 0);
	 unit_cell->SetEdgeInFace(53, 3, 52, 0, 0, 0);

	 unit_cell->SetFace(54, 4);
	 unit_cell->SetEdgeInFace(54, 0, 18, 0, 0, -1);
	 unit_cell->SetEdgeInFace(54, 1, 44, -1, 0, -1);
	 unit_cell->SetEdgeInFace(54, 2, 18, -1, 0, -1);
	 unit_cell->SetEdgeInFace(54, 3, 45, -1, 0, 0);

	 unit_cell->SetFace(55, 4);
	 unit_cell->SetEdgeInFace(55, 0, 20, 0, 0, -1);
	 unit_cell->SetEdgeInFace(55, 1, 48, 0, 0, -1);
	 unit_cell->SetEdgeInFace(55, 2, 20, 1, 0, -1);
	 unit_cell->SetEdgeInFace(55, 3, 49, 0, 0, 0);

	 return unit_cell;
}
