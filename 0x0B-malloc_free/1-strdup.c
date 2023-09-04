#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - allocates space in memory
 * @str: input string
 *
 * Return: returns a pointer to a newly
 * allocated space in memory
 */

char *_strdup(char *str)
{
	char *d;
	int i = 0, s = 0;

	d = malloc(sizeof(char) * (s + 1));
	if (str == 0 || d == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		d[i] = str[i];
		s++;
	}
	d[s] = '\0';
	return (d);
}
