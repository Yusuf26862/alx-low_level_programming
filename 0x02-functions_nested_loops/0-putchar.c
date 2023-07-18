#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char* n = "_putchar";
	int c = 0;

	while (n[c] != '\0')
	{
		putchar(n[c]);
		c++;
	}
	putchar('\n');
}
