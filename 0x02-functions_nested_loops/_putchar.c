#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @a: The inputted character
 * Return: 1 (Success)
 * Return: -1 (Fail)
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
