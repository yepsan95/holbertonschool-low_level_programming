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

	len = 0;
	while (str[len] != '\0')
		len++;
	new_str = malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		new_str[len] = str[len];
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}
	while ((*head)->next != NULL)
		(*head) = (*head)->next;
	(*head)->next = new_node;
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;

	return (new_node);
}
