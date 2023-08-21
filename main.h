#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
void _puts(const char *str);
int _printf(const char *format, ...);
void print_char(va_list args);
void print_str(va_list args);
void print_perc(va_list args);

/**
 * struct hs - A structure for handling format spec and corresponding func.
 * @sp: The format specifier character.
 * @h: Pointer to the corresponding function for the format specifier.
 */
typedef struct hs
{
	char sp;
	void (*h)(va_list);
} hs;

extern hs sph[];

#endif /* MAIN_H */
