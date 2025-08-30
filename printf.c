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
                count += print_char(va_arg(zg, int));
            else if (format[i] == 's')
                count += print_string(va_arg(zg, char *));
            else if (format[i] == '%')
                count += print_percent();
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
