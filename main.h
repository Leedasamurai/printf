#ifndef MAIN_H
#define MAIN_H

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

/**
 * struct hs - Structure to hold specifier and corresponding handler function
 * @sp: The specifier character
 * @h: Pointer to the handler function
 */
typedef struct hs
{
	char sp;
	void (*h)(va_list);
} hs;

extern hs sph[];

#endif
