#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: the first int
 * @b: the second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
