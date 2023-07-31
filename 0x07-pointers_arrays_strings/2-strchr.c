#include <stdio.h>
#include <string.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - print the rest of the letters.
 */

char *_strchr(char *s, char c);
char *_strchr(char *s, char c)
{
	char *result = strchr(s, c);

	return (result);
}
