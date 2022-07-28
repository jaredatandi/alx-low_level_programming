#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: value of memory to be allocated
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
