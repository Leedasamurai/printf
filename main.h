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
void print_unknown(va_list args);
int fputs (const char *__restrict __s, FILE *__restrict __stream);

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

hs *get_specifier_handlers(void);

#endif /* MAIN_H */
