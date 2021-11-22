#include "main.h"

/**
 *append_text_to_file - function that appends text at the end of a file.
 *@filename:name of the file
 *@text_content:NULL terminated string
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int i;
int w;

if (filename == NULL) /** if there are no file -1*/
	return (-1);

fd = open(filename, O_WRONLY | O_APPEND); /** open with op write and append*/
if (fd == -1)
	return (-1);
if (text_content)
{
	for (i = 0; text_content[i] != 0; i++)
	{
	;/**count lenght*/
	}
w = write(fd, text_content, i); /** write the text*/
if (w == -1)
	return (-1);
}
return (1);
}
