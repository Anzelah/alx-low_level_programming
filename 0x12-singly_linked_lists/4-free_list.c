#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - free the linked in list list_t
 * @head: pointer to the linked list
 *
 */

void free_list(list_t *head)
{
	list_t *temp;
	/* temp = head; */

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
