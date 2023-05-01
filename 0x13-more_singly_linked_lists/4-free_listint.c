#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free the linked list listint_t
 * @head: pointer to linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
