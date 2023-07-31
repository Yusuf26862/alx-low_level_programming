#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched, return the rest of the characters.
 */

char *_strpbrk(char *s, char *accept);
char *_strpbrk(char *s, char *accept)
{
	strpbrk(s, accept);
	return (s);
}
