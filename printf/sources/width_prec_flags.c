#include "../includes/printf.h"

int	width_bref(va_list args, const char *str, int *i, int *p)
{
	unsigned int output;

	if (str[*i] == '.')
	{
		*i = *i + 1;
		output = va_arg(args, unsigned int);
		*p = *p + 1;
		is_digit(........);

