#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data (n)
*                of a dlistint_t linked list
* @head: head of the dlistint_t list
*
* Return: the sum of all the values of all the elements in the list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	sum = 0;
	if (head != NULL)
	{
		temp = head;
		while (temp != NULL)
		{
			sum = sum + temp->n;
			temp = temp->next;
		}
		return (sum);
	}
	else
	{
		return (0);
	}
}
