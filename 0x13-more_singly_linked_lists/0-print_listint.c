#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elementf of a linked list listint_t
 * @h: pointer to linked list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}
