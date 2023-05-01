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

	if (head == NULL || *head == NULL) /* check if list or head pointer is empty */
		return (0);

	data = (*head)->n;

	while (*head != NULL)
	{
		temp = *head; /* access first node in the list */
		*head = (*head)->next; /* move head pointer to point to the next node */
		free(temp); /* free memory allocated to first node */
	}

	return (data);
}
