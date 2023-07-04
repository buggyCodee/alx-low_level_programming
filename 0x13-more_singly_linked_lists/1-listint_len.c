#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t size = 0;
	const listint_t *temp;

	for (temp = h; temp != NULL; temp = temp->next, size++)
		;

	return (size);
}
