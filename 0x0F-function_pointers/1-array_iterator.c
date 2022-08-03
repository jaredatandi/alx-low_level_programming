#include "function_pointers.h"

/**
 * array_iterator - prints a function given as a parameter
 * on each element of an array
 * @array: the array to print
 * @size: size of the array
 * @action: a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
