#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted
 *
 * Return: the integer value of the converted string
 */
int _atoi(char *s)
{
    int res = 0;     /* to store the result */
    int sign = 1;    /* to store the sign (1 for positive, -1 for negative) */
    int started = 0; /* to indicate if the number parsing has started */

    while (*s)
    {
        /* check for minus sign */
        if (*s == '-')
            sign *= -1;
        /* if it's a number */
        if (*s >= '0' && *s <= '9')
        {
            started = 1;
            res = res * 10 + (*s - '0');
        }
        /* if it's not a number and the number parsing has started, break */
        else if (started)
            break;
        s++;
    }

    return (res * sign);
}
