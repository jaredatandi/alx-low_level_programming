#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t
 * @head: pointer to listint_t
 * @index: desired index
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;
	listint_t *temp = head;

	if (!head)
		return (NULL);

	while (temp)
	{
		temp = temp->next;
		count++;
		if (count == index)
			return (temp ? temp : NULL);
	}
	return (NULL);
}
