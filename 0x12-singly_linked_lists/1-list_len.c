#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements
 *			in a linked list_t list
 *
 * @h: node pointer to the start element of linked list
 *
 * Return: number of elements in a linked
 */

size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}

	return (length);
}
