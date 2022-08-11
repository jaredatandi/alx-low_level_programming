#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the beginning of a list_t
 * @head: the first node
 * @str: the node to be added
 * Return: address of the added node, Null if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *hd;
	unsigned int len = 0;

	while (str[len])
		len++;

	hd = malloc(sizeof(list_t));

	if (!hd)
		return (NULL);
	hd->str = strdup(str);
	hd->len = len;
	hd->next = *head;
	*head = hd;

	return (*head);
}
