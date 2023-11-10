#include "main.h"

int main(void)
{
    char *str = "_putchar";
    int i = 0;

    // Loop through each character in the string and print it
    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }

    // Print a new line
    _putchar('\n');

    return (0);
}