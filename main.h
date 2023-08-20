#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void _puts(const char *str);
int _printf(const char *format, ...);
void print_char(va_list args);
void print_str(va_list args);
void print_perc(va_list args);

typedef struct
{
        char sp;
        void (*h)(va_list);
} hs;

extern hs sph[];

#endif
