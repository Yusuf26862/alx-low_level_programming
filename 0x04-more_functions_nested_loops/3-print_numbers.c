#include <stdio.h>

/**
 * print_numbers - print numbers from 1 - 9
 *
 * return - always 0
 *
 */

void print_numbers(void);
void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');

	return (0);
}
