#include "function_pointers.h"

/**
 * print_name -  prints a name
 *
 * @name:  input 
 * @f:  input function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
