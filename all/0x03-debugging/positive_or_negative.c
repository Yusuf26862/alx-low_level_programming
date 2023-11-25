#include <stdio.h>
#include "main.h"
/*
 * main: test the function positive_or_negative.
 *
*/

void positive_or_negative(int i);
void positive_or_negative(int i)
{
        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i < 0)
        {
                printf("%d is negative\n", i);
        }
        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
}
