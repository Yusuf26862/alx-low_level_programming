#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 */
void print_alphabet(void);
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
}
