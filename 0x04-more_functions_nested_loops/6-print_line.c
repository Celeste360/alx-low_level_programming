#include "main.h"

/**
 * print_line - prints straight line x times
 * @x: number of times straight line is printed
 * Return: no returm
 */
void print_line(int x)
{
	int i;

	for (i = 0; i < x; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
