#include "lists.h"

/**
 *free_dlistint - free nodes
 *@head: is the head of the linked list
 *Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
