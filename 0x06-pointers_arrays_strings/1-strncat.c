#include <stdio.h>
#include <string.h>

/**
 * _strncat - Concatenates the string @src, including the
 *              terminating null byte, to the end of the string @dest.
 *
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * @n: the amount of string from src to put in dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strncat(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
