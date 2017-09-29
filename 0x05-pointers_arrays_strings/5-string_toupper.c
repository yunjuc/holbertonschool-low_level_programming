/**
 * string_toupper - change lower to upper case
 * @s: string to be convert
 * Description: take a string and convert lower case letter to upper case
 * Return: upper case char
 */
char *string_toupper(char *s)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
		i = i;
	for (j = 0; j < i; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] = s[j] - 32;
		else
		{
			;
		}
	}
	return (s);
}
