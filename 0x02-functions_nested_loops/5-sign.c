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
	return (1);
	_putchar (43);
	_putchar (49);
	}
	else if (n < 0)
		{
		return (-1);
		_putchar (45);
		_putchar (49);
		}
		else
		{
			return (0);
			_putchar(48);
			_putchar(48);
		}
}


