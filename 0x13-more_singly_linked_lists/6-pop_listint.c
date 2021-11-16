#include "lists.h"

/**
 * pop_listint - delete a node
 * @head: pointer
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
listint_t *aux = NULL;
int n = 0; /**content of the remove node*/

if (*head == NULL)
	return (0);

n = (*head)->n; /** save the value*/
aux = *head; /** save the node*/
aux  = aux->next;
free(*head);
*head = aux;

return (n);
}
