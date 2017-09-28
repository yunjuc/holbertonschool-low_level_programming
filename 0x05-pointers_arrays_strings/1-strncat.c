/**
 * _strncat - concatenat two strings
 * @dest: destination string
 * @src: source sting
 * @n: number of char to copy
 * Description: copy "n" char from source string and append to dest string
 * Return: pointer to final string output
 */
char *_strncat(char *dest, char *src, int n)
{
	int l1, l2, t;

	for (l1 = 0; dest[l1] != 0; l1++)
		l1 = l1;
	for (l2 = 0; src[l2] != 0; l2++)
		l2 = l2;
	if (n <= l2)
	{
		for (t = 0; t < n; t++)
		{
			dest[l1 + 1] = src[t];
			l1++;
		}
	}
	else
	{
		for (t = 0; t <= l2; t++)
		{
			dest[l1 + 1] = src[t];
			l1++;
		}
	}
	return (dest);
}
