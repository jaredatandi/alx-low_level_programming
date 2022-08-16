#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the count code
 *
 * Return: 0 success
 */
int main(void)
{
	listint_t *head, *newnode;
	listint_t first = {8, NULL};
	size_t n;

	head = &first;
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		printf("Error creating node\n");
		return (98);
	}

	newnode->n = 9;
	newnode->next = head;
	head = newnode;
	n = listint_len(head);
	printf("->%lu elements\n", n);
	free(newnode);
	return (0);
}
