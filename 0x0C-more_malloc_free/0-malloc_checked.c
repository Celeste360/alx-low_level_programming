#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @a: amount of bytes
 *
 * Return: pointer to the allocated memory
 * if malloc fails, status value is equal to 98
 */
void *malloc_checked(unsigned int a)
{
	char *p;

	p = malloc(a);
	if (p == NULL)
		exit(98);
	return (p);
}
