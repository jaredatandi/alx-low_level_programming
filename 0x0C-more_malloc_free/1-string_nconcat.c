#include "main.h"

/**
 * string_nconcat - concatenates strings upto n bytes
 * @s1: the first string
 * @s2: the second string
 * @n: the size of buffer to fill
 * Return: pointer to the new string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2, j;
	char *str;

	i = len1 = len2 = j = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		str = malloc(sizeof(char) * (1 + n + len1));
	else
		str = malloc(sizeof(char) * (1 + len1 + len2));

	if (!str)
		return (NULL);

	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		str[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		str[i++] = s2[j++];

	str[i] = '\0';

	return (str);
}
