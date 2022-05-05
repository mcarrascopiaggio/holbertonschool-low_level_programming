#include "lists.h"

/**
 * add_dnodeint_end -function that adds a new node at the end of linked  list
 * @head: pointer to a pointer to the head
 * @n: integer for the new node
 * Return:the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = *head;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
