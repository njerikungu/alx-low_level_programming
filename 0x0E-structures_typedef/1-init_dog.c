#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - struct type
 * @d: pointer
 * @name: member for name
 * @age: member for age
 * @owner: member for owner
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
