#include "lists.h"

/**
 * reverse_listint - reverses a litstint_t
 * @head: pointer to the first node
 *
 * Return: pointer to the reversed listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *current_node, *next_node;

	current_node = next_node = *head;
	prev_node = 0;

	while (next_node != 0)
	{
		next_node = next_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}
	*head = prev_node;

	return (*head);
}
