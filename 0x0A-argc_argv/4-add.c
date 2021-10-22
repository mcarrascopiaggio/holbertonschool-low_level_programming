#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - program that add two numbers
*@argv: An array containing the program command line arguments.
*@argc: The number of command line arguments
* Return: 0.
*
*/


int main(int argc, char *argv[])
{
int i;
int j;
int m;
int sum = 0;
int c;

if (argc == 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (isdigit(argv[i][j] == 0))
		{
			c++;
		}
if (c != 0)
{
	for (m = 1; m < argc; m++)
	{
		sum = sum + atoi(argv[m]);
	}
	printf("%d\n", sum);
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
