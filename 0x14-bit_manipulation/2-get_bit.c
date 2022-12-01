#include "main.h"

/**
 * get_bit - gets the bit value at a given index
 * @n: the integer
 * @index: the index
 *
 * Return: the value or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= 64; i++)
	{
		if (index == i)
			return (n & 1);
		n = n >> 1;
	}

	return (-1);
}
