#include <stdio.h>
#include "dog.h"

/**
* init_dog - initializes the struct variables
* @d: pointer to array
* @name: dog name
* @age:  age
* @owner: dog owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
