#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: String to be converted.
 *
 * Return: Integer value of the converted string.
 */
int _atoi(char *s)
{
    int res = 0;     /* To store the result. */
    int sign = 1;    /* To store the sign (1 for positive, -1 for negative). */
    int started = 0; /* To indicate if the number parsing has started. */

    while (*s)
    {
        /* Check for minus sign. */
        if (*s == '-')
            sign *= -1;

        /* If it's a number. */
        if (*s >= '0' && *s <= '9')
        {
            started = 1;

            /* Check for overflow. */
            if (res > (INT_MAX - (*s - '0')) / 10)
            {
                /* Handle overflow based on the sign. */
                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }

            res = res * 10 + (*s - '0');
        }
        /* If it's not a number and the number parsing has started, break. */
        else if (started)
            break;

        s++;
    }

    return (res * sign);
}
