#include "main.h"

/**
 *_print_rev_recursion - print the num character with concidence.
 *@s: the string to be printed.
 *Return: always 0.
 */

void _print_rev_recursion(char *s)
{

	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}

