#include "function_pointers.h"
#include <stdio.h>

/**
*print_name - Write a function that prints a name.
*@name: name to be printed
*@f:function that print
*Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL)
	f(name);
}
