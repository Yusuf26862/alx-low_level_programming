#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers from 1 - 9 except 2 and 4
 *
 * return - always 0
 *
 */

void print_most_numbers(void);
void print_most_numbers(void)

{
	int n;

	n = 0;
	while (n < 10)
	{
		if (!(n == 2 || n == 4))
		{
			_putchar('0' + n);
		}
		n++;
	}
	_putchar('\n');
}
