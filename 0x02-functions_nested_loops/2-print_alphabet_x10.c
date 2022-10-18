#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int times, ch;


	for (times = 0; times <= 9; times++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
