#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index
 * @head: doble pointer to head node
 * @index: index of node that should be deleted. It starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;
	dlistint_t *ptr = *head;

	if (*head == NULL) /* list is empty */
		return (-1);

	if (index == 0) /* at the beiginning */
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(ptr);
		return (1);
	}

	for (i = 0; i < index && ptr != NULL; i++)
		ptr = ptr->next;
	if (ptr == NULL)
	{
		return (-1);
	}
	else if (ptr->next == NULL)
		ptr->prev->next = NULL;
	else
	{
		temp = ptr;
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
		free(temp);
	}
	return (1);
}
