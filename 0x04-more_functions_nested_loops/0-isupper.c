#include <stdio.h>
#include "main.h>"
#include <ctype.h>

/**
 * _isupper - check the alphabet if it is in uppercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _isupper(int c);
int _isupper(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
