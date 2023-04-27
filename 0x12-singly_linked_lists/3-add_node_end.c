#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add new nde at the end of a list_t list
 * @head: double pointer to linked list
 * @str: data to be added into new node
 *
 * Return: adress of new node or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;
	list_t *last = *head;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t)); /* create new node */

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str); /* add data passed as arguments */
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL) /* if head is null, it's a empty list */
	{
		*head = new_node;
		return (new_node); /* return the new(and only) node */
	}

	while (last->next != NULL) /* otherwise, find last node */
	{ /* last node's adress will be NULL */
		last = last->next;
	}
	last->next = new_node; /* add new node at the end */

	return (new_node);
}
