#include "main.h"


/**
*print_last_digit - writes the character c to stdout
*@n: The character to print
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int print_last_digit(int n)
{

	int ln = n % 10;

	if (ln < 0)
	ln *= -1;
	_putchar(ln + '0');
	return (ln);

}
