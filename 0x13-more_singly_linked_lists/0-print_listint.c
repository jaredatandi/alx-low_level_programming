#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t
 * @h: a pointer to listint_t
 *
 * Description: display all the elements and count them
 *
 * Return: unsigned int count of all the elements
 */
size_t print_listint(const listint_t *h)
{
	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		return (print_listint(h->next) + 1);
	}
	return (0);
}
