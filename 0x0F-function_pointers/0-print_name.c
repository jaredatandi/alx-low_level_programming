#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name from a function pointer
 * @name: string of the name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
