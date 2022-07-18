#include "main.h"

/**
 * print_diagsums - print diagonal sums of a square matrix
 * @a: the matrix pointer
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int sum, sum1;
	int i, j;

	sum = sum1 = 0;

	for (i = 0; i < size; i++)
	{
		j = (i * size) + i;
		sum += a[j];
	}
	for (i = 0; i <= size; i++)
	{
		j = (i * size) - i;
		sum1 += a[j];
	}
	printf("%d, %d\n", sum, sum1);
}
