#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of a linked list
 * @head: double pointer to head node
 * @n: data to be added to newnode
 *
 * Return: adress of new element, or null if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
