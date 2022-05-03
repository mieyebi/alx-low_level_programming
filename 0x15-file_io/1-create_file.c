#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
* create_file - creates a text file
*
* @filename: name of file to be created
*
* @text_cotent: null terminated string to write to the file
*
* Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{

	int fd, len, wr;

	len = 0;

	while (*text_content != '\0')
		len++;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	wr = write(fd, text_content, (len + 1));

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
