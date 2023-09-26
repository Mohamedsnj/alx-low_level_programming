#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * the function sets the head to NULL.
 * @head: pointer to the list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *actual_node;
	listint_t *x;

	if (!head)
		return;
	actual_node = *head;
	while (actual_node)
	{
		x = actual_node;
		actual_node = actual_node->next;
		free(x);
	}
	*head = NULL;
}

