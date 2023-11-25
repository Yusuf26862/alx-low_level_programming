#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp;
	char calp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (calp = 'A'; calp <= 'Z'; calp++)
	{
		putchar(calp);
	}
	putchar('\n');
	return (0);
}
