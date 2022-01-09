#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a node in a index
 *@h: point to a pointer of the header
 *@idx: index of the list where the new node should be added.
 *@n: value to insert
 *Return:the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux;
	unsigned int curr = 0;

	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (curr < idx)
		aux = (*h)->next;
	new->n = n;
	new->next = aux->next;
	new->prev = aux;
	aux->next = new;
	return (new);
}
