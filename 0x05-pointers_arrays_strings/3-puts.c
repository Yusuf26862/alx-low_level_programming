#include <stdio.h>

/**
 * _puts - check the length of the string.
 *
 * @str: The varable of string to print to stdout.
 *
 */

void _puts(char *str);
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str++);
	}
	_putchar('\n');
}
