#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int char_print(char c);
int string_print(char *s);
int percent_print(void);
#endif
