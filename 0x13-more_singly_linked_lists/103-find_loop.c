#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked lists
 * @head: linked list
 *
 * Return: address of the loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast = head;

	if (!head)
		return (NULL);
	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
