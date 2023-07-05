#include "lists.h"

/**
 * print_listint_safe -  function that prints a listint_t linked list
 *
 * @head: list
 *
 * Return: number of nodes in the list
 *
 * This function can print lists with a loop
 * You should go through the list only once
 * If the function fails, exit the program with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;

	for (; head != NULL; head = head->next, size++)
	{
		if (head->next == NULL)
			printf("-> ");
		printf("[%p] %d\n", (void *)head, head->n);
	}

	return (size);
}
