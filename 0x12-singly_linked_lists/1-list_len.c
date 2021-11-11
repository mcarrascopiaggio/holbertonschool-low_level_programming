#include "lists.h"

/**
* list_len - number of elements in a linked list_t list.
* @h: pointer to a list_t
*Return:the number of elements
*/

size_t list_len(const list_t *h)
{
size_t clist;

if (h == NULL)
	return (0);
clist = 0;
while (h)
{
	clist++;
	h = h->next;
}
return (clist);
}
