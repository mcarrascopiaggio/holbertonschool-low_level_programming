#include "lists.h"

/**
*free_listint2 - free
*@head: pointer to a pointer.
*/

void free_listint2(listint_t **head)
{
listint_t *aux;

	while (head)
	{
		aux = *head;
		*head = aux->next;
		free(aux);
	}
	*head = NULL;
}
