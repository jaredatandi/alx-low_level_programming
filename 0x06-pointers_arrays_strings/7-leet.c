#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: inputted string
 * Return: encoded string
 */
char *leet(char *str)
{
	int i;
	int j;

	char *l = "aAeEoOtTlL";
	char *T = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == l[j])
			{
				str[i] = T[j];
			}
		}
	}
	return (str);

}
