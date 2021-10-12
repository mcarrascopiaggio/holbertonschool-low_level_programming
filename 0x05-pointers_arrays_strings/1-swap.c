#include "main.h"

/**
*swap_int - swaps values
*@a: parametrer one
*@b: parametrer two
*Return: Always 0.
*/


void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
