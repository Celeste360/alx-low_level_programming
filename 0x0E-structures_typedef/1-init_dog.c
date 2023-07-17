#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @c: struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: no return
 */
void init_dog(struct dog *c, char *name, float age, char *owner)
{
	if (c)
	{
		c->name = name;
		c->age = age;
		c->owner = owner;
	}
}
