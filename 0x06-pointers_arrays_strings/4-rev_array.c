#include "main.h"

/**
 * reverse_array - prints a given array in reverse
 * @a: array
 * @n: size of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	i = 0;
	j = n - 1;

	while (i < n / 2)
	{
		t = a[i];
		a[i] = a[j];
		a[j--] = t;

		i++;
	}
	if (j == 0)
		a[0] = a[n];
}
