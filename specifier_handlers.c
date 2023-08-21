#include "main.h"

hs *get_specifier_handlers(void)
{
	static hs sph[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_perc}
	};
	return sph;
}

