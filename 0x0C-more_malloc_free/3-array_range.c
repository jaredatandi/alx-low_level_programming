#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum number
 * @max: the maximum number in the range
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, sum;

	if (min > max)
		return (NULL);
	
	sum = max - min + 1;

	arr = malloc(sizeof(int) * sum);

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
