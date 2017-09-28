/**
 * _strncpy - concatenat two strings
 * @dest: destination string
 * @src: source sting
 * @n: number of char to copy
 * Description: copy source string and append to dest string
 * Return: pointer to final string output
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
		i = i;
	for (j = 0; j < n && src[j] != 0; j++)
		dest[i] = src[j];
		i++;
	dest[i] = '\0';
	return (dest);
}
