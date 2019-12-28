/*Gère les conversion h */

#include "printf.h"

void	flags_hexupp(va_list args, int *i)
{
	unsigned int output;

	output = va_arg(args, unsigned int*);
	ft_hexup(output, i);
}

void	flags_hex(va_list args, int *i)
{
	unsigned int output;

	output = va_arg(args, unsigned int*)
	ft_hex(output, i);
}

void	flags_oct(va_list args, int *i)
{
	unsigned int output;

	output = va_arg(args, unsigned int*);
	ft_oct(output, i);
}

void	flags_unint(va_list args, int *i)
{
	unsigned int output;

	output = va_args(args, unsigned int*)
	ft_putnbruni(output, i)
}

void	flags_int(va_list args, int *i)
{
	int output;

	output = va_arg(args, int);
	ft_putnbri(output, i);
}
