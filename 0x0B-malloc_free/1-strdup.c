#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str);
char *_strdup(char *str)
{
	int slen, index;
	char *nstr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index]; index++)
	{
		slen++;
	}
	nstr = (char *)malloc((slen + 1) * sizeof(char));

	if (nstr == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index]; index++)
	{
		nstr[index] = str[index];
	}
	nstr[slen] = '\0';
	return (nstr);
}
