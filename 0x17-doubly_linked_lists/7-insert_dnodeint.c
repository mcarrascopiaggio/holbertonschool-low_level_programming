#include "lists.h"
/**
 * dlistint_len - function that returns the num of elements in a linked list.
 * @h: pointer to the header
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
		h = h->next;
		number++;
	}
	return (number);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to a pointer to the head
 * @idx: index of the list where the new node should be added.
 * @n: integer in the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp = NULL;
	unsigned int count = dlistint_len(*h);
	unsigned int i = 0;

	if (!*h || !h || idx >= count)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	while (i < (idx - 1))
	{
	temp = temp->next;
	i++;
	}
	new->prev = temp;
	new->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new;
	temp->next = new;
	return (new);
}
