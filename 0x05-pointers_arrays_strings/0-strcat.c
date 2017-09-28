/**
 * _strcat - concatenat two strings
 * @dest: pointer to destination string
 * @src: pointer to source sting
 * Return: pointer to final string output
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
		i = i;
	dest[i] = ' ';
	for (j = 0; src[j] != 0; j++)
	{
		dest[i + 1] = src[j];
		i++;
	}
	dest[i + j + 1] = '\0';
	return (dest);
}
