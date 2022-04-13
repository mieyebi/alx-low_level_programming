#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 * @name: name
 * @age: age
 * @owner:  owner
 * Description: dog struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
