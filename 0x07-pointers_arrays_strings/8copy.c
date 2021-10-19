#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints the sum of the two diagonals of a square matrix of int
*@a: array of interger
*@size: dim
*Return: Always 0.
*/

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
	sum1 = sum1 + a[i * (size + 1)];
	}
	for (j = size; j > 0; j--)
	{
	sum2 = sum2 + a[j * (size - 1)];
	}
printf(("%d,%d\n"), sum1, sum2);
}
