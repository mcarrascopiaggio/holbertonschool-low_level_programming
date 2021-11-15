#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list.
 * @h: header
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
size_t countn = 0;

if (h == NULL)
	return (0);
else
{
	while (h)
	{
	countn++;
	h = h->next;
	}
}
return (countn);
}
