#include "main.h"


/**
*_isupper(int c)-  check if a variable is a upper
*@c: The integer to check
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _isupper(int c)

{
	if (c >= 65  && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
}
}

