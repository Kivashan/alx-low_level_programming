#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void free_buffer(char *buffer, int fd);

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: file name or path
 * @letters: number of characters to read
 *
 * Return: The number of characters read and printed, 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	int fd;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	/* checks for NULL or malloc fail */
	if (!buffer || !filename)
		return (0);

	fd = open(filename, O_RDONLY);
	/*checks if open was successful */
	if (fd != -1)
	{
		r = read(fd, buffer, letters);
		/* checks if read was successful */
		if (r != -1)
			w = write(STDOUT_FILENO, buffer, r);
		else
		{
			free_buffer(buffer, fd);
			return (0);
		}
	}
	else
	{
		free_buffer(buffer, fd);
		return (0);
	}
	if (w != r)
	{
		free_buffer(buffer, fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}

/**
 * free_buffer - frees buffer and exits with exit code zero
 * @buffer: malloc'ed string to free
 * @fd: file descriptor
 *
 * Return: Void
 */

void free_buffer(char *buffer, int fd)
{
	free(buffer);
	close(fd);
}
