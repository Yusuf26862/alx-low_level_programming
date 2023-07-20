#include <stdio.h>
#include "main.h"

/**
 * print_must_numbers - print numbers from 1 - 9 except 2 and 4
 *
 * return - always 0
 *
 */

void print_must_numbers(void);
void print_must_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar('0' + n);
			n++;
		}
	}
	_putchar('\n');
}
