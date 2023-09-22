#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head:  the linked list
 */

void free_list(list_t *head)
{

	if (!head)
	{
		return;
	}
	while (head)
	{
		list_t *node;

		node = head;
		free(node->str);
		free(node);
		head = head->next;
	}
}
