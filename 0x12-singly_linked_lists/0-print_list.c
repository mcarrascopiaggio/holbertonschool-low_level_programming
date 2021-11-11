#include "lists.h"

/**
*print_list - prints all the elements of a list_t list.
*@h: pointer to a list_h
*Return:the number of nodes
*/

size_t print_list(const list_t *h)
{
size_t cnodes; /**counter of nodes*/

cnodes = 0;

if (h == NULL) /**if the structed pointed does not exist*/
	return (0);
else
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		cnodes++;
		h = h->next; /** way to move from node to node */
	}
return (cnodes);

}
