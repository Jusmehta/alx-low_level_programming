#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - to initialize a variable of dog struct
 * @d: the structure
 * @name: dog's name
 * @age: its age
 * @owner: dog's owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
