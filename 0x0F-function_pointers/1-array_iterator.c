#include "function_pointers.h"

/**
  * array_iterator - function to iterate
  * @array: array to be iterated
  * @size: size of the array
  * @action: function pointer
  *
  * Return: action value
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
