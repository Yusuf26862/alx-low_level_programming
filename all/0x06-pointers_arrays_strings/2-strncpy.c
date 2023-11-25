#include <stdio.h>

/**
 * _strncpy - Copies the length of the inputted number
 *            from the characters from src string into dest.
 * @dest: The varable that will store the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
