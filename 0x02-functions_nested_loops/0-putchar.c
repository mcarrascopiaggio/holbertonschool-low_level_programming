#include "main.h"


/**
 *main - print the word _putchar
 *print the word using the function _putchar
 *Return: 0.
 */

int main(void)
{

	int i;
	char PC [] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar(PC[i]);
	}
	_putchar('\n');
return (0);
}
