#include "variadic_functions.h"

/**
 * print_strings - prints a string
 * @separator: a string to be printed
 * @n: the number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list list;

	va_start(list, n);

	i = 0;

	while (i < n)
	{
		string = va_arg(list, char *);

		if (string == NULL)
			string = "(nil)";
		if (separator == NULL)
			printf("%s", string);
		else if (separator && !i)
			printf("%s", string);
		else
			printf("%s%s", separator, string);
		i++;
	}

	printf("\n");

	va_end(list);

}
