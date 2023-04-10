#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to a const list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *node;
	int counter;

	node = h;
	for (counter = 1; node->next != NULL; counter++)
	{
		printf("[%d] %s\n", node->len, node->str);
		node = node->next;
	}
	return (counter);
}
