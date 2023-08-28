#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, j, t1 = 0, t2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		t1 = t1 + a[i];

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		total2 = total2 + a[j];
	printf("%d, %d\n", t1, t2);
}
