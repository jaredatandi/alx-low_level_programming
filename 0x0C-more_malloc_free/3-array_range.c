#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum number
 * @max: the maximum number in the range
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	j= 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max + 1));

	if (!ptr)
		return (NULL);
	for (i = min; i < max; i++)
	{
		ptr[j] = i;
		j++;
	}

	return (ptr);
}
