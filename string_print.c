#include "main.h"

int string_print(char *s)
{
    int i = 0;

    if (s == NULL)
        s = "(null)";

    while (s[i])
    {
        _putchar(s[i]);
        i++;
    }
    return (i);
}
