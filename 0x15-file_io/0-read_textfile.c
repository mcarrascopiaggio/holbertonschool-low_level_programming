#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: pointer to the contenct
 *@letters: number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
int n;
ssize_t w;
char *buf;

buf = malloc(sizeof(char) * letters);
fd = open(filename, O_RDONLY);

if (filename == NULL)
	return (0);

if (fd == -1)
	return (0);

n = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, n);

if (w == -1)
	return (0);

close(fd);
free(buf);
return (w);
}
