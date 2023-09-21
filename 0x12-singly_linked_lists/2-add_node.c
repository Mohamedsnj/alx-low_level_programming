#include "lists.h"

/**
 * len - Calculates the length of a string.
 *
 * @str: Constant string
 *
 * Return: The length of the string
 */

int len(const char *str)
{
	int i;

	if (!str)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 *
 * @head: Pointer to head of the linked list
 * @str: String to assigned to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, char *str)
{
	list_t *new_head = (list_t *) malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len =  len(str);
	new_head->next = (*head);
	(*head) = new_head;
	return (*head);
}
