#include "main.h"

/**
 *array_range - creates an array of integers
 *@min: min value(included)
 *@max: max value(included)
 *
 *Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
	return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
	return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
	p[i] = min;
	min++;
	}

	return (p);
}
