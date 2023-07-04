#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *			The function sets the head to NULL
 *
 * @head: list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (*head != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
