#include "main.h"

/**
 * _strlen -  return the length of a string
 *
 * @s: this is the input string
 *
 * Return: Lenngth of the string
 */
int _strlen(char *s)
{
	int cnt;

	for (cnt = 0; *s != '\0' ; s++)
		++cnt;

	return (cnt);
}
