#include "lists.h"

/**
 *free_list - is a function that free linked list
 *@head: is the header of the structure
 *Return: Nothing
 */

void free_list(list_t *head)
{
list_t *temp;

while (head)
{
	temp = head;
	head = head->next;
	free(temp);
}
}
