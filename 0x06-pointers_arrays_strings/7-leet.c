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
char Lt[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
char Nm[] = {'4', '3', '1', '0', '7', '4', '3', '1', '0', '7'};

for (i = 0 ; src[i] != 0 ; i++)
	{
			for (j = 0 ; j < 10 ; j++)
			{
				if (src[i] == Lt[j])
				{
					src[i] = Nm[j];
				}
			}
	}
return (src);
}
