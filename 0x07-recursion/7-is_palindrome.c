#include "holberton.h"

int _strlen(char *);
int checker(char *, char *);

/**
 * is_palindrome - check if a string is palindrome
 * @s: string to be checked
 * Return: 1 - is palindrome
 *         0 - not palindrome
 */
int is_palindrome(char *s)
{
	if (_strlen(s) <= 1)
		return (0);
	return (checker(s, s + _strlen(s) - 1));
}

/**
 * checker - check if first and last letters are the same
 * @s: begining of string
 * @p: end of string
 * Return: 1 - is the same
 *         0 - not the same
 */
int checker(char *s, char *p)
{
	if (*s != *p)
		return (0);
	if (*s == *p && s >= p)
		return (1);
	return (checker(s + 1, p - 1));
}

/**
 * _strlen - return length of a string
 * @s: pointer to source string
 * Return: string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
