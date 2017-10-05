#include "holberton.h"

int _strlen(char *);
int _checker(char *, char *);

/**
 * is_palindrome - return palindrome result
 * @s: string to be checked
 * Return: 1 - is palindrome
 *         0 - not palindrome
 */
int is_palindrome(char *s)
{
	if (_checker(s, s + _strlen(s) - 1) == 0)
		return (0);
	else if (_strlen(s) <= 1)
		return (0);
	return (_checker(s, s + _strlen(s) - 1));
}

/**
 * _checker - check if letters are the same
 * @s: begining of string
 * @p: end of string
 * @len: string lenght
 * Return: 1 - is the same
 *         0 - not the same
 */
int _checker(char *s, char *p)
{
	if (*s != *p)
		return (0);
	_checker(s + 1, p - 1);
	return (1);
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
