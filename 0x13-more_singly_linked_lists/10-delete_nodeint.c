#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a new node at a given position
 * @head: the list
 * @index: the index to insert
 *
 * Return: 1 if successful and -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *temp2;
	unsigned int i;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!temp->next)
			return (-1);
		temp = temp->next;
	}
	temp2 = temp->next;
	temp->next = temp->next->next;

	free(temp2);

	return (1);
}
