#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @c: struct dog
 *
 * Return: no return
 */
void free_dog(dog_t *c)
{
	if (c)
	{
		free(c->name);
		free(c->owner);
		free(c);
	}
}
