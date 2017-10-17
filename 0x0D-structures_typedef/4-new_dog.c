#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *, char *);
int _strlen(char *);

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *new_name, *new_owner;

	new = malloc(sizeof(dog_t));
	new_name = malloc((_strlen(name) + 1) * sizeof(char));
	new_owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	if (new_name == NULL)
		return (NULL);
	if (new_owner == NULL)
		return (NULL);
	new->name = _strcpy(new_name, name);
	new->age = age;
	new->owner = _strcpy(new_owner, owner);
	return (new);
}

/**
 * _strlen - count string length
 * @s: first address of strsng array
 * Return: lenghth of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

/**
 * _strcpy - copy string
 * @dest: string name
 * @src: string to be copied
 * Return: destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
