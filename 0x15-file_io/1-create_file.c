#include "main.h"

/**
 *create_file - function that creates a file
 *@filename: is the name of the file to create.
 *@text_content: NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fd;
int w;
int i;

if (filename == NULL)
	return (-1);

fd = open(filename, O_RDONLY, 600);

if (fd == -1)
	return (-1);
for (i = 0; text_content[i] != '\0'; i++)
{
}
w = write(fd, text_content, i);
if (w == -1)
	return (-1);

close(fd);
return (fd);
}
