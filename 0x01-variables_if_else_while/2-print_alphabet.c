#include <stdio.h>

/**
 * main - main block
 * Description: Use 'putchar' function to print the alphabet in lowercase.
 * Return: Always 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= '2'; low++)
		putchar(low);
	        putchar('\n');

	return (0);
}
