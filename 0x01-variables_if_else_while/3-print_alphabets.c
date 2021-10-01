#include <stdio.h>

/**
 * main - print the alphabet
 * Description: prints the alphabet in lowercase
 * Return: 0.
 */
int main(void)
{
	int ch;
	int CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar (ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
	putchar (CH);
	putchar ('\n');
	return (0);
}
