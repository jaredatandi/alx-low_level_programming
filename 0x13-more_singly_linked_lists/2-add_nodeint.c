#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning of a listint_t
 * @head: address to the first node
 * @n: data in listint_t
 *
 * Return: pointer to the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
