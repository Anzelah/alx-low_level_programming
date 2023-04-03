#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node to the beginning
 * @head: double pointer to linked list
 * @str: string to be duplicated into node
 *
 * Return: address of new element, NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	if (!new_node)
		return (NULL);
	else
		return (*head);
}
