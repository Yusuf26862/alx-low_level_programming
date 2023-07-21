#include <stdio.h>

int main(void)
{
	int m;
	int n;

	n = -3;
	m = 0;
	while (m < n)
	{
		if (!(n <= 0))
		{
			putchar('_');
		}
	//	putchar('\n');
		n++;
	}
	putchar('\n');
	return(0);
}
