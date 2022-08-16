#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the first node
 * @index: index to delete the node
 *
 * Return: 1 success, -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;

	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (count < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		count++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
