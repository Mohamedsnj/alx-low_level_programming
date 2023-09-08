#include "main.h"

/**
*string_nconcat - Concatenates two strings 
*
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *b;
	unsigned int l = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i+)
		l++;

	b = malloc(sizeof(char) * (l + 1));

	if (b == NULL)
		return (NULL);

	l = 0;

	for (i= 0; s1[i]; i++)
		b[l++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		b[l++] = s2[i];

	b[l] = '\0';

	return (b);
}
