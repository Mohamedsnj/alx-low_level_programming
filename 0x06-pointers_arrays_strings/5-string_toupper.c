#include "main.h"

/**
 * string_toupper -  changes all lower of a string to upper
 * @n: input string
 * Return: capitialized string
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] + 'A' - 'a';
	}
	return (n);
}
