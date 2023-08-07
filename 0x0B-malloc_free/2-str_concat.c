#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2);
char *str_concat(char *s1, char *s2)
{
	int index1, index;
	char *nstr;

	if (s1 == NULL)
	{
		s1 == "";
	}
	if (s2 == NULL)
	{
		s2 == "";
	}
	index1 = 0;
	while (s1[index1] != '\0')
	{
		index1++;
	}
	index = 0;
	while (s2[index] != '\0')
	{
		index++;
	}
	nstr = malloc(sizeof(char) * (index1 + index + 1));
	if (nstr == NULL)
	{
		return (NULL);
	}
	for (index1 = 0; s1[index1] != '\0'; index1++)
	{
		nstr[index1] = s1[index1];
	}
	for (index = 0; s2[index] != '\0'; index++)
	{
		nstr[index1] = s2[index];
	}
	nstr[index1] = '\0';
	return (nstr);
}
