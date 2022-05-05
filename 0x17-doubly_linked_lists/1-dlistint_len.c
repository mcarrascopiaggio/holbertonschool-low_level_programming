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


