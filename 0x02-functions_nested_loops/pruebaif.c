/**
*main -  prints the kind of number..
*Description: prints if a number is positive or negativa
*Return: 0.
*/

int main(void)
{
for(int i = 0; i < 100 ; i++)
	{
	putchar((i/10)+'0');
	putchar((i%10)+'0');
	putchar("\n");
	}
return(0);
}
