#include <stdio.h>

int main(void)
{
	int n;
	int times;

	times = 0;
	while (times < 10)
	{
		for (n = 0; n < 10; n++)
		{
			putchar('0' + n);
		}
		putchar('\n');
		times++;
	}
	return(0);
}
