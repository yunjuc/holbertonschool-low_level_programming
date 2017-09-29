/**
 * _strcmp - compare two strings
 * @s1: 1st string
 * @s2: 2nd sting
 * Description: compare the first char between 2 strings and return difference
 * Return: the differece in intger
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = *s1 - *s2;
	return (i);
}
