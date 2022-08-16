#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head of a listint_t
 * @head: pointer of the listint_t
 * Return: the data
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}

