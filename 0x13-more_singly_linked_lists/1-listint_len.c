#include "lists.h"

/**
 * listint_len - prints a list
 * @h: the list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *list = h;
	size_t count = 0;

	while (list)
	{
		count++;
		list = list->next;
	}

	return (count);
}
