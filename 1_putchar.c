#include "main.h"

/**
 * _putchar - a function that loops through int
 * @count: variable number to be printed
 * @a: int to be printed
 * Return: sum of all parameters
 */

int _putchar(int a, int count)
{
	int co = a;

	if (a < 0)
	{
		co = -a;
		putchar('-');
		count = count + 1;
	}
	if (co / 10)
	{
		count = _putchar(co / 10, count);
	}
	putchar (co % 10 + '0');

	return (count + 1);
}
