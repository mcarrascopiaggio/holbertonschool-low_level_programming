#include "lists.h"
/**
* print_listint - print a list of integer
* @h: adresses of the heade
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t countn = 0;

if (h == NULL)
{
return (0);
}
else
{
	while (h)
	{
	printf("%d\n", h->n);
	countn++;
	h = h->next;
	}

}

return (countn);
}
