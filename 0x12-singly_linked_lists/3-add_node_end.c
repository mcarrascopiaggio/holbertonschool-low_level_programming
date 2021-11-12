#include "lists.h"

/**
*add_node_end - adds a new node at the end of a list_t list.
*@head: the first node
*@str: the string to be copy
*Return: a pointer to the new
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node; /**newnode to insert at the end*/
list_t *temp; /**temporay struct to tranfer the pointer*/
int l = 0;/**var for count*/

new_node = malloc(sizeof(list_t)); /**initializat  new*/
if (new_node == NULL)
	return (NULL);
for (l = 0; str[l] != 0; l++)
{
;
}
new_node->str = strdup(str);/**asignation*/
new_node->len = l;
new_node->next = NULL;
if (*head == NULL)/**case exist only one node*/
{
	*head = new_node;
}
else
{
	temp = *head;
	while (temp->next != NULL) /**mov adresses trought nodes*/
	{
		temp = temp->next;
	}
}
temp->next = new_node;
return (new_node);
}
