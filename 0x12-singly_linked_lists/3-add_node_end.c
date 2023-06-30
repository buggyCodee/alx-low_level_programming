#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 *
 * @head: pointer to the first node of the linked list
 * @str: the string [data] to the new node adde to the linked list
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (new_node);

	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	while (*head && (*head)->next != NULL)
		*head = (*head)->next;

	if (*head)
		(*head)->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
