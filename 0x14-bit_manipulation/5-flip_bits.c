#include "main.h"

/**
 * flip_bits - finds the number of bits to be flipped to get
 * from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int lg, sm, count = 0;

	if (n == m)
	{
		return (0);
	}
	else if (n > m)
	{
		lg = n;
		sm = m;
	}
	else
	{
		lg = m;
		sm = n;
	}

	while (lg != 0)
	{
		if ((lg & 1) != (sm & 1))
			count++;
		lg = lg >> 1;
		sm = sm >> 1;
	}

	return (count);
}
