#include "holberton.h"

/**
 * _strpbrk - first occurence in string from a set of char
 * @s: source string
 * @accept: char to be compared
 * Return: s - the matched bytes in the string
 *         NULL - no match found
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	for ( ; *s != 0; s++)
	{
		for ( ; *accept != 0; ) 
			if (*accept == *s)
				*temp = *s;
			else
				accept++;
		return (s);
	}
	return ("");
}
