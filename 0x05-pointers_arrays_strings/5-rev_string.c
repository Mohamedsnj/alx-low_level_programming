#include "holberton.h"
#include <stdio.h>
/**
 * rev_string -  print a string reverser
 *
 *@s:  the pointer that point to a string
 */

void rev_string(char *s)
{
	int i, len;

	char *a, *z = s;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		z++;
	}
	len = i + 1;
	a = s;
	for (i = 0; i < len / 2; i++)
	{
		char x;
		x = *z;
		*z = *a;
		*a = x;
		a++;
		z--;
	}
	z[len + 1] = '\0';
}
