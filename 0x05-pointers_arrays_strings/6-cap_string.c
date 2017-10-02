int lower_case(char);
/**
 * cap_string - capitalizers words
 * @s: string of words
 * Description: take a string and convert capitalize all words
 * Return: capitalized letter
 */
char *cap_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		i = i;
	for (j = 0; j < i; j++)
	{
		if ((s[j] == ' ' || s[j] == '.' || s[j] == '\n' || s[j] == '\t'
		|| s[j] == '"' || s[j] == '(' || s[j] == ')'
		|| s[j] == '{' || s[j] == '}') && lower_case(s[j + 1]))
			s[j + 1] -= 32;
		else if ((s[j] == '.' || s[j] == ',' || s[j] == ';' ||
		s[j] == '!' || s[j] == '?') && lower_case(s[j + 2]))
			s[j + 2] -= 32;
		else
			continue;
	}
	return (s);
}

/**
 * lower_case - check if a ltter is lower case
 * @n: letter to be checked
 * Return: 1: is lower case
 *          0: not lower case
 */
int lower_case(char n)
{
	if (n >= 'a' && n <= 'z')
		return (1);
	else
		return (0);
}
