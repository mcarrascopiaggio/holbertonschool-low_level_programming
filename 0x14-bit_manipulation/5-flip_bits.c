#include "main.h"

/**
 *flip_bits - function to count different bits
 *@n: one number
 *@m: second number
 *Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int flips = 0;
unsigned int pn = 0;
unsigned int pm = 0;

while (n > 0 || m > 0)
{
pn = (n & 1);
pm = (m & 1);

if (pn == pm)
	flips++;
n >>= 1;
m >>= 1;
}

return (flips);
}

