#include <stdio.h>
#include <stdlib.h>

/**
* main - change
*@argv: An array containing the program command line arguments.
*@argc: The number of command line arguments
* Return: 0.
*
*/


int main(int argc, char *argv[])
{
int m = 0;
int q = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

m = atoi(argv[1]);
if (m >= 25)
{
q = q + m / 25;
m = m  % 25;
}
if (m >= 10)
{
q = q + m / 10;
m = m % 10;
}
if (m >= 5)
{
q = q + m / 5;
m = m % 5;
}
if (m >= 2)
{
q = q + m / 2;
m = m % 2;
}
if (m >= 1)
{
q = q + m;
}

printf("%d\n", q);
return (0);
}
