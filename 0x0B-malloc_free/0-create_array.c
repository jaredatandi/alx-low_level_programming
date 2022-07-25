#include "main.h"

/**
 * create_array - creates an array of chars and
 * intializes it with specific char
 * @size: the size of the array
 * @c: the char to intialize it with
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char *) malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
