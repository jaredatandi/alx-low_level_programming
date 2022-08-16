#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: address of the head
 * @n: the data
 *
 * Return: pointer to node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	size_t len, i;
	listint_t *newnode, *temp;

	len = listint_len(*head);
	newnode = (listint_t *) malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		add_nodeint(head, n);
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}
