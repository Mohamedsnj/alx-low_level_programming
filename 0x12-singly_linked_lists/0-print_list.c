#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 *
 * @h:  take the value of the single list
 *
 * Return: Return: the number of nodes
 *         If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		i += 1;
		h = h->next;
	}
	return (i);
}
