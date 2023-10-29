#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0;

	/* Finding length of the string */
	while (s[len])
		len++;

	for (len = len - 1; len >= 0; len--)
		_putchar(s[len]);

	_putchar('\n');
}
