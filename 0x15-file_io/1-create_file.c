#include "main.h"

int len(char *text);

/**
 * create_file - creates a file if it dos not exist and adds text
 * if file does exist it truncates the file
 * @filename: name of file
 * @text_content: string to add to file
 *
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length_of_text;
	ssize_t w = 0;
	/*checks*/
	if (!filename)
		return (-1);
	/* length of text_content*/
	length_of_text = (!text_content) ? 0 : len(text_content);

	/* creates file if does not exist, if exists truncates*/
	fd = open(filename, O_RDWR | O_TRUNC);

	if (fd == -1)
		fd = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);

	if ((fd != -1) && length_of_text > 0)
		w = write(fd, text_content, length_of_text);
	else if (length_of_text == 0)
		return (1);
	else
		return (-1);

	/* check retval of write */
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}

/**
 * len - returns the length of a string
 * @text: string
 *
 * Return: length of string
 */

int len(char *text)
{
	int i = 0;

	while (text[i])
		i++;

	return (i);
}
