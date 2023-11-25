#include <stdio.h>

/**
 * leet - Encodes a string to 1337.
 * @a: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 * Thanks to another peer member for the brilliant idea.
 */

char *leet(char *a);
char *leet(char *a)
{
	int index;
	int sindex;
	char toswap[] = {"AaEeOoTtLl"};
	char swapto[] = {"4433007711"};

	for (index = 0; a[index] != '\0'; index++)
	{
		for (sindex = 0; sindex <= 10; sindex++)
		{
			if (a[index] == toswap[sindex])
			{
				a[index] = swapto[sindex];
			}
		}
	}
	return (a);
}
