#include "main.h"

int len(char *text);

/**
 * append_text_to_file - append text to an existing file
 * @filename: filename
 * @text_content: string to append
 *
 * Return: 1 on success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t w;
	int fd, length;

	if (!filename)
		return (-1);
	if (!text_content)
		length = 0;
	else
		length = len(text_content);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd != -1 && length > 0)
	{
		w = write(fd, text_content, length);
		if (w == -1)
			return (-1);
	}
	else if (length == 0)
		return (1);
	else
		return (-1);
	close(fd);
	return (1);
}

/**
 * len - returns the length of a string
 * @text: string
 *
 * Return: length of a given string
 */

int len(char *text)
{
	int i = 0;

	while (text[i])
		i++;

	return (i);
}
