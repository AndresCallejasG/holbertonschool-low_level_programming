#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * create_file - creates a file.
 *
 * @filename: pointer to file
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, count, size;

	if (filename)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);

		/*empty file case*/
		if (text_content == NULL)
			return (1);
		while (text_content[size] != 0)
			size++;
		count = write(fd, text_content, size);
		if (count == -1)
			return (-1);

		if (close(fd) == -1)
			return (-1);

		return (1);
	}
	return (-1);
}
