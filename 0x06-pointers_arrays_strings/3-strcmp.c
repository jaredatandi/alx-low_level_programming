#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: positive int if s1 > s2
 * negative int if s2 > s1 and
 * 0 if they are equal
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	if (s1 > s2)
		return (s1[0] - s2[0]);
	else
		return (s1[0] - s2[0]);
}
