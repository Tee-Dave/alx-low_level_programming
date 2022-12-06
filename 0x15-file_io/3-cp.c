#include "main.h"

/**
 * leave_now - exits
 * @code: the exit case
 * @argv: command line args
 *
 * Return: void
 */
void leave_now(int code, char *argv[])
{
	switch (code)
	{
	case 1:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
		break;
	case 2:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
		break;
	case 3:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		break;
	}
}

/**
 * main - copies a file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int from_d, copy_d;
	ssize_t i = 0, q = 0;
	char text[1024];

	if (argc != 3)
		leave_now(1, argv);

	from_d = open(argv[1], O_RDONLY);
	if (from_d < 0)
		leave_now(2, argv);

	copy_d = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 00664);
	if (copy_d < 0)
		leave_now(3, argv);

	q = 1024;
	while (q == 1024)
	{
		q = read(from_d, text, q);
		if (q == -1)
			leave_now(2, argv);
		i = write(copy_d, text, q);
		if (i == -1)
			leave_now(3, argv);
	}
	q = close(from_d);
	if (q == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_d);
		exit(100);
	}
	q = close(copy_d);
	if (q == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copy_d);
		exit(100);
	}
	return (0);
}
