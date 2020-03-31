#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * append_text_to_file -  function that appends text at the end of a file.
 *
 * @filename: pointer to file
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count, size;

	if (filename)
	{
		if (text_content == NULL)
			return (1);
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);

		while (text_content[size])
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
