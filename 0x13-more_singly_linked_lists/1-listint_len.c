#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - count the number of elements in a linked list listint_t
 * @h: pointer to linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}
	return (s);
}
