#include "lists.h"

/**
 * free_listint2 - free list
 * @head: pointer to list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp2;

	if (!head)
		return;

	while (*head)
	{
		temp2 = *head;
		*head = (*head)->next;
		free(temp2);
	}

	*head = NULL;
}
