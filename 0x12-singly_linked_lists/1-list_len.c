#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list
 * @h: the pointer to struct list_t to print
 *
 * Return: the total number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
