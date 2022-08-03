#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: size of the array
 * @cmp: pointer to function that compares elements
 * Return: index of the first element for the matched element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
