#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end of listint_t list
 * @head: pointer to list
 * @n: elements inside the linked list
 *
 * Return: address of new element, NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}
