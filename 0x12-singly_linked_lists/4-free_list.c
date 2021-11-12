#include "lists.h"

/**
 *free_list - is a function that free linked list
 *@head: is the header of the structure
 *Return: Nothing
 */

void free_list(list_t *head)
{
list_t *temp; /**var to save information for next address to free*/

while (head)
{
	temp = head; /**save head inf before advance*/
	head = head->next;/**move forward before free*/
	free(temp->str);/**free information saved in first step*/
	free(temp);/**free information saved in first step*/
}
}
