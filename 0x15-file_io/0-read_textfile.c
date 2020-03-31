#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints
 *  it to the POSIX standard output.
 *
 * @filename: pointer to file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count;
	char *buf;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);

		buf = malloc(sizeof(char) * letters);
		if (buf == NULL)
			return (0);

		count = read(fd, buf, letters);
		if (count == -1)
		{
			free(buf);
			return (0);
		}

		count = write(STDOUT_FILENO, buf, count);
		free(buf);
		if (count == -1)
			return (0);

		if (close(fd) == -1)
			return (0);

		return (count);
	}
	return (0);
}
