#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * length - returns a length of string
 *
 * @str: input string
 *
 * Return: length of string
 */

int length(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		++len;

	return (len);
}

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 *
 * @head: pointer to the first node of the linked list
 * @str: the string [data] to the new node adde to the linked list
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (new_node);

	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->str = length(str);

	if (*head == NULL)
		*head = new_node;
	else
		new_node->next = *head;

	return (new_node);
}
