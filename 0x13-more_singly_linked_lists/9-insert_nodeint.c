#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 *				at a given position
 *
 * @head: list
 * @idx: index to be insert node to
 * @n: the value of the node to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL || (*head == NULL && idx != 0))
		return (NULL);

	node->n = n;
	node->next = NULL;

	for (; i < idx && current; i++, prev = current, current = current->next)
		;

	if (i != idx)
	{
		free(node);
		return (NULL);
	}

	node->next = current;

	if (prev == NULL)
		*head = node;
	else
		prev->next = node;

	return (node);
}
