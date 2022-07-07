#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * for multiples of 3 it prints fizz
 * for multiples of 5 it prints buzz
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}

		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", a);
	}
	printf("\n");
	return (0);
}
