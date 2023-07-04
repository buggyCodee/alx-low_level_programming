#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 *				a listint_t linked list
 *			index is the index of the node, starting at 0
 *
 * @head: list
 * @index: target index
 *
 * Return:	nth node of a listint_t
 *		if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
        unsigned int i = 0;

	for (temp = head; temp != NULL; temp = temp->next, i++)
		if (i == index)
			return (temp);

	return (NULL);
}
