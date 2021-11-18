#include "main.h"

/**
 *get_bit - index of a bit
 *@n: number input
 *@index: the place to check value
 *Return: the value of the bit in index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > sizeof(long int) * 8) /** situacion index is does not exist in n)*/
	return (-1);

n = n >> index; /**traverse bits until index div by 2 index time*/
if (n & 1)
{
	return (1);
}
else
{
	return (0);
}
}
