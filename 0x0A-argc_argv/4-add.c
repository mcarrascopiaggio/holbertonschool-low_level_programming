#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds positive numbers.
*@argv: An array containing the program command line arguments.
*@argc: The number of command line arguments
* Return: 0.
*
*/

int main(int argc, char *argv[])
{
int i, j, sum = 1;
int count = 0;

if (argc == 1)
	printf("0\n");
if (argc > 1)
{
	for (i = 1; i < argc; i++)
	{
	if (isdigit(argv[i] == 0))
	{
	count++;
	}
	if (count != 0)
	{
		for (j = 1; j < argc; j++)
		{
		sum = sum + atoi(argv[j]);
		printf("%d\n", sum);
		}
	}
	else
	{
	printf("error\n");
	return (1);
	}
	}
	}
return (0);
}
