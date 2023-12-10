#include "main.h"

/**
 * _strncpy - Copies a string with a limit
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of characters to copy from src
 * Return: A pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}
