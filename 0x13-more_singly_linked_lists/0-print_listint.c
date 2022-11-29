#include "lists.h"

/**
 * print_listint - prints a list
 * @h: the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *list = h;
	size_t count = 0;

	if (!h)
		return (0);

	while (list)
	{
		printf("%d\n", list->n);
		count++;
		list = list->next;
	}

	return (count);
}
