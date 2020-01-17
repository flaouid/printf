#include "printf.h"

void	flags_hexhhup(va_list args, int *p)
{
	unsigned char output;

	output = (unsigned char)va_arg(args, void*);
	ft_hexupp((unsigned int)output, p);
}

void	flags_hexhh(va_list args, int *p)
{
	unsigned char output;

	output = (unsigned char)va_arg(args, void*);
	ft_hex((unsigned int)output, p);
}

void	flags_octhh(va_list args, int *p)
{
	unsigned char output;

	output = (unsigned char)va_arg(args, void*);
	ft_oct((unsigned int)output, p);
}

void	flags_inthhup(va_list args, int *p)
{
	unsigned char output;

	output = (unsigned char)va_arg(args, void *);
	ft_putnbruni((unsigned int)output, p);
}

void	flags_inthh(va_list args, int *p)
{
	short output;

	output = (char)va_arg(args, void *);
	ft_putnbr_pf((int)output, p);
}
