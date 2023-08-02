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
	int lenght;

	length = 0;
	if (s[0] != '\0')
	{
		_strlen_recursion(s + 1);
		length++
	}
	return (length);
}
