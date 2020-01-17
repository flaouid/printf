#include "printf.h"

// Gère les conversion en h

void	flags_hexhup(va_list args, int *p)
{
	unsigned short output;

	output = (unsigned short)va_arg(args, void*);
	ft_hexupp((unsigned int) output, p);
}

void	flags_hexh(va_list args, int *p)
{
	unsigned short output;

	output = (unsigned short)va_arg(args, void*);
	ft_hex((unsigned int) output, p);
}

void	flags_octh(va_list args, int *p)
{
	unsigned short output;

	output = (unsigned short)va_arg(args, void*)
	ft_oct((unsigned int)output, p);
}

void	flags_inthupp(va_list args, int *p)
{
	unsigned short output;

	output = (unsigned short)va_arg(args, void*);
	ft_putnbruni((unsigned int) output, p);
}

void	flags_inth(va_list args, int *p)
{
	short output;

	output = (unsigned short)va_arg(args, void*);
	ft_putnbr_pf((int)output, p);
}
