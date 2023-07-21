#include <stdio.h>
#include "main.h"

/**
 * print_lines - print certain number of lines.
 * @n: the number of lines to be printed.
 *
 * return - always 0
 *
 */

void print_lines(int n);
void print lines(int n)
{
	int m;

	m = 0;
	while (m < n)
	{
		if (!(n <= 0))
		{
			_putchar('_');
		}
		m++;
	}
	_putchar('\n');
	return (0);
}
