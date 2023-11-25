#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
	{
	int n;
	char l;

	n = 0;
	l = 'a';
	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	while (l < 'g')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
	}
