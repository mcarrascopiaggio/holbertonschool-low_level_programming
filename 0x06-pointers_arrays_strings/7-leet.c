#include "main.h"

/**
*leet - swaps values
*@src: character source
*Return: Always 0.
*/


char *leet(char *src)
{

int i;
int j;
char Lt[] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
char Nm[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
i = 0;
j = 0;

for (i = 0; src[i] != '\0'; i++)
{
	for (j = 0; j < 10; j++)
	{
		if (src[i] == Lt[j])
		{
			src[i] = Nm[j];
		}
	}
}
return (src);
}
