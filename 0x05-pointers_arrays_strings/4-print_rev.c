#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @x: input string
 * Return: no retun
 */
void print_rev(char *x)
{
	int count = 0;

	while (count >= 0)
	{
		if (x[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(x[count]);
	_putchar('\n');
}
