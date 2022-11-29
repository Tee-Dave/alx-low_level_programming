#include "lists.h"

/**
 * free_listint - adds a new node at the end of the list_t list
 * @head: pointer to list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head, *temp2;

	if (head)
	{
		while (temp->next)
		{
			temp2 = temp;
			temp = temp->next;
			free(temp2);
		}

		free(temp);
	}
}
