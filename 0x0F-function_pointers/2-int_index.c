#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index- function to search for integer
 * @array: array of integers
 * @size: number of array elements
 * @cmp: function pointer
 *
 * Return: function pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
