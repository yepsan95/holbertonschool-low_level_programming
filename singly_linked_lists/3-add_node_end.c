#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the last element of the list
 * @str: string to be added to the created node
 *
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str;
	int len;
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
		len++;
	while ((*head)->next != NULL)
		*head = (*head)->next;
	(*head)->next = new_node;
	new_node->str = new_str;
	new_node->len = len;

	*head = new_node;

	return (new_node);
}
