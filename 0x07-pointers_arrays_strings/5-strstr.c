#include <stdio.h>
#include <string.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - print the substring only
 */

char *_strstr(char *haystack, char *needle);
char *_strstr(char *haystack, char *needle)
{
	char *result = strstr(haystack, needle);

	return (result);
}
