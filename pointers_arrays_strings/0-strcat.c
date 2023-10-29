#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: the destination string.
 * @src: the source string.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;

    // Find the end of the dest string
    while (dest[i])
        i++;

    // Append the src string to dest string
    while (src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Terminate the resulting string
    dest[i] = '\0';

    return dest;
}
