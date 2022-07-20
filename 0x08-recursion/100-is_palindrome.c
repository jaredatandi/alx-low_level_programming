#include "main.h"

int getlen(char *str);
int check(char *str, int s, int e);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the inputted string
 * Return: 1 if it is, 0 if not
 */

int is_palindrome(char *s)
{
	int n, c;

	n = getlen(s);

	if (n == 0)
		return (1);
	c =  check(s, 0, n - 1);

	if (c == 0)
		return (1);
	return (0);

}

/**
 * getlen - returns the length of a string
 * @str: the inputted string
 * Return: length
 */


/* get the length of the string */

int getlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + getlen(str + 1));
}

/**
 * check - checks if a string letters are same
 * @str: string inputted
 * @s: start of the string
 * @e: end of the string
 * Return: 0 if they are same, 1 if not
 */


/* check if the string is palindrome */

int check(char *str, int s, int e)
{
	/* check if the string is one char */
	if (s == e)
		return (0);
	/* check if the first and last char match */
	if (str[s] != str[e])
		return (1);

	/* check if the other char match */
	if (s < e + 1)
		return (check(str, s + 1, e - 1));
	return (0);
}
