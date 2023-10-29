#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len])
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
