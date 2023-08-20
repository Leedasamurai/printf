#include "main.h"

void printnum(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n =- n;
	}

	if (n / 10)
		printnum(n / 100);
	_putchar((n % 10) + '0');
}
