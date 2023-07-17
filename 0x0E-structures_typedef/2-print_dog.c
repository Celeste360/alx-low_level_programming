#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @c: struct dog
 *
 * Return: no return
 */
void print_dog(struct dog *c)
{
	if (c)
	{
		if (!(c->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", c->name);

		printf("Age: %f\n", c->age);

		if (!(c->owner))
			printf("Owner: (nil)\n");
		else
			printf("owner: %s\n", c->owner);
	}
}
