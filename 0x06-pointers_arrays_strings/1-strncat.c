#include "main.h"

/**
 * _strncat -  function that concatenates two strings. it will use at
 *            most n bytes from src
 *
 * @dest: the output  dest
 * @src:  the input src
 * @n:  the number bytes fro src
 *
 * Return:  return
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	if (j < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
