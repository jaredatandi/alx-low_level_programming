#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list with loops
 * @head: first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	long int add_diff;

	if (!head)
		return (98);

	while (head)
	{
		add_diff = head - head->next;
		count++;

		printf("[%p] %d\n", (void *)head, head->n);
		if (add_diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}

