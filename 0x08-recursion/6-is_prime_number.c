#include "main.h"
/**
 *check - check if a number is prime.
 *@n: number being checker
 *@i: divisor use for check wheter n is prime
 *Return: 1 if the input integer is a prime number, otherwise return 0
 */

int check(int i, int n)
{
i = 2;
if (n > 1)
{
	if (n % i == 0)
	{
	return (1);
	}
	check(1 + i, n);
}
	else
	{
	return (0);
	}
return (-1);
}
/**
 *is_prime_number - returns 1 if the input integer is a prime number0.
 *@n: number being checked
 *Return: 1 or 0
 */

int is_prime_number(int n)
{
if (check(2, n == 1))
{
return (1);
}
if (check(2, n) == 0)
{
return (0);
}
	return (0);
}
