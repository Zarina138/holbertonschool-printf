#include "main.h"

int _printf(const char *format, ...)
{
    va_list zg;
    int i = 0, count = 0;

    if (format == NULL)
        return (-1);

    va_start(zg, format);

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
                count += char_print(va_arg(zg, int));
            else if (format[i] == 's')
                count += string_print(va_arg(zg, char *));
            else if (format[i] == '%')
                count += percent_print();
            else
            {
                _putchar('%');
                _putchar(format[i]);
                count += 2;
            }
        }
        else
        {
            _putchar(format[i]);
            count++;
        }
        i++;
    }

    va_end(zg);
    return (count);
}
