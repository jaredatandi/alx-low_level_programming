#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: address of litst_t
 * @idx: index where the new node should be added
 * @n: data of the node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp = *head;
	size_t count = 0;

	newnode = (listint_t *) malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (temp)
	{
		count++;

		if (count == idx)
		{
			newnode->next = temp->next;
			temp->next = newnode;

			return (newnode);
		}

		temp = temp->next;
	}

	return (NULL);
}
