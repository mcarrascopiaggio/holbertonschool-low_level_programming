#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*op_add - function tu add two values
*@a: one int
*@b: second int
*Return: the result of the funcion
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
*op_sub - function tu add two values
*@a: one int
*@b: second int
*Return: the result of the funcion
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
*op_mul - function tu add two values
*@a: one int
*@b: second int
*Return: the result of the funcion
*/

int op_mul(int a, int b)
{
return (a * b);
}
/**
*op_div - function tu add two values
*@a: one int
*@b: second int
*Return: the result of the funcion
*/
int op_div(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
}
return (a / b);
}

/**
*op_mod - function tu add two values
*@a: one int
*@b: second int
*Return: the result of the funcion
*/

int op_mod(int a, int b)
{
if (b == 0)
{
	printf("Error\n");
	exit(100);
}
	return (a % b);
}
