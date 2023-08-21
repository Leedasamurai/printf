#include "main.h"

/**
 * _printf - a function that loops through int
 * @format: string that prints special chars
 * Return: total count of special chars
 */

int _printf(const char *format, ...)
{
	int sumup = 0;
	char stip;

	va_list args;
	int a = 0;

	va_start(args, format);

	if (format[0] == '\0')
		return (-1);

	while (format[a])
	{
		if (format[a] == '%')
		{
			stip = format[a + 1];
			sumup = sumup + (*pick(stip))(args);
			a++;
		}
		else
		{
			_putchar(format[a], sumup);
			sumup = sumup + 1;
		}
		a++;
	}
	return (sumup);
}
