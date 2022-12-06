#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of the file to read
 * @letters: the number of letters
 *
 * Return: the numberof letters it could read or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	long int r;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
		return (0);

	r = read(fd, buf, letters);

	if (r <= 0)
	{
		close(fd);
		return (0);
	}

	r = write(STDOUT_FILENO, buf, r);

	if (r < 0)
		return (0);

	close(fd);
	free(buf);

	return (r);
}
