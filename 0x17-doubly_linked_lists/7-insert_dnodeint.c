#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: double pointer to head node
 * @idx: index of list where new node should be added, starts at 0
 * @n: data to be placed inside new node
 *
 * Return: address of new node, or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newnode;
	dlistint_t *temp = *h;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (*h == NULL) /* if lnked list is empty */
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	if (idx == 0)/* if new_node need to be added at the beginning */
	{
		return (add_dnodeint(h, n));
	}
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
	}
	if (temp->next == NULL && i < idx - 1)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	newnode->prev = temp;
	temp->next = newnode;
	if (newnode->next != NULL)
		temp->next->prev = newnode;

	return (newnode);
}
