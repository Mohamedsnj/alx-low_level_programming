#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings 
 * 
 * 
 *
 * @s1: first string
 * @s2: second string
 * @n: number of characters to take from second string
 *
 * Return: new string, or null on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i;
	char *ptr, *m;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (l1 = 0, ptr = s1; *ptr; ptr++)
		l1++;
	for (l2 = 0, ptr = s2; *ptr; ptr++)
		l2++;
	if (n > l2)
		n = l2;

	m = malloc((l1 + n + 1) * sizeof(char));
	if (!m)
		return (0);

	ptr = m;
	while (*s1)
		*ptr++ = *s1++;
	i = 0;
	while (i < n)
	{
		*ptr++ = s2[i++];
	}
	*ptr = 0;

	return (m);
}
