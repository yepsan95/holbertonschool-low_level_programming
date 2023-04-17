#include "lists.h"

/**
* delete_dnodeint_at_index - deletes a nod at index of a
*                            dlistint_t linked list
* @head: head of the list
* @index: index of the element to be deleted
*
* Return: 1 if succedeed, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (head == NULL && index == 0)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	for (; index > 0; index--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
