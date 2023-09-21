#include "lists.h"

/**
 * list_len - function that returns count of elements
 * @h: pointer to the node
 * return: @count the existing number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
