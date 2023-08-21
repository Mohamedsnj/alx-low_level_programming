#include "main.h"

/**
 * puts2 -  print every other character of a string, 
 *         starting with the first character, followed by a new line.
 *
 * @s:  point to a char or string
 *
 *
 */

void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (a % 2 == 0)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
