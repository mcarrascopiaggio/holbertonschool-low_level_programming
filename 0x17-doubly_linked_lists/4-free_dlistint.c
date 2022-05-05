#include "lists.h"

/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: pointer to the head
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;
	dlistint_t *temp = NULL;

	aux = head;

	while (aux->next)
	{
		aux = aux->next;
		temp = aux->prev;
		free(temp);
	}
	free(aux);
}
