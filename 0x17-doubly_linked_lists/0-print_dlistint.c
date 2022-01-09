#include "lists.h"

/**
 *print_dlistint - print elements of a doble linked list
 *@h: pointer to dobble linked list
 *Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

if (h == NULL)
	return (0);

while (h)
{
	count = count + 1;
	printf("%d\n", h->n);
	h = h->next;
}
return (count);
}
