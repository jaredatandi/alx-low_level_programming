#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int i = 'A';

	while (i < 'Z')
	{
		if (c == i)
			return (1);
		i++;
	}
	return (0);
}
