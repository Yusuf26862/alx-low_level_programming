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
	while (times < 10)
	{
		for (n = 0; n < 10; n++)
		{
			_putchar('0' + n);
		}
		times++;
		_putchar('\n');
	}
}
