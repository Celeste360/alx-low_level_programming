#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @a: bytes filled
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int a)
{
	unsigned int i;

	for (i = 0; i < a; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
