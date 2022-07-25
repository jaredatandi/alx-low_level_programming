#include "main.h"

/**
 * _strdup - returns pointer to allocated memory
 * @str: string to be copied
 * Return: pointer to allocated memory
 */

char *_strdup(char *str)
{
	int i, len;
	char *string;

	len = 0;
	
	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	string = malloc(sizeof(char) * len);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		string[i] = str[i];

	return (string);
}
