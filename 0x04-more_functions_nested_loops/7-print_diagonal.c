#include "main.h"

/**
 * print_diagonal - prints diagonal line x times
 * @x: number of times diagonal line is printed
 * Return: no return
 */
void print_diagonal(int x)
{
	int i, j;

	for (i = 0; i < x; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (x - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
