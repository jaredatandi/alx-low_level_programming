#include "main.h"

/**
 * _strcat - appends the src string to dest
 * @dest: the resultant string
 * @src: the string to be appended
 *
 * Return: a pointer to dest string
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
