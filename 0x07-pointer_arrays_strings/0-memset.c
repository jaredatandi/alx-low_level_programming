#include "main.h"

/**
 * _memset - fills a buffer with a constant
 * @s: array to be filled
 * @b: constant bytes
 * @n: the first n bytes
 * Return: pointer to filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	}

	return (s);
}
