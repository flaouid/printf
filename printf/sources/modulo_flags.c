#include "printf.h"

void	mod_flags(int *i)
{
	*i = *i + 1;
	write(1, "%", 1);
}

void	mem_add_flags(va_list args, int *i)
{
	void *output;
	unsigned long address;

	output = va_arg(args, void*);
	adress = (unsigned long)(output);
	write(1, "0x", 2);
	*i = *i + 2;
	ft_adress(address, i);
}