#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free malloc memory
 * @d: struct dog
 * Return: 0
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
