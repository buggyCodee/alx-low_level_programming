#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: pointer to the first node to the list to be freed
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head->next;

		free(head);
		head = temp;
	}
}
