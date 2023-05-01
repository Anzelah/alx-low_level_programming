#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete the head node of linked list listint_t
 * @head: double pointer to linked list
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp; /* variable to hold head node */

	if (*head == NULL) /* check if list is empty */
		return (0);

	data = (*head)->n; /* retrieve first node's value */

	temp = *head; /* access first node in the list */
	*head = (*head)->next; /* move head pointer to point to the next node */
	free(temp); /* free memory allocated to first node */

	return (data);
}
