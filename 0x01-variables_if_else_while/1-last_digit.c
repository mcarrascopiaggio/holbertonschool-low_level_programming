#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  prints the last number.
 * Description: print the last number and give a range
 * Return: 0.
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	printf("Last digit of %d is %d and is ", n, r);
	if (r > 5)
		printf("greater than 5\n");
	else if (r < 6 && r != 0)
		printf("less than 6 and not 0\n");
	else
		printf("0\n");
	return (0);
}
