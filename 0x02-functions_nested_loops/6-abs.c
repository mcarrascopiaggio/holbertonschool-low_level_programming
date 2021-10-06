#include "main.h"


/**
*_abs -  return the absolute number
*@n: The integer to print
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _abs(int n)

{
	if (n >=  0)
	{
	return (n);
	}
	else
	{
	return (n * -1);
	}
}


