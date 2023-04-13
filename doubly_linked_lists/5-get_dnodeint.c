#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 *                         linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be returned
 *
 * Return: pointer to nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	temp = head;
	for (i = 0; i < index; i++)
	{
		if (node->next != NULL)
			node = node->next;
		else
			return (NULL);
	}

	return (node);
}
