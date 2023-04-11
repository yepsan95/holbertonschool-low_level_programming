#include "lists.h"

/**
 * add_node - adds a new node at the beggining
 *            of a list_t list
 * @head: double pointer to the last element of the list
 * @str: string to be added to the created node
 *
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;
	unsigned int i, len;

	if ((*head) == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
