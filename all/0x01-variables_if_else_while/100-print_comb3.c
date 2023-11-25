#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
	{
	int n1, n2;

	n1 = 0;
	while (n1 < 10)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			if (!(n1 == n2 || n1 > n2))
			{
				putchar((n1 % 10) + '0');
				putchar((n2 % 10) + '0');
				if (!(n1 == 8 && n2 == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		n1++;
	}
	putchar('\n');
	return (0);
	}
