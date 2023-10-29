#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    /* Find the end of the dest string */
    for (i = 0; dest[i] != '\0'; i++)
        ;

    /* Append characters from source string up to n characters */
    for (j = 0; j < n && src[j] != '\0'; j++)
    {
        dest[i] = src[j];
        i++;
    }

    /* If src has less than n characters, append null byte */
    if (j < n)
    {
        dest[i] = '\0';
    }

    return (dest);
}
