#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @a: memory area
 * @b: constant byte
 * @n: byte filled
 * Return: the pointer to dest
 */
char *_memset(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(a + i) = b;

	return (a);
}
