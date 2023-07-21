#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */

void print_square(int size);
void print_square(int size)
{
	int n;
	int times;

	times = 0;
	if (size > 0)
	{
		while (times < size)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			times++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
