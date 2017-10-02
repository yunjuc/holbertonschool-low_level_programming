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
		|| s[j] == '"' || s[j] == '(' || s[j] == ')' || s[j] == '{'
		|| s[j] == '}') && (s[j + 1] >= 'a' && s[j + 1] <= 'z'))
			s[j + 1] -= 32;
		else if ((s[j] == '.' || s[j] == ',' || s[j] == ';' || s[j] ==
		'!' || s[j] == '?') && (s[j + 2] >= 'a' && s[j + 2] <= 'z'))
			s[j + 2] -= 32;
		else
			continue;
	}
	return (s);
}
