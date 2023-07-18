#include <stdio.h>

/**
 * _putchar - print _putchar
 *
	 * Return: Always 0.
	 */
int _putchar(char d)
{
	char *n = "_putchar";
	int c = 0;

	while (n[c] != '\0')
	{
		putchar(n[c]);
		c++;
	}
	putchar('\n');
	return (0);
}
