#include <stdio.h>
#include <string.h>

/**
 * main - print the 0-9
 * Description: prints the 0,9 using putchar
 * Return: 0.
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
			if (ch == '6')
			{
				continue;
			}
		putchar (',');
	}
	putchar ('\n');
	return (0);
}
