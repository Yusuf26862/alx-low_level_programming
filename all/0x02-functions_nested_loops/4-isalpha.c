#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - check the alphabet if it is in uppercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _isalpha(int c);
int _isalpha(int c)
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
