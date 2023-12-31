#include "main.h"
/**
 * reverse_array - reverse the content of an array
 * of integers
 * @x: array
 * @n: number of elements of the array
 * Return: no return
 */

void reverse_array(int *x, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(x + j);
			*(x + j) = *(x + (j - 1));
			*(x + (j - 1)) = temp;
		}
	}
}
