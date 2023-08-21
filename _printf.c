#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * print_char - Prints a single character.
 * @args: The va_list containing the variable argument list.
 */
void print_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);
}

/**
 * print_str - Prints a string of characters.
 * @args: The va_list containing the variable argument list.
 */
void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');

		return;
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

/**
 * print_perc - Prints the '%' character.
 * @args: The va_list containing the variable argument list.
 */
void print_perc(va_list args)
{
	(void)args;
	_putchar('%');
}

/**
 * print_unknown - Prints the 'Unknown' placeholder.
 * @args: The va_list containing the variable argument list.
 */
void print_unknown(va_list args)
{
	(void)args;
	_putchar('[');
	_putchar('%');
	_putchar('r');
	_putchar(']');
}

/**
 * _printf - Custom printf function that handles specified format specifiers.
 * @format: The format string containing characters and format specifiers.
 * @...: Additional arguments corresponding to the format specifiers.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}

		else
		{
			i++;
			if (format[i] == ' ')
			{
				va_end(args);
				return (-1);
			}

			if (format[i] == 'c')
			{
				int c = va_arg(args, int);

				_putchar(c);
				count++;
			}

			else if (format[i] == 's')
			{
				char *str = va_arg(args, char *);
				int len = (str == NULL) ? fputs("(null)", stdout) : fputs(str, stdout);

				count += (len == -1) ? 6 : len;
			}

			else if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}

			else if (format[i] == 'r')
			{
				print_unknown(args);
				count += 4;
			}
		}
	}
	va_end(args);
	return (count);
}
