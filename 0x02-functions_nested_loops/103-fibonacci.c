#include <stdio.h>

/**
 * main - prints fibonacci not more than
 * 4000000
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float fibsum;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			fibsum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", fibsum);

	return (0);
}
