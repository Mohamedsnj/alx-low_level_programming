#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the list.
 * Return: head node’s data (n).
 **/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node = *head;

	if (!node)
		return (0);

	n = (*head)->n;
	*head = node->next;
	free(node);
	return (n);
}
