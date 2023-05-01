#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free linked list wwhie setting head to NULL
 * @head: double pointer to linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	else
		return;

	*head = NULL;
}
