#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
* read_textfile - reads a test file
*
* @filename: name of file to be read
*
* @letters: number of letters to be read or printed
*
* Return: 0 or number of letters it can print
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buf;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDWR);

	if (file == -1)
		return (0);

	buf = malloc(sizeof(letters));

	if (buf == NULL)
		return (0);

	read(file, buf, letters);
	write(1, buf, letters);

	close(file);

	free(buf);

	return (letters);
}
