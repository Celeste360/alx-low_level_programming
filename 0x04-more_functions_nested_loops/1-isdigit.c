#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9
 * @x: input number
 * Return: 1 if its a number between 0 to 9, 0 if otherwise
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
