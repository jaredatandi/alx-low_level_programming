#include "main.h"

/**
 * rev_string - prints a reverse string
 * @s: pointer to a char
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char c;

	i = 0;
	j = strlen(s) - 1;

	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++, j--;
	}
}
