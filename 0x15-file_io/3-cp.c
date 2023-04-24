#include "main.h"
#include <stdlib.h>

int _close(int fd1, int fd2);
int _write(int fd2, char *buffer, char *argv);
int _read(int fd1, char *buffer, char *argv);

/**
 * main - Entry point
 * @argc: No of arguments
 * @argv: arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd1, fd2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open file 1 if it exists*/
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[1]);
		exit(98);
	}
	/* open file 2 */
	fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 00664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/* malloc check */
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		exit(-1);

	_read(fd1, buffer, argv[1]);

	_write(fd2, buffer, argv[2]);

	_close(fd1, fd2);
	free(buffer);
	return (0);
}

/**
 * _close - closes fd1 and fd2
 * @fd1: file descriptor
 * @fd2: file descriptor
 *
 *
 * Return: 0 on successful close
 */

int _close(int fd1, int fd2)
{
	int r = 0, w = 0;

	r = close(fd1);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd1);
		exit(100);
	}
	w = close(fd2);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}

/**
 * _write - writes to fd
 * @fd2: file descriptor
 * @buffer: buffer to read from
 * @argv: string
 * Return: Number of bytes written
 */

int _write(int fd2, char *buffer, char *argv)
{
	int w = 0;

	w = write(fd2, buffer, 1024);
	if (w == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		exit(99);
	}

	return (w);
}

/**
 * _read - reads from fd
 * @fd1: file descriptor
 * @buffer: buffer to store read data
 * @argv: string
 * Return: Number of bytes read
 */

int _read(int fd1, char *buffer, char *argv)
{
	int r = 0;

	r = read(fd1, buffer, 1024);
	if (r == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv);
		exit(98);
	}
	return (r);
}
