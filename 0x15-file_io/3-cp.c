#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
* main - copies a text file
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int main(int argc, char *argv[])
{

	int cl, wr, rd, file_to, file_from;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "%s\n", argv[0]);
		exit(97);
	}

	buf = malloc(1024);

	file_from = open(argv[1], O_RDONLY);

	rd = read(file_from, buf, 1024);


	if (!file_from || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	wr = write(file_to, buf, strlen(buf));

	if (file_to == -1 || wr == -1)
	{
		dprintf(STDOUT_FILENO, "Can't write to %s\n", argv[2]);
		exit(99);
	}

	free(buf);
	cl = close(file_to);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
