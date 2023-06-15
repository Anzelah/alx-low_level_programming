#include "lists.h"

/**
 * dlistint_len - find number of elements in the linked list
 * @h: pointer to the head of linked list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}
	return (s);
}
