#include "main.h"

/**
 * _strchr - returns the first occurence of a character
 * in a string
 * @s: the string array
 * @c: the character to be searched
 * Return: pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}
	if (s[i] == c)
		return (&s[i]);

	return (0);
}
