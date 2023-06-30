#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: node pointer to the first elements of list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}

	return (nodes);
}
