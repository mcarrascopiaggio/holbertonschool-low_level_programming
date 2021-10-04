#include <stdio.h>

/**
 * main - print the reverse alphabet
 * Description: prints the alphabet in lowercase
 * Return: 0.
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch <= 'a'; ch --1)
	putchar (ch);
	putchar ('\n');
	return (0);
}
