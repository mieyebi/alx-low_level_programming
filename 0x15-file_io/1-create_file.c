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

	int fd, len;

	len = 0;

	while (*text_content != '\0')
		len++;

	fd = open(filename, O_CREAT, 0600);

	if (fd == 0)
		return (-1);

	write(fd, text_content, len);

	close(fd);

	return (1);
}
