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
	if (*h == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*h = newnode;

		return (newnode);
	}
	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	newnode->next = temp->next;
	newnode->prev = temp;
	temp->next = newnode;
	temp->next->prev = newnode;

	return (newnode);
}
