#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @x: input pointer
 * Return: no return
 */
void print_chessboard(char (*x)[8])
{
	unsigned int i, m = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			m = i;
			_putchar('\n');
		}
		_putchar(x[i / 8][i - m]);
	}
	_putchar('\n');
}
