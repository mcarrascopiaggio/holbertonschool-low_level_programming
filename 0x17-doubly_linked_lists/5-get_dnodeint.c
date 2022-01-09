#include "lists.h"

/**
 *get_dnodeint_at_index - fun that returns the nth node of a dlistint_t list
 *@head: pointer to linked list
 *@index: index of the node, starting from 0
 *Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int curr = 0;

	if (head == NULL)
		return (NULL);
	while (curr < index)
	{
		head = head->next;
		curr = curr + 1;
		if (head == NULL)
			break;
	}
	return (head);
}
