#include "lists.h"

/**
 * list_len - returns the number of elements
 *              in a linked list_t list
 * @h: pointer to a const list_t list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
		h = h->next;
	return (counter);
}
