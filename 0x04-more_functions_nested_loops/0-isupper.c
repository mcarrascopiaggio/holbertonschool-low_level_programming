#include "main.h"


/**
*_isdigit-  check if a variable is a digit
*@c: The integer to print
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _isdigit(int c)

{
	if (c >= 48  && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
}
}

