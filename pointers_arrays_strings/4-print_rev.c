#include "main.h"

/**
 * print_rev - print a string in reverse.
 * @s: string to be printed.
 * Return: void.
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0') // Finding length of the string
	{
		length++;
		s++;
	}

	while (length > 0)
	{
		_putchar(*(s - 1)); // Print character before current
		s--;
		length--;
	}
	_putchar('\n');
}
