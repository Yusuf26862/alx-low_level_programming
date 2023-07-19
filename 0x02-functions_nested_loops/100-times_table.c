#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints times table to 9
 *
 * @n: number where printing stops
 *
 */
void print_times_table(int n);
void print_times_table(int n)
{
	int n1, n2, pd;

	n1 = 0;
	while (n1 <= n)
	{
		_putchar('0');
		for (n2 = 1; n2 <= n; n2++)
		{
			_putchar(',');
			_putchar(' ');
			pd = n1 * n2;
			if (pd <= 9)
			{
				_putchar(' ');
			}
			if (pd <= 99)
			{
				_putchar(' ');
			}

			if (pd >= 100)
			{
				_putchar((pd / 100) + '0');
				_putchar(((pd / 10) % 10) + '0');
			}
			else if (pd <= 99 && pd >= 10)
			{
				_putchar((pd / 10) + '0');
			}
			_putchar((pd % 10) + '0');
		}
		n1++;
		_putchar('\n');
	}
}
