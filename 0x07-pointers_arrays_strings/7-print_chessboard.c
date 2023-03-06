#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: an array input to print
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while(i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j++]);
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
