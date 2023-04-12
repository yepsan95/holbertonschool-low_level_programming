#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 *                of a dlistint_t list
 * @head: double pointer to the head node of the list
 * @n: value of the n variable in the new dlistint_t node
 *
 * Return: the address of the new element, or NULL if failed
 */
dlistint_t *add_dnodddeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	while ((*head)->next == NULL)
		*head = (*head)->next;
	new_node->n = n;
	new_node->prev = *head;
	new_node->next = NULL;
	if (*head != NULL)
		(*head)->next = new_node;

	return (new_node);
}
