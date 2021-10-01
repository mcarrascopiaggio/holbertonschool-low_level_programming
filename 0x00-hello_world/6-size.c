#include<stdio.h>

/**
 * main - prints the size of differents kind of varieble.
 * Description: size of varieble
 * Return: 0.
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of a char: %zu byte\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(intType));
	printf("Size of a long long int: %zu bytes\n", sizeof(doubleType));
	printf("Size of a float: %zu byte\n", sizeof(floatType));
	return (0);
}
