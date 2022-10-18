#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 *
 * @c: the character to check input
 *
 * Return: returns 1 if `c` is lowercase otherwise 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
