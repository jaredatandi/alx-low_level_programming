#include "variadic_functions.h"

/**
 * print_numbers - prints all the numbers in argument
 * @separator: the string between numbers
 * @n: the number of integer passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	i = 0;

	while (i < n)
	{
		if (separator == NULL)
			printf("%d", va_arg(list, int));
		else if (separator && !i)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
		i++;
	}

	va_end(list);

	printf("\n");
}
