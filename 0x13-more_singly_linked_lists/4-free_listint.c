#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: first node of the list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = temp->next;

		free(head);
		head = temp;
	}
}
