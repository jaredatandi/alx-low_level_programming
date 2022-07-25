#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a point to the newly allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, total_len;
	char *string;

	len1 = len2 = 0;

	if (s1 == NULL)
		len1 = 0;
	else
		for (i = 0; s1[i] != '\0'; i++)
		{
			len1++;
		}

	if (s2 == NULL)
		len2 = 0;
	else
		for (i = 0; s2[i] != '\0'; i++)
		{
			len2++;
		}

	total_len = len1 + len2 + 1;
	string = malloc(sizeof(char) * total_len);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		string[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		string[len1 + i] = s2[i];
	}

	return (string);
}
