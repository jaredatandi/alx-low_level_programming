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

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp ? temp : NULL);
}
