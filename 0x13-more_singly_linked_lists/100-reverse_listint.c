#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 *
 * @head: list
 *
 * Returns: pointer to the first node of the reversed list
 *
 * Notes:	You are not allowed to use more than 1 loop.
 *		You are not allowed to use malloc, free or arrays
 *		You can only declare a maximum of two variables in your function
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;

	while (*head != NULL)
	{
		*head = (*head)->next;
		current->next = prev;
		prev = current;
		current = *head;
	}

	*head = prev;
	return (*head);
}
