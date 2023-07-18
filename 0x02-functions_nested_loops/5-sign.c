#include <stdio.h>

/**
 * print_sign - check the chcek the sign of a number.
 *
 * @n: The character to be checked.
 *
 * Return: 1 if n > 0 , 0 otherwise if <= o.
 */
int print_sign(int n);
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (0);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
}
