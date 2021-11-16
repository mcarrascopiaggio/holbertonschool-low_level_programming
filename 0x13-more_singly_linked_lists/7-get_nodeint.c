#include "lists.h"

/**
 * get_nodeint_at_index - return the index of a node
 * @head: es el head.
 * @index: es el index
 * Return: the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;

if (head == NULL)
return (NULL);

while (count < index)
{
	head = head->next;
	count++;
}
return (head);
}
