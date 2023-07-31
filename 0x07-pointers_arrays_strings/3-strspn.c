#include <stdio.h>
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept);
unsigned int _strspn(char *s, char *accept)
{
	int length = strspn(s, accept);

	return (length);
}

