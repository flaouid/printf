#include "../includes/printf.h"

/*handles width field*/

int	f_align;

void	ft_putspace(int s, int size, int *p)
{
	int count;

	count = 0;
	if (s > size)
	{
		count = s - size;
		while (--count >= 0)
		{
			write(1, " ", 1);
			*p = *p + 1;
		}
	}
}

void	align_address_flags(const char *str, void *check, int *i, int *p)
{
	unsigned long address;

	if (str[*i] == 'c' || str[*i] == '%')
	{
		ft_putspace(f_align, 1, p);
		*p = *p + 1;
		if (str[*i] == 'c')
			ft_putchar((char)check);
		else
			write(1, "%", 1);
	}
	else if (str[*i] == 'p')
	{
		ft_putspace(f_align, 14, p);
		address = (unsigned long)(check);
		write(1, "0x7ff", 5);
		*p = *p + 5;
		ft_putaddress(address, p);
	}
}

void	align_flag(const char *str, va_list args, int *i, int *p)
{
	void	*check;

	check = va_arg(args, void*);
	if (str[*i] == 'd' || str[*i] == 'i')
	{
		ft_putspace(f_align, ft_nbrlen((int)check), p);
		ft_putnbr_pf((int)check , p);
	}
	else if (str[*i] == 'u' || str[*i] == 'o' || str[*i] == 'x' || str[*i] == 'X')
	{
		ft_putspace(f_align, ft_nbrlen((unsigned int)check), p);
		ft_putnbr_pf((unsigned int)check, p);
	}
	else if (str[*i] == 's')
	{
		ft_putspace(f_align, ft_strlen((char*)check), p);
		ft_putstr_pf((char*)check, p);
	}
	else
		align_address_flags(str, check, i, p);
}

void	check_rightalign(int *i, const char *str, va_list args, int *p)
{
	int count;

	count = *p;
	f_align = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		if (str[*i] >= '0' && str[*i] <= '9')
			f_align = f_align * 10 + (str[*i] - '0');
		*i = *i + 1;
	}
	align_flag(str, args, i, p);
}

void	check_leftalign(int *i, const char *str, va_list args, int *p)
{
	int count;
	int check;

	count = *p;
	f_align = 0;
	check = 0;
	*i = *i + 1;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		f_align = f_align * 10 + (str[*i] - '0');
		*i = *i + 1;
	}
	*i = *i - 1;
	check_flags(args, str, i, p);
	if (f_align > (*p - count))
	{
		check = f_align - (*p - count);
		while (--check >= 0)
		{
			write(1, " ", 1);
			*p = *p + 1;
		}
	}
}

