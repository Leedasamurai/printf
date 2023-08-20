#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_char - prints single characters
 *
 * @args: The va_list containing the variable argument list.
 */
void print_char(va_list args)
{

	int c = va_arg(args, int);

	_putchar(c);

}

/**
 * print_str - print a string of characters
 *
 * @args: The va_list containing the variable argument list.
 */
void print_str(va_list args)
{

	char *str = va_arg(args, char *);

	while (*str != '\0')
	{

		_putchar(*str);
		str++;

	}
}

/**
 * print_perc - print % sign
 *
 * @args: The va_list containing the variable argument list.
 */

void print_perc(va_list args)
{
	(void)args;
	_putchar ('%');
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
	hs sph[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_perc}
};

	int count = 0;
	int i;
	size_t j;
	va_list args;

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
			for (j = 0; j < sizeof(sph) / sizeof(sph[0]); j++)
			{
				if (sph[j].sp == format[i])
				{
					(*sph[j].h)(args);
					count++;
					break;
				}
			}
		}
	}
	va_end(args);
	return (count);
}
