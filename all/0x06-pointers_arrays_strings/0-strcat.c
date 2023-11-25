#include <stdio.h>
#include <string.h>

/**
 * _strcat - Concatenates the string @src, including the
 *		terminating null byte, to the end of the string @dest.
 *
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src);
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
