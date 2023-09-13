#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator -  executes a function given as a parameter on
 *                  each element of an array.
 *
 * @size: This array size
 * @array: input array
 * @action:  input function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t m;

	if (array == NULL || action == NULL)
		return;
	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}
}
