#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len = 0;
	int start = 0;
	char temp;

	/* Find string length */
	while (s[len])
		len++;

	/* Reverse string */
	len -= 1;
	while (start < len)
	{
		temp = s[start];
		s[start] = s[len];
		s[len] = temp;

		start++;
		len--;
	}
}
