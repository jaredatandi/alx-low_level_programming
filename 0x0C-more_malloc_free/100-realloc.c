#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: the old array
 * @old_size: the old array size
 * @new_size: the new array size
 * Return: pointer to the new array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrr, *lptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	ptrr = malloc(new_size);

	if (!ptrr)
		return (NULL);

	lptr = ptr;

	if (new_size < old_size)
	{

		for (i = 0; i < new_size; i++)
			ptrr[i] = lptr[i];
	}

	if (new_size > old_size)
	{

		for (i = 0; i < old_size; i++)
			ptrr[i] = lptr[i];
	}

	free(ptr);
	return (ptrr);
}
