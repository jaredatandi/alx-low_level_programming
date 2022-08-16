#include "lists.h"

/**
 * sum_listint - sums all the data of a listint_t
 * @head: head of the listint_t
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp)
	{
		total = total + temp->n;
		temp = temp->next;
	}

	return (total);
}
