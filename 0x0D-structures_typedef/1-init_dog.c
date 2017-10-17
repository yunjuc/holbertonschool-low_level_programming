#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize variable for type struct dog
 * @d: new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL);
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
