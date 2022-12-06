#include "main.h"

/**
 * append_text_to_file - appends a text to a file
 * @filename: the name of the file
 * @text_content: the text to append
 *
 * Return: 1 if successful and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	long int r;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		r = write(fd, text_content, strlen(text_content));
		if (r < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
