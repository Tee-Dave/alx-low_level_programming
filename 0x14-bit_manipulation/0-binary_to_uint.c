#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to binary
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, doubler = 1;
	int i, len;

	if (!b)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		if (b[i] == '1')
			num += doubler;
		doubler *= 2;
	}

	return (num);
}

