#include "main.h"

/**
 * argstostr - converts arguments to strings
 * @ac: argument count
 * @av: pointer to argument
 * Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	int i, length, sub, j;
	char *str;

	length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		length += j;
	}

	str = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
		return (NULL);
	sub = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[sub] = av[i][j];
			sub++;
		}
		str[sub] = '\n';
		sub++;
	}
	return (str);
}

