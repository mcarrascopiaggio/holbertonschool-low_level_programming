#include "lists.h"

/**
*add_node - function that adds a new node at the beginning.
*@head: new node
*@str: node to be copied
*Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node; /** create new node*/
int len_str = 0; /**var for count str*/

new_node = malloc(sizeof(list_t)); /**inicializated new_node*/
if (new_node == NULL)
	return (NULL);
for (len_str = 0; str[len_str] != 0; len_str++)
{/**count str for len*/
}
new_node->str = strdup(str);/**assign value a str of the new*/
new_node->len = len_str++;/**assig len value a len of the new*/
new_node->next = *head;/**put the new node before the first*/
*head = new_node;/**redirectin the old first the new*/
return (new_node);
}
