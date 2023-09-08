#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * 
 * @min: min input
 * @max: max input
 * Return: pointer to new arr of ints
 */
int *array_range(int min, int max)
{
	int *m;
	int i, l;

	if (min > max)
		return (NULL);

	for (l = 0; l < (max - min); l++)
		;

	m = malloc(sizeof(int) * (l + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		m[i] = min++;
	}

	return (m);
}
