#include "3-calc.h"

/**
 * main - prints the results of simple operations
 * @argc: number of arguments
 * @argv: array of the arguments
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int num1, num2, res;
	char opi;

	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		return (99);
	}

	opi = *argv[2];

	if ((opi == '/' || opi == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	res = func(num1, num2);
	printf("%d\n", res);

	return (0);
}
