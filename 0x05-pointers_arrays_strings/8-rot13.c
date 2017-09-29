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
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] = s[j] - 13;
		else if (s[j] >= 'A' && s[j] <= 'Z')
			s[j] = s[j] - 13;
		else
		{
			;
		}
	}
	return (s);
}
