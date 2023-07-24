#include <stdio.h>

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

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		putchar(s[index]);

	putchar('\n');
}
