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
int i, sum = 1;

if (argc == 1)
	printf("0");
if (argc > 1)
{
	for (i = 1; i < argc; i++)
	{
	if (atoi(argv[i]) > 0 && isdigit(argv[i] != 0)
	{
			sum = sum + atoi(argv[i]);
	}
	else
	{
		printf("error");
		return (1);
	}
	}	
printf("%d\n", sum);
	return (0);
}
