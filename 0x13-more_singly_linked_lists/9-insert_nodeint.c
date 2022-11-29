#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the list
 * @idx: the index to insert
 * @n: the data of the new node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!temp->next || !temp)
			return (NULL);
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
