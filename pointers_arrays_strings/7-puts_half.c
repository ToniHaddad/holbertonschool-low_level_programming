#include "main.h"

/**
 * puts_half - Print the second half of a string.
 * @str: The string to be printed.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	/* Calculate string length */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Check for odd length */
	if (len % 2 == 1)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}

	/* Print the second half of the string */
	for (; n < len; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
