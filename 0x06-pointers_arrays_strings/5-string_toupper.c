#include "main.h"

/**
 * string_toupper - converts lower case to upper
 * @string: the string to convert
 * Return: converted string
 */
char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] -= 32;
		}
	}

	return (string);
}
