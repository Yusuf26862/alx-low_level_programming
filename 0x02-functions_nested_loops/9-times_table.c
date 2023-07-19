#include <stdio.h>
#include "main.h"

/**
 * times_table - prints times table to 9
 *
 */
void times_table(void);
void times_table(void)
{
	int n1, n2, pd;

	n1 = 0;
	while (n1 <= 9)
	{
		_putchar('0');
		for (n2 = 1; n2 <= 9; n2++)
		{
			_putchar(',');
			_putchar(' ');
			pd = n1 * n2;
			if (pd <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((pd / 10) + '0');
			}
			_putchar((pd % 10) + '0');
		}
		n1++;
		_putchar('\n');
	}
}
