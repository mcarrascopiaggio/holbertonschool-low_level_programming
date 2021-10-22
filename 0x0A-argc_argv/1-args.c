#include <stdio.h>

/**
* main - prints the number of arguments passed into it..
*@argv: An array containing the program command line arguments.
*@argc: The number of command line arguments
* Return: 0.
*
*/




int main(int argc, char *argv[])
{
int n;

(void)argv;

n = (argc - 1);
printf("%d\n", n);
	return (0);
}
