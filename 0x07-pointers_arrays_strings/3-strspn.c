#include "main.h"

/**
 * _strspn - returns lenght of a prefix
 * substring
 * @s: string
 * @accept: the prefix substring
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	i = count = 0;

	while (s[i] != '\0' && s[i] != ' ')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
