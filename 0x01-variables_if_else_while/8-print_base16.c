#include <stdio.h>

/**
 * main - print numbers base 16
 * Description: prints all the numbers base 16
 * Return: 0.
 */
int main(void)
{
	int num;
	int ch;

	for (num = '0'; num <= '9'; num++)
	putchar (num);
	for (ch = 'a'; ch <= 'f'; ch++)
	putchar (ch);
	putchar ('\n');
	return (0);
}
