#include "main.h"


/**
*_isupper -  check if a variable is uppercase
*@c: The integer to print
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _isupper(int c)

{
	if (c >= 61  && c <= 121)
	{
	return (1);
	}
	else
	{
	return (0);
}
}

