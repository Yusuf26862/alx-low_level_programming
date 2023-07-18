#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day
 *
 */
void jack_bauer(void);
void jack_bauer(void)
{
	int n1, n2;

	n1 = 0;
	while (n1 <= 23)
	{
		for (n2 = 0; n2 <= 59; n2++)
		{
			_putchar((n1 / 10) + '0');
			_putchar((n1 % 10) + '0');
			_putchar(':');
			_putchar((n2 / 10) + '0');
			_putchar((n2 % 10) + '0');
		}
		n1++;
	}
	_putchar('\n');
	return (0);
}
