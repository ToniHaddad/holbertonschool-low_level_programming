/**
 * _puts - Print a string followed by a newline.
 * @str: The string to print.
 */
#include "main.h"

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
