#include "main.h"


/**
*jack_bauer - writes the hours
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

void jack_bauer(void)
{
	int H;
	int h;
	int M;
	int m;

	for (H = '0'; H < '3'; H++)
	{
		for (h = '0'; h <= '9'; h++)
		{
			for (M = '0' ; M < '6'; M++)
			{
				for (m = '0'; m <= '9'; m++)
				{
					if (H != '2' || h < '4')
					_putchar(H);
					_putchar(h);
					_putchar(':');
					_putchar(M);
					_putchar(m);
					_putchar(10);
				}
			}
		}
	}
}
