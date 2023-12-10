#include <unistd.h>
#include <main.h>

/**
 * _putchar - writes c to  stdout
 * @c: char toprint
 *
 * Return: success 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
