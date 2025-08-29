#include <stdarg.h>
#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

int _printf(const char *format, ...)
{
    va_list task0;
    int i = 0, count = 0;
    char *str;

    va_start(task0, format);

    while (format)
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c') 
            {
                char c = va_arg(task0, int);
                count += _putchar(c);
            }
            else if (format[i] == 's') 
            {
                str = va_arg(task0, char *);
                if (!str){
		       	str = "(null)";
		}
                while (*str)
                {
                    count += _putchar(*str);
                    str++;
                }
            }
            else if (format[i] == '%')
            {
                count += _putchar('%');
            }
            else
            {
                count += _putchar('%');
                count += _putchar(format[i]);
            }
        }
        else
        {
            count += _putchar(format[i]);
        }
        i++;
    }

    va_end(args);
    return count;
}
