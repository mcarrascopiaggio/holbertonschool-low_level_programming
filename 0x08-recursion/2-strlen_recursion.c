#include "main.h"
/**
 *_strlen_recursion - returns the length of a string.
 *@s: the string to be printed.
 *Return: number of coincidence in bytes.
 */

int _strlen_recursion(char *s)
{
int i = 0;
int n = 0;
	if (s[i] == '\0')
	{
	i = 0;
	n = 0;
	}
	else
	{
	n = 1 + _strlen_recursion(s + 1);
	}
return (n);
}

