#include "lists.h"

/**
 * free_dlistint - free a distint.t list
 * @head: pointer to head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp; /* initialize variable, will point to same node as head */

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
