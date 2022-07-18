#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be checked
 * @needle: the string to be found
 * Return: point to first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = j = 0;

	while (haystack[i] != '\0' && haystack[i] != needle[j])
		i++;
	if (haystack[i] == needle[j] && needle[j] != '\0')
	{
		return (&haystack[i]);
	}
	j++;
	return (0);
}
