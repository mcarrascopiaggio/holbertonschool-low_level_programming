#include "main.h"


/**
*_islower -  check if a variable is lowercase
*@c: The integer to print
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
}
}

