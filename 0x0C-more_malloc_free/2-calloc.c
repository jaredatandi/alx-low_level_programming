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

	if ((nmemb == 0) | (size == 0))
		return (NULL);

	arr = malloc(sizeof(char) * nmemb);

	if (!arr)
		return (NULL);

	arr = calloc(nmemb, size);

	if (!arr)
		return (NULL);
	return (arr);
}
