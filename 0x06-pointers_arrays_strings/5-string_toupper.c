#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - Changes all lowercase letters
 *                  to uppercase.
 * @a: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *a);
char *string_toupper(char *a)
{
	int index;

	index = 0;
	for (index = 0; a[index] != '\0'; index++)
	{
		a[index] = toupper(a[index]);
	}
	return (a);
}
