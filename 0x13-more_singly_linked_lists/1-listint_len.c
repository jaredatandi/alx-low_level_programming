#include "lists.h"

/**
 * listint_len - returns the length of a linked list
 * @h: pointer to the node
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

