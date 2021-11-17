#include "lists.h"

/**
 *delete_nodeint_at_index - delete a node
 *@head: the pointer
 *@index: index to delete
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp1 = NULL, *temp2 = NULL;
unsigned int i;

if (*head == NULL || head == NULL)
	return (-1);

temp1 = *head;
if (index == 0)/**case delete the head node*/
{
	*head = temp1->next;
	free(temp1);
	return (1);
}
for (i = 0; i < index - 2; i++)/**go trought nodes until idex -2*/
{
	if (temp1 == NULL)
		return (-1);
	temp1 = temp1->next;/**at finish temp1 points index-1*/
}
temp2 = temp1->next;/**this node index*/
temp1->next = temp2->next;/**assign the follow node to temp1*/
free(temp2);
return (1);
}
