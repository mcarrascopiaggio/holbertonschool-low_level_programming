#include "main.h"

/**
*_strpbrk - print the num character with concidence.
*@s: the string to be scanned.
*@accept: the string containing the text to scaner.
*Return: number of coincidence in bytes.
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int c = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
			c++;
			s = s + i;
			break;
			}
		}
	if (c == 1)
	{
		break;
	}
	}
if (c < 1)
{
s = '\0';
}
return (s);
}
