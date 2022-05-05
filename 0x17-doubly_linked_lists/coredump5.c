#include "lists.h"

/**
 * dlistint_len - function that returns the num of elements in a linked list.
 * @h: pointer to the header
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
		h = h->next;
		number++;
	}
	return (number);
}


/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to the head node
 * @index: is the index of the node, starting from 0
 * Return: nothing
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int n = 0;
	unsigned int count = dlistint_len(head);
		
	if (!head || index >= count)
		return (NULL);
	node = head;
	while (n < index)
	{
		node->prev = node;
		node = node->next;
		n++;
	}
	return (node);
}
