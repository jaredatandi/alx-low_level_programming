#include "main.h"

/**
 * _strpbrk - searches for any set of bytes
 * @s: the string to be searched
 * @accept: the string to be used
 * Return: pointer to the first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
		i++;
	}
	return (0);
}
