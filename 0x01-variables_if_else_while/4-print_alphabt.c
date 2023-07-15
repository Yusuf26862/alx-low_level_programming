#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp;

	alp = 'a';
	while (alp <= 'z')
	{
		if ((alp != 'e' && alp != 'q') && alp <= 'z')
		{
			putchar(alp);
		}
		alp++;
	}
	putchar('\n');
	return (0);
}
