#include "stdio.h"
#include "stdlib.h"

/**
 *main - Prints the multiplication of two args numbers
 *@argc: argument counter
 *@argv: argument vector
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n = 0;
	int m = 0;

	if (argc == 3)
	{
	n = atoi(argv[1]);
	m = atoi(argv[2]);
	printf("%d\n", n * m);
	}
	else
	{
	printf("Error\n");
	return (1);
	}

	return (0);
}
