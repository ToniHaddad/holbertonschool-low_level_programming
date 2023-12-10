#include "main.h"

/**
 * _abs - absolute value of an integer
 *
 * @n: input
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
