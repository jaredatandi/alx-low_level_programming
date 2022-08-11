#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: a pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;
	int count = 0;

	if (h->str == NULL)
		_puts("[0] (nil)");
	if (h->next != NULL)
	{
		for (i = 0; h->str[i] != '\0'; i++)
		{
			_putchar(h->str[i]);

		}
		count++;
	}

	return (count);
}

