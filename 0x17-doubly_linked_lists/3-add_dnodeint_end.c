#include "lists.h"

/**
 *add_dnodeint_end - add a node at the end
 *@head: pointer to head pointer
 *@n: value
 *Return: dobble listed link
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = *head;
		*head = new_node;
	}
return (new_node);
}
