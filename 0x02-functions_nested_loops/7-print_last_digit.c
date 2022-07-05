#include "main.h"

/**
 * print_last_digit - prints the last
 * digit of a number
 * @number: inputted number
 * Return: last digit
 */
int print_last_digit(int number)
{
	if (number == 0)
		return (0);
	if (number > 0)
		return (number % 10);
	return (-(-number) % 10);
}