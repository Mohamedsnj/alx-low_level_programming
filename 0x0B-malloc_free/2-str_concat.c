#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *_strlen - counts and returns string length
  * @s: that's the string
  *
  * Return: the length
  */
int _strlen(char *s)
{
int cnt = 0;

if (!*s)
	return (0);
while (*s)
{
	cnt++;
	s++;
}
return (cnt);
}
/**
 * str_concat - concatenates two strings
 * @s1: one string
 * @s2: the other
 * Return: pointer to cat string
 */
char *str_concat(char *s1, char *s2)
{
	char *m;
	unsigned int i;
	unsigned int j;
	int ts = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	ts += _strlen(s1) + _strlen(s2);
	m = malloc((ts * sizeof(char)) + 1);
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		m[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		m[i] = s2[j];
	}
	m[i] = '\0';
	return (m);
}
