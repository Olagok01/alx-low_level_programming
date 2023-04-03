#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: the chessboard printed out
 */

void print_chessboard(char (*a)[8])
{
	int row_of_board;
	int column_of_board;

	for (row_of_board = 0; row_of_board < 8; row_of_board++)
	{
		for (column_of_board = 0; column_of_board < 8; column_of_board++)
		{
			_putchar(a[row_of_board][column_of_board]);
		}
		_putchar('\n');
	}
}
