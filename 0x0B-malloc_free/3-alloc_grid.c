#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function for 2d array.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height);
int **alloc_grid(int width, int height)
{
	int **narr;

	int hi wi;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	narr = (int *)malloc(sizeof(int) * width);

	if (narr - NULL)
	{
		return (NULL);
	}
	for (hi = 0; hi < height; hi++)
	{
		narr[hi] = (int *)malloc(sizeof(int) * width)

		if (narr[hi] == NULL)
		{
			for (; hi >= 0; hi--)
			{
				free(narr[hi]);
			}
			free(narr);
			return (NULL);
		}
	}
	for (hi = 0; hi < height; hi++)
	{
		for (wi = 0; wi < width; wi++)
		{
			narr[hi][wi] = 0;
		}
	}
	return (narr);
}
