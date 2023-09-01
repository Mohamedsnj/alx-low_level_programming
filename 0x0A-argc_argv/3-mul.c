#include <stdio.h>
#include <stdlib.h>
/**
 * main -multiplies two numbers
 * @argc: input
 * @argv: input
 * Return:  0 Success
 */
int main(int argc, char *argv[])
{
	int i, s = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			s *= atoi(argv[i]);
		}
		printf("%d\n", s);
	}
	return (0);
}
