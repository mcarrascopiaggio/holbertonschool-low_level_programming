#include <stdio.h>

/**
* main - gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
*@argv: An array containing the program command line arguments.
*@argc: The number of command line arguments
* Return: 0.
*
*/


int main(int argc, char *argv[])
{
int i;
i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
	return (0);
}
