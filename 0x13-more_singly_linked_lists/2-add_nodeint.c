#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list_t list
 * @head: pointer to list
 * @n: integer to add
 *
 * Return: address of new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list = NULL;
	listint_t *temp = *head;

	list = malloc(sizeof(listint_t));

	if (!list)
		return (NULL);

	list->n = n;
	list->next = temp;

	*head = list;


	return (list);
}
