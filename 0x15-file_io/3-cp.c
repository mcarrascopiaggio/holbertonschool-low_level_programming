#include "main.h"

/**
 *main - cp a file in in another
 *@argc: argument number
 *@argv: argument vector
 *Return: 1 if succes
 */

int main(int argc, char **argv)
{

int file_from, file_to;

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

file_from = open(argv[1], O_RDONLY, 0664);
if (file_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}

file_to = open(argv[2], O_WRONLY, 0664);
if (file_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
}

return (1);
}

