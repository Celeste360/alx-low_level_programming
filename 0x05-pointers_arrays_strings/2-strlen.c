#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @a: input string
 * Return: length of a string
 */
int _strlen(char *a)
{
	int count = 0;

	while (*(a + count) != '\0')
		count++;
	return (count);
}
