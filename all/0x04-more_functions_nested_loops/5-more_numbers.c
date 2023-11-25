#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print numbers from 1 - 14 ten times.
 *
 * return - always 0
 *
 */

void more_numbers(void);
void more_numbers(void)
{
	int n;
	int times;

	times = 0;
	while (times <= 9)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		times++;
		_putchar('\n');
	}
}
