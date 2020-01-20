#include "../includes/printf.h"
#include "../libft/libft.h"

/* Flags pour les adress : %p dans address_flags et %% dans percent_flags*/


void	address_flags(va_list args, int *i)
{
	void	*output;
	unsigned long	address;

	output = va_arg(args, void*);
	address = (unsigned long)(output);
	write(1, "0x", 2);
	*i = *i + 2;
	ft_putaddress(address, i);
}

void	percent_flags(int *i)
{
	*i = *i + 1;
	write(1, "%", 1);
}

