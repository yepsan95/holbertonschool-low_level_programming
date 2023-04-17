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

	if (*head == NULL)
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
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);

	return (1);
}
