#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 */
void print_alphabet_x10(void);
void print_alphabet_x10(void)
{
	char alp;
	int times;

	times = 0;
	while (times <= 9)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			putchar(alp);
		}
		putchar('\n');
		times++;
	}
}
