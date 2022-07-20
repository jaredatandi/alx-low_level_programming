#include "main.h"

/**
 * _strlen_recursion - return the lenght of string
 * @s: pointer to the string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
