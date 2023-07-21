#include <stdio.h>
#include "main.h"

/**
 * print_line - print certain number of lines.
 * @n: the number of lines to be printed.
 *
 * return - always 0
 *
 */

void print_line(int n);
void print_line(int n)
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
}
