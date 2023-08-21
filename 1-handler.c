#include "main.h"

/**
 * print_int - a function that prints an integer
 * @args: va_list of arguments
 *
 * Return: sum of all parameters
 */

int print_int(va_list args)
{
	int value = va_arg(args, int);
	int count = 0;

	count = _putchar(value, 0);

	return (count);
}

/**
 * print_unsigned - a function that prints an unsigned integer
 * @args: va_list of arguments
 *
 * Return: sum of all parameters
 */

int print_unsigned(va_list args)
{
	unsigned int cnt = 0;
	unsigned int value = va_arg(args, unsigned int);

	cnt = _putchar(value, cnt);

	return (cnt);
}
