#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: input width
 * @height: input height
 *
 * Return: returns NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	a = (int **) malloc(height * sizeof(int *));

	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
	}
	if (a != NULL)
	{
		return (a);
	}
	return (NULL);
}
