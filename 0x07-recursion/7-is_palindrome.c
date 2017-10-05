#include "holberton.h"

int _strlen_recursion(char *);
int _checker(char *, char *);

/**
 * _is_palindrome - return palindrome result
 * @s: string to be checked
 * Return: 1 - is palindrome
 *         0 - not palindrome
 */
int _is_palindrome(char *s)
{
	if (*s != s[n - 1])
		return (0);
	*s == s[n - 1]
	return (1);

	if ()
	
	if ()
}

/**
 * _checker - check if letters are the same
 * @s: begining of string
 * @p: string length
 * Return: 1 - is the same
 *         0 - not the same
 */
int _checker(char *s, int n)
{

}

/**
 * _strlen_recursion - return length of a string
 * @s: pointer to source string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
