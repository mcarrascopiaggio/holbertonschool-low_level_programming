#include "main.h"

/**
*print_chessboard - print the num character with concidence.
*@a: the string to be scanned.
*Return: number of coincidence in bytes.
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < *a; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a);
		}
		
	}
}
