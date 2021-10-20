#include "main.h"

/**
 *_puts_recursion - print the num character with concidence.
 *@s: the string to be printed.
 *Return: number of coincidence in bytes.
 */

void _puts_recursion(char *s)
{
int i = 0;
	if (s[i] == '\0')
	{
		_putchar(10);
		return;
	}
	else
	{
	_putchar(s[i]);
	_puts_recursion(s + 1);
	}
}

