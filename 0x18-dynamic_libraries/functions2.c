#include "main.h"
/**
*_isdigit(int c)-  check if a variable is a digit
*@c: The integer to check
*Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _isdigit(int c)

{
	if (c >= 48  && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
}
}
/**
*_strlen - lenghth of a string
*@s: parametrer one
*Return: Always 0.
*/


int _strlen(char *s)
{

int l;
int i;
l = 0;

for (i = 0; s[i] != 0 ; i++)
	{
	l = l + 1;
	}
return (l);
}
/**
*_puts - lenghth of a string
*@str: parametrer one
*Return: Always 0.
*/


void _puts(char *str)
{

int i;

for (i = 0; str[i] != 0 ; i++)
	{
	_putchar(str[i]);
	}
_putchar(10);
}
/**
*_strcpy - swaps values
*@src: character source
*@dest: character destination
*Return: Always 0.
*/


char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0 ; src[i] != 0 ; i++)
	{
	dest[i] = src[i];
	}
dest[i++] = 0;
return (dest);
}
/**
 * _atoi - fuction that translates character to int- codigo ray
 * @s: string to be translated
 * Return: value of the int
 */

int _atoi(char *s)
{
	int i, j, emp = 0, signo = 0, exp = 1, num = 0, len = 0, c1 = 0, c2 = 0;

	for (i = 0; s[i] != '\0'; i++)
		c1++;
	c1--;
	i = 0;
	for (i = 0; i <= c1; i++)
		if (s[i] > 57 || s[i] < 48)
			c2++;
	c2--;
	i = 0;
	for (i = 0; s[i] < 48 || s[i] > 57; i++)
		emp++;
	for (j = emp; !(s[j] < 48 || s[j] > 57); j++)
		len++;
	i = 0;
	while (i < emp)
	{
		if (s[i] == 45)
			signo++;
		i++;
	}
	if (signo % 2 != 0)
		exp = exp * (-1);
	i = 0;
	while (i < len)
	{
		j = emp + len - 1;
		num = (exp * ((s[j - i]) - 48)) + num;
		if (num < 2147483647 && num > -2147483648)
			exp = exp * 10;
		i++;
	}
	if (c1 < 0 || (c1 == c2))
		num = 0;
	return (num);
}
