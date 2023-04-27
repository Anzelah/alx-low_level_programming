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
		temp = head->next;
		free(head);
		head = temp;
	}
}
