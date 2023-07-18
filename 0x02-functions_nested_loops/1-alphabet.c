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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
