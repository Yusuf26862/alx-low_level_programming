#include <stdio.h>

/**
 * print_last_digit - prints the last digite.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int print_last_digit(int n);
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	return (ld);
}
