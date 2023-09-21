#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t
 *            list.
 *
 * @h: This is the sigle list
 *
 * Return: The number of elements in a linked list_t list
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
