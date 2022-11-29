#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: the list
 * @index: the index of the node to return
 *
 * Return: node if found and NULL if not
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (!temp)
		return (NULL);

	if (index == 0)
		return (temp);

	for (i = 0; i < index - 1; i++)
	{
		if (!temp->next)
			return (NULL);
		temp = temp->next;
	}

	return (temp->next);
}
