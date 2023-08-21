#include "main.h"

/**
 * pick - a function that loops through int
 * @y: variable number to be printed
 *
 * Return: function pointer printing int
 */

int (*pick(char y))(va_list args)
{
	if (y == 'i')
{
	return (&print_int);
}
else if (y == 'd')
{
	return (&print_int);
}
return (NULL);
}
