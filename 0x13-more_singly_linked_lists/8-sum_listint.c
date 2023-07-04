#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of
 *			a listint_t linked list
 *
 * @head: list
 *
 * Return:	sum of all the data (n)
 *		if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	for (temp = head; temp != NULL; temp = temp->next)
	        sum += temp->n;

	return (sum);
}
