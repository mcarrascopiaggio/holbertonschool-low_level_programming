#include "main.h"

/**
*reverse_array - print reverse
*@a: an array of integers
*@n: the number of elements to swap
*Return: Always 0.
*/


void reverse_array(int *a, int n)
{
int temp;
int j;

temp = 0;

for (j = 0 ; j < n / 2; j++)
	{
	temp = a[n];
	a[n] = a[j];
	a[j] = temp;
	}

}
