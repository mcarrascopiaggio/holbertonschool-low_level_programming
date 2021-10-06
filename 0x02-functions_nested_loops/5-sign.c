#include "main.h"


/**
*print_sign -  check if a variable is lowercase
*@n: The integer to print
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar (43);
	return (1);
	}
	else if (n < 0)
		{
		_putchar (45);
		return (-1);
		}
		else
		{
			_putchar(48);
			return (0);
		}
}


