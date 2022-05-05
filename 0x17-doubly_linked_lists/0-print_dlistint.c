#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: pointer to the header
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d", h->n);
		printf("\n");
		h = h->next;
		number++;
	}
	return (number);
}


