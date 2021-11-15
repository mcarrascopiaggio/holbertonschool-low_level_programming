#include "lists.h"


/**
 * add_nodeint_end - add a node at the end
 * @head: pointer of the pointer
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *aux; /** create de new & the temporary*/

new = malloc(sizeof(listint_t)); /**create memory*/
if (new == NULL)
	return (NULL);

new->n = n;/** assig the int*/
new->next = NULL;/** assing NULL because is the last*/
if (*head == NULL) /**if head is the last one - so assigna new to head*/
{
*head = new;
return (new);
}
else
aux = *head; /**save head information in aux to conserve*/
{
	while (aux->next != 0) /** loop for move betwin nodes until the null*/
	{
		aux = aux->next; /**now aux is the last node*/
	}
	aux->next = new; /**so we put new at the right of the last one*/
}
return (new);
}
