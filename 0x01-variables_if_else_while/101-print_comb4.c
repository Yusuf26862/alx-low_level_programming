#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
	{
	int n1, n2, n3;

	n1 = 0;
	while (n1 < 10)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			for (n3 = 0; n3 < 10; n3++)
			{
				if (!(n1 == n2 || n2 == n3 || n1 > n2 || n2 > n3))
				{
					putchar((n1 % 10) + '0');
					putchar((n2 % 10) + '0');
					putchar((n3 % 10) + '0');
					if (!(n1 == 7 && n2 == 8 && n3 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		n1++;
	}
	putchar('\n');
	return (0);
	}
