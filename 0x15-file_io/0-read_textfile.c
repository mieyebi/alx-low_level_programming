#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t x, y;
	char *buf = NULL;


	if (filename == NULL)
		return (0);

	 file = open(filename, O_RDONLY);

	 if (file == -1)
		 return (0);

	x = read(file, buf, letters);
	y = write(STDOUT_FILENO, buf, x);

	close(file);
	return (y);
}
