#include "main.h"

/**
 * print_last_digit - prints the last
 * digit of a number
 * @number: inputted number
 * Return: last digit
 */
int print_last_digit(int number)
{
	int n = number % 10;

	if (n < 0)
		n *= -1;
	_putchar(n + '0');

	return (n);
}
