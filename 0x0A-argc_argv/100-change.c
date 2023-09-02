#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money.
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int mo, lcts = 0, i, t;
	int cints[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	mo = atoi(argv[1]);
	if (mo <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			t = mo / cints[i];
			mo -= t * cints[i];
			lcts += t;
			if (mo == 0)
				break;
		}
	}
	printf("%d\n", lcts);
	return (0);
}
