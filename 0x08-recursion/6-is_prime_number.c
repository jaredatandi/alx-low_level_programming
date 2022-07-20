#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - checks if a number is a prime
 * number
 * @n: the number
 * Return: 1 if it is a prime number and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - checks for prime number
 * @n: number to check
 * @i: iterator
 * Return: 1 if number is prime
 */

int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime(n, i - 1));
}
