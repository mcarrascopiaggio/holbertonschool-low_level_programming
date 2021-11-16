#include "lists.h"

/**
 *sum_listint - suma all n
 *@head: address
 *Return: sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
	return (0);
else
	while (head)
	{
	sum = sum + head->n;
	head = head->next;
	}
return (sum);
}
