#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 *				at index index of a listint_t linked list
 *
 * @head: list
 * @index: target node index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev = NULL;
	listint_t *current = *head;

	for (; i < index && current != NULL; i++, prev = current,
						current = current->next)
		;

	if (i != index || current == NULL)
		return (-1);

	prev->next = current->next;

	free(current);

	return (1);
}
