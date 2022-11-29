#include "lists.h"

/**
 * sum_listint - returns the sum of all data in a lined list
 * @head: the list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *list = head;
	int sum = 0;

	if (!list)
		return (0);

	while (list)
	{
		sum += list->n;
		list = list->next;
	}

	return (sum);
}
