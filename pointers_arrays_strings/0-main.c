#include "main.h"
#include <stdio.h>

#include <stdio.h>

int _strlen(char *);

/**
 * _strlen - Computes the length of a string.
 * @s: The string to measure the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s)
    {
        length++;
        s++;
    }

    return length;
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "Holberton!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
