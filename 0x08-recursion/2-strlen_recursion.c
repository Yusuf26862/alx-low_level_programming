#include <stdio.h>

/**
 * _strlen_recursion - Prints a length of string.
 * @s: The string to be printed.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s);
int _strlen_recursion(char *s)
{
	int length;

	length = 0;
	if (s[0] != '\0')
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
