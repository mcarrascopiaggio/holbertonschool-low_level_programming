#include "lists.h"

/**
* insert_nodeint_at_index - insert a node where is asked with the index
*@head: a pointer to a pointer to head
*@idx: index
*@n: value of newnode->n
*Return: pointer.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *before, *after;
unsigned int count = 0;

new = malloc(sizeof(listint_t));
if (new == NULL)
	return (NULL);

if (*head == NULL) /**if there are no nodes and new is the first*/
{
	new->next = NULL;
	*head = new;
	return (new);
}
if (idx == 0)/**if the node will be in the first place*/
{
	new->next = *head;
	*head = new;
	return (new);
}
after = *head;/** fot other places to the node*/
while (count < idx)
{
if (after == NULL)
	break;
before = after;
after = after->next;
count++;
}
before->next = new;
new->n = n;
new->next = after;
return (new);
}
