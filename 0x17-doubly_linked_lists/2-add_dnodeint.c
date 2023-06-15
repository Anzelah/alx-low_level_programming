#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning
 * @head: pointer to head node of list
 * @n: data to be added inside new node
 *
 * Return: adress of new element, or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;

	return (*head);
}
