#include <stdio.h>
#include <stdlib.h>

/**
* main - program that multiplies two numbers
*@argv: An array containing the program command line arguments.
*@argc: The number of command line arguments
* Return: 0.
*
*/


int main(int argc, char *argv[])
{
int i, mul = 1;

if (argc > 1)

for (i = 1; i < argc; i++)
{
mul = mul *atoi(argv[i]);
}
printf("%d\n", mul);
	return (0);
}
