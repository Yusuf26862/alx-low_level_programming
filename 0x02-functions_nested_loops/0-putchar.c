#include <stdio.h>
#include "main.h"

/**
 * _putchar - print _putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char *n = "_putchar";
	int c = 0;

	while (n[c] != '\0')
	{
		_putchar(n[c]);
		c++;
	}
	_putchar('\n');
	return (0);
}
