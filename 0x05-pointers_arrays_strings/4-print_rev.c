#include <stdio.h>
#include "main.h"

/**
 * print_rev - check the string in reverse.
 *
 * @s: The varable of string to print in reverse.
 *
 */

void print_rev(char *s);
void print_rev(char *s)
{
	int len = 0, index;

	while (*s != '\n')
	{
		len++;
	}
	s--;
	for (index = len; index > 0; index--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
