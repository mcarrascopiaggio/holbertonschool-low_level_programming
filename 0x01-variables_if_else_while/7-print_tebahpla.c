#include <stdio.h>

/**
 * main - print the alphabet
 * Description: prints the alphabet in lowercase
 * Return: 0.
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}

	putchar ('\n');
	return (0);
}
