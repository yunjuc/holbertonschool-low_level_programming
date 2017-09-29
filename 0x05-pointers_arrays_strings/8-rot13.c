/**
 * rot13 - encode a string
 * @s: string of be checked
 * Description: take a string and encode it with rot13
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
		i = i;
	for (j = 0; j < i; j++)
	{
		if (s[0] == 'R' && s[j] >= 'a' && s[j] <= 'z')
			s[j] = s[j] - 13;
		else if (s[0] == 'R' && s[j] >= 'A' && s[j] <= 'Z')
			s[j] = s[j] - 13;
		else if (s[0] == 'E' && s[j] >= 84 && s[j] <= 109)
			s[j] = s[j] + 13;
		else if (s[0] == 'E' && s[j] >= 52 && s[j] <= 77)
			s[j] = s[j] + 13;
		else
		{
			;
		}
	}
	return (s);
}
