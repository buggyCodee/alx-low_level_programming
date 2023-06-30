#include "lists.h"
#include <stdio.h>
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
		for (list_t *temp = h; temp != NULL; temp = temp->next, nodes++)
			if (temp->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%lu] %s\n", temp->len, temp->str);

	return (nodes);
}
