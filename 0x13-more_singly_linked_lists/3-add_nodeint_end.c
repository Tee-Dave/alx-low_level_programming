#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the listint_t list
 * @head: pointer to list
 * @n: integer to add
 *
 * Return: address of new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list, *temp;

	temp = *head;
	list = malloc(sizeof(listint_t));

	if (!list)
		return (NULL);

	list->n = n;
	list->next = NULL;

	if (!(*head))
	{
		*head = list;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = list;
	}

	return (*head);
}
