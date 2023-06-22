#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @b: The number to be checked
 *
 * Return: 1 for uppercase or o if otherwise
 */
int _isupper(int b)
{
	if (b >= 65 && b <= 90)
	{
		return (1);
	}

	return (0);
}
