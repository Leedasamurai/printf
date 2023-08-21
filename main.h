#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_int(va_list args);
int print_unsigned(va_list args);
int _putchar(int a, int count);
int (*pick(char y))(va_list args);

#endif
