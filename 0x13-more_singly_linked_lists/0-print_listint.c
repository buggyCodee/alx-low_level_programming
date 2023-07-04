#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: pointer to the head
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *temp;

	for (temp = h; temp != NULL; temp = temp->next, nodes++)
		printf("%d\n", temp->n);

	return (nodes);
}
