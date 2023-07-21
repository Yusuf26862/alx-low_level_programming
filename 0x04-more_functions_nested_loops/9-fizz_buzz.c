#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - print numbers from 1 - 100 and check for fizz, buzz or fizzbuzz
 *
 * return - always 0
 *
 */

void fizz_buzz(void);
void fizz_buzz(void)
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
		printf(" ");
	}
	printf("\n");
}
