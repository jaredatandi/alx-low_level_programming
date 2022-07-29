#include "main.h"

/**
 * string_nconcat - concatenates strings upto n bytes
 * @s1: the first string
 * @s2: the second string
 * @n: the size of buffer to fill
 * Return: pointer to the new string
 */


void *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *str;

	i = len1 = len2 = 0;

	if (s1 == NULL)
		len1 = 0;
	if (s2 == NULL)
		len2 = 0;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n < len2)
		str = malloc(sizeof(char) * (1 + n + len1));
	else
		str = malloc(sizeof(char) * (1 + len1 + len2));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	if (n < len2)
	{
		for (i = 0; i < (len1 + n); i++)
			str[len1 + i] = s2[i];
	}
	else
		for (i = 0; i < (len1 + len2 + 1); i++)
			str[len1 + i] = s2[i];
	str[i] = '\0';

	return (str);
}
