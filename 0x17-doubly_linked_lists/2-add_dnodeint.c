#include "lists.h"

/**
 * add_dnodeint -function that adds a new node at the beginning of linked  list
 * @head: pointer to a pointer to the head
 * @n: integer for the new node
 * Return:the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (!*head)
	{
		new_node->next = NULL;
	}
	else
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
