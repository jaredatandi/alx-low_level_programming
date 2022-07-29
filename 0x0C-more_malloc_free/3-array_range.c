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
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (!arr)
		return (NULL);
	for (i = 0; min < max; i++)
		arr[i] = min++;

	return (arr);
}
