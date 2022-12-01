#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to integer
 * @index: the index of bit to set
 *
 * Return: 1 if worked or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i, num = 1;

	if (index > 64)
		return (-1);

	for (i = 0; i < index; i++)
		num *= 2;

	*n = *n | num;

	return (1);
}

