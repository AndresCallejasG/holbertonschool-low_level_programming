#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - copies the content of a file to another file.
 *
 * @argc: number of arguments
 * @argv: array with argumentes
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int fd, new_fd, buf_count = 1024, count = 0;
	char buf[1024];

	if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		new_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (new_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
		while (buf_count == 1024)
		{
			buf_count = read(fd, buf, 1024);
			if (buf_count == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
				exit(98);
			}
			count = write(new_fd, buf, buf_count);
			if (count == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
		if (close(fd) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", fd), exit(100);
		if (close(new_fd) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", new_fd), exit(100);
		return (0);
	}
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
