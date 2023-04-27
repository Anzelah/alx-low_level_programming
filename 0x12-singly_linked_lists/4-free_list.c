#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list_t linked list
 * @head: pointer to linked list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head; /* save current node in temp */
		head = head->next; /* move to next node in list iteratively */
		free(temp->str); /* free any string member in node if it exists */
		free(temp); /* free the node itself */
	}
}
