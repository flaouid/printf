#include "printf.h"

void	flags_uhexll(va_list args, int *p)
{
	unsigned long long output;

	output = (unsigned long long)va_arg(args, void*);
	ft_hexup((unsigned int)output, p);
}

void	flags_hexll(va_list args, int *p)
{
	unsigned long long output;

	output = (unsigned long long)va_arg(args, void*);
	ft_hex((unsigned int)output, p);
}

void	flags_octll(va_list args, int *p)
{
	unsigned long long output;

	output = (unsigned long long)va_arg(args, void*);
	ft_oct((unsigned int)output, p);
}

void	flags_uintll(va_list args, int *p)
{
	unsigned long long output;

	output = (unsigned long long)va_arg(args, void*);
	ft_pullup((unsigned long long)output, p);
}

void	flags_intll(va_list args, int *p)
{
	long long output;

	output = (long long)va_arg(args, void*);
	ft_putnbr_pf((int)output, p);
}
