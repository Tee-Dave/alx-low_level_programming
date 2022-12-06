#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: 1 on success and 0 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	long int r;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
