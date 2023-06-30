#include "main.h"
/**
 *  * leet - encodes a string into 1337
 *  @a: input string
 *  Return: the pointer to dest
 */

char *leet(char *a)
{
	int count = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int number [] = {52, 51, 48, 55, 49};

	while (*(a + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(a + count) == low_letters[i] || *(a + count) == upp_letters[i])
			{
				*(a + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (a);
}
