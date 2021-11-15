#include "lists.h"

/**
* add_nodeint - add a new node.
* @head: pointer to a pointer
* @n: number of nodes
* Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
	return (0);

new->n = n;
new->next = *head;
*head = new;
return (new);
}
