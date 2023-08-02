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
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
