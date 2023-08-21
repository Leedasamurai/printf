#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int len;
	len = _printf("Hello, %c!\n", 'W');
	_printf("Length: %d\n", len);
	len = _printf("String: %s\n", "Hello, World!");
	_printf("Length: %d\n", len);
	len = _printf("Percent: %%\n");
	_printf("Length: %d\n", len);
	len = _printf("Unknown: [%r]\n");
	_printf("Unknown: [%r]\n");
	_printf("Length: %d\n", len);
	return 0;
}
