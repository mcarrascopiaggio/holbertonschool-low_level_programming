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

/**
*wildcmp - returns the length of a string.
*@s1: the first string.
*@s2: the second string.
*Return: number of coincidence in bytes.
*/


int wildcmp(char *s1, char *s2)
{
int l1 = _strlen_recursion(s1);
int l2 = _strlen_recursion(s2);

if (l1 != l2)
{
return (0);
if (l1 == l2)
{
	if (s1 - s2 != 0)
		return (0);
	else
		return (1 - (wildcmp(s1 + 1, s2 + 1)));
}
}
return (0);
}
