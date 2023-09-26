#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the list.
 **/
void free_listint(listint_t *head)
{
	listint_t *actual_node;

	while (head)
	{
		actual_node = head;
		head = head->next;
		free(actual_node);
	}
}

