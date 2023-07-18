#include <stdio.h>

/**
 * print_sign - check the chcek the sign of a number.
 *
 * @n: The character to be checked.
 *
 * Return: 1 if n > 0
 * 	-1 if <= 0
 *	0 if == 0
 */
int print_sign(int n);
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('-');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
