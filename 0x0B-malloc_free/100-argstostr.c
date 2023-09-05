#include "main.h"
#include <stdlib.h>
/**
  *argstostr -  concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: concatenates all arguments of the program.
  */
char *argstostr(int ac, char **av)
{
	int i, col, j = 0, length = 0;
	char *sc;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
			length++;
		i++;
	}
	length = length + ac;

	sc = malloc(sizeof(char) * length + 1);
	if (sc == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			sc[cnt] = av[i][j];
			cnt++;
			col++;
		}
		if (sc[cnt] == '\0')
			sc[cnt++] = '\n';

		i++;
	}
	return (sc);
}
