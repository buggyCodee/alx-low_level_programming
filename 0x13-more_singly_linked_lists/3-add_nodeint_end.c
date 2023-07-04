#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at
 *				the end of a listint_t list
 *
 * @head: the list
 * @n: the value to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (node);

	node->n = n;
	node->next = NULL;

	while (temp != NULL && temp->next != NULL)
		temp = temp->next;

	if (temp == NULL)
		*head = node;
	else
		temp->next = node;

	return (node);
}
