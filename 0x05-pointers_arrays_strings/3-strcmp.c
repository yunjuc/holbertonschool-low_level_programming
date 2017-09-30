/**
 * _strcmp - compare two strings
 * @s1: 1st string
 * @s2: 2nd sting
 * Description: compare char one by one and return an value when difference found
 * Return: the differece in intger
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, index;

	for (i = 0; s1[i] != '\0'; i++)
		i = i;
	for (j = 0; s2[j] != '\0'; j++)
		j = j;
	for (index = 0; index < i && index < j; index++)
	{
		if (s1[index] != s2[index])
			break;
	}
	return (s1[index] - s2[index]);
}
