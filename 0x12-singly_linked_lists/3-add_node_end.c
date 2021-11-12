#include "lists.h"

/**
*add_node_end - adds a new node at the end of a list_t list.
*@head: the first node
*@str: the string to be copy
*Return: a pointer to the new
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new; /**newnode to insert at the end*/
list_t *temp; /**temporay struct to tranfer the pointer*/
int l = 0;/**var for count*/

new = malloc(sizeof(list_t)); /**initializat  new*/
if (new == NULL)
	return (NULL);
for (l = 0; str[l] != 0; l++)
{
;
}
new->str = strdup(str);/**asignation*/
new->len = l;
new->next = NULL;
if (*head == NULL)/**case exist only one node*/
{
	*head = new;
	return (new);
}
else
{
	temp = *head;
	while (temp->next != NULL) /**mov adresses trought nodes*/
	{
		temp = temp->next;
	}
temp->next = new;
}
return (new);
}
