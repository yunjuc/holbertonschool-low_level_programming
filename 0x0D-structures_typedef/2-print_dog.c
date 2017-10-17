#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print type struct dog
 * @d: struct dog
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)\n");
	else if (d->name == NULL)
		printf("Name: (nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
