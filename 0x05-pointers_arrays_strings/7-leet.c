/**
 * leet - encode a string
 * @s: string of be checked
 * Description: take a string and convert a, e, o, t, l to code
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
		i = i;
	for (j = 0; j < i; j++)
	{
		if (s[j] == 'a' || s[j] == 'A')
			s[j] = 4;
		else if (s[j] == 'e' || s[j] == 'E')
			s[j] = 3;
		else if (s[j] == 'o' || s[j] == 'O')
			s[j] = 0;
		else if (s[j] == 't' || s[j] == 'T')
			s[j] = 7;
		else if (s[j] == 'l' || s[j] == 'L')
			s[j] = 1;
		else
		{
			;
		}
	}
	return (s);
}
