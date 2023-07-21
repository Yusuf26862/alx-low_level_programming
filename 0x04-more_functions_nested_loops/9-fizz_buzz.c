#include <stdio.h>

/**
 * main - Prints the numbers from 1-100.
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (((n % 3) == 0) && ((n % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		n++;
		if (n == 100)
		{
			break;
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
