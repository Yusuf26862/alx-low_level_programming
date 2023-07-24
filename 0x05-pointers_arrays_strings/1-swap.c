#include <stdio.h>

/**
 * swap_int - swap two varables.
 *
 * @a: The varable of character to swap with b.
 * @b: The varable of character to swap with a
 *
 */

void swap_int(int *a, int *b);
void swap_int(int *a, int *b)
{
	int holdb = *a;
	*a = *b;
	*b = holdb;
}
