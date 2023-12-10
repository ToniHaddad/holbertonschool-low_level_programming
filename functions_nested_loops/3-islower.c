#include "main.h"

/**
 * _islower - check char is lower
 *
 * @c: input
 *
 * Return: returns 1 if 'c' is_lower
 * otherwise always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
