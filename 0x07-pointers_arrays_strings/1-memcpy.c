#include "main.h"

/**
 * _memcpy - copy n bytes of memory from src
 * to dest
 * @dest: destination array
 * @src: source array
 * @n: bytes to be copied
 * Return: pointer to dest array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
