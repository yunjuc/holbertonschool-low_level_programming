/**
 * reverse_array - reverse array
 * @a: array name
 * @n: size of array
 * Description: reverse array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
