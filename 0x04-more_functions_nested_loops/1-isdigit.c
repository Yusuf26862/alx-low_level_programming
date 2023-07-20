#include <stdio.h>
#include "main.h>"
#include <ctype.h>

/**
 * _isdigit - check if the character is a number.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _isdigit(int c);
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
