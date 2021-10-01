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
	long longType;
	long long longlongType;
	char charType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
