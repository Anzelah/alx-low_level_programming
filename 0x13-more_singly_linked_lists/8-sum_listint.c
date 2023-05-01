#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - finds the sum of all data of listint_t linked list
 * @head: pointer to head node
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (head == NULL) /* if list is empty */
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n; /* add current node value to sum */
		ptr = ptr->next; /* increment pointer to next node */
	}

	return (sum);
}
