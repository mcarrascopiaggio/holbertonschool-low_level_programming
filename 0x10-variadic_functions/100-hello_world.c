#include <unistd.h>

#define STDOUT 1

/**
 * main - print hellow
 * Return: nothing
 */

int main(void)
{
write(STDOUT, "Hello world!\n", 13);
_exit(0);
}
