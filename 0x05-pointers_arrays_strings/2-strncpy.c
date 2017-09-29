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
	int i;

	for (i = 0; src[i] != 0 && i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
