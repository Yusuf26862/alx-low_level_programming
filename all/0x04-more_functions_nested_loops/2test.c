#include <stdio.h>

int main(void)
{
	char *m;
	int n;
	int o;

	n = 0;
	m = "-I";

	while (n < 4)
	{
	//	if (!(n <= 0))
	//	{
		putchar((m[0]) * n);
	//	}
		n++;
	}
	putchar('\n');
	return(0);
}
