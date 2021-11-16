#include "lists.h"


/**
 * free_listint - free the memory alloc
 * @head: pointer-
 * Return: nothing
 */

void free_listint(listint_t *head)
{
listint_t *aux;

while (head)
{
	aux = head; /** saved value of head*/
	head = head->next;/**move forward head one place*/
	free(aux);/**free aux*/
}
}
