#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int s = 0;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(ap, int);
	}

	va_end(ap);

	return (s);
}
