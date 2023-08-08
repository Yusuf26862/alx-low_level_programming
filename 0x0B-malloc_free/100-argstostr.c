#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av);
char *argstostr(int ac, char **av)
{
	char *nstr;
	int i, j, k, l = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			l++;
		}
	}
	nstr = malloc(sizeof(char) * l + 1);

	if (nstr == NULL)
	{
		return (NULL);
	}
	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			nstr[k++] = av[i][j];
		}
		nstr[l] = '\n';
	}
	nstr[k] = '\0';

	return (nstr);
}
