#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digite.
 *
 * @n: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int print_last_digit(int n);
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar(ld + '0');
	return (ld);
}
