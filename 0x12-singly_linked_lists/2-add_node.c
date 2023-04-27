#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add new node at the beginning of linked linst
 * @head: double pointer to head node
 * @str: data to be added to new node
 *
 * Return: adress of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	while (str[len])
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
