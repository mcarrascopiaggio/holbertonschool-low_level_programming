#include "lists.h"

/**
 * reverse_listint - reverse
 * @head: pointer
 * Return: a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *curr, *prev, *next;

if (*head == NULL || head == NULL)
	return (NULL);

curr = *head;
prev = NULL;
next = NULL;

while (curr)
{
next = curr->next;
curr->next = prev;
prev = curr;
curr = next;
}
*head = prev;
return (*head);
}
