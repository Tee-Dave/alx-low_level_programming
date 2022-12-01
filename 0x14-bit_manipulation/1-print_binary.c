#include "main.h"

/**
 * print_binary - prints a number in binary
 * @n: the integer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
