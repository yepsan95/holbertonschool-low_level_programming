#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 *                of a dlistint_t list
 * @head: double pointer to the head node of the list
 * @n: value of the n variable in the new dlistint_t node
 *
 * Return: the address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
