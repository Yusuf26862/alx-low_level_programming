#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check the alphabet if it is in lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c);
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
