#include "main.h"

/**
 * _isalpha - checks if the input is
 * a character
 * @c: character to check
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
