#include "../includes/printf.h"
#include "../libft/libft.h"

void	flags_hexlup(va_list args, int *p)
{
	unsigned long output;

	output = (unsigned long)va_arg(args, void*);
	ft_hexup((unsigned int)output, p);
}

void	flags_hexl(va_list args, int *p)
{
	unsigned long output;

	output = (unsigned long)va_arg(args, void*);
	ft_hex((unsigned int)output, p);
}

void	flags_octl(va_list args, int *p)
{
	unsigned long output;

	output = (unsigned long)va_arg(args, void*);
	ft_oct((unsigned int)output, p);
}

void	flags_intlup(va_list args, int *p)
{
	unsigned long output;

	output = (unsigned long)va_arg(args, void*);
	ft_putllup((unsigned long long)output, p);
}

void	flags_intl(va_list args, int *p)
{
	long output;

	output = (long)va_arg(args, void*);
	ft_putld((long)output, p);
}
