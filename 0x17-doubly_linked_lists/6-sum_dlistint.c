#include "lists.h"

/**
 * sum_dlistint - function that sum of all the data (n) of a linked list.
 * @head: pointer to the head
 * Return:returns the sum of all the data or if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = NULL;

	if (!head)
	{
		return (0);
	}
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
