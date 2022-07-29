#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: the number of elements in the array
 * @size: size of memory
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	arr = malloc(size * nmemb);

	if (!arr)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
