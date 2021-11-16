#include "lists.h"

/**
 * pop_listint - delete a node
 * @head: pointer
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
listint_t *curr, *to_rm;
int n;

if (*head == NULL)
	return (0);
else
{
	for (*curr = *head; curr->next != NULL; curr = curr->next)
		{
			if (curr->next == n
			{
			*to_rm = curr->next;
			curr->next = curr->next->next;
			free(to_rm);
			}
		}	
}
}
