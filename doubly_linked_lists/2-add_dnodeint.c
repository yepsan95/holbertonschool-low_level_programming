#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beggining
 *                of a dlistint_t list
 * @head: double pointer to the head node of the list
 * @n: value of the n variable in the new dlistint_t node
 *
 * Return: the address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
