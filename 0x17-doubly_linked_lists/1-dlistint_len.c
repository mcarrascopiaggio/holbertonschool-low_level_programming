#include "lists.h"

/**
 *dlistint_len - count leng
 *@h: pointer to dobble linked list
 *Return: the number of elements in a linked
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

if (h == NULL)
	return (0);

while (h)
{
	count = count + 1;
	h = h->next;
}
return (count);
}
