#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to a const list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (counter);
}
