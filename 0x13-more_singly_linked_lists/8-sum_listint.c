#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list.
 * @head: pointer to the list.
 * Return: sum of all data in the list, 0 if the lost is empty.
 **/
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
