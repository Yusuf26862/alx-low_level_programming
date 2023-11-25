#include <stdio.h>
#include <string.h>

/**
 * _strlen - check the length of the string.
 *
 * @s: The varable of string to check.
 *
 * Return: Always 0
 */

int _strlen(char *s);
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++)
	{
		length++;
	}
	return (length);
}
