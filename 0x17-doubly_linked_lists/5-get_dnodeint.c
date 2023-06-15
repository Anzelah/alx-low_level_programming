#include "lists.h"

/**
 * get_dnodeint_at_index - find the nth node of a dlistint_t linked list
 * @head: pointer to head node
 * @index: index of the node, starting from 0
 *
 * Return: the nth node, or NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head; /*variable */
	unsigned int count = 0;

	if (!current)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (current);
}
