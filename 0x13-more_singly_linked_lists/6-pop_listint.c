#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 *
 * @head: list
 *
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int number = 0;

	if (*head != NULL)
	{
		listint_t *temp = (*head)->next;

		number = (*head)->n;

		free(*head);
		*head = temp;
	}

	return (number);
}
