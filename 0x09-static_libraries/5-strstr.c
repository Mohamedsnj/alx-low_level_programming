#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c1 = haystack;
		char *c2 = needle;

		while (*c1 == *c2 && *c2 != '\0')
		{
			c1++;
			c2++;
		}

		if (*c2 == '\0')
			return (haystack);
	}

	return (NULL);
}
