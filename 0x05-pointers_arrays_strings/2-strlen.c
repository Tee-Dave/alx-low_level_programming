#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int cntr;

	for (cntr = 0; *s != '\0'; ++s)
		++counter;

	return (cntr);
}
