#include "../includes/printf.h"

/* Gère les espaces, les + et les hashtags*/

void	whitespace_flags(va_list args, int *p, const char *str, int *i)
{
	int output;

	if (str[*i + 1] == 'd' || str[*i + 1] == 'i')
	{
		output = va_arg(args, int);
		if (output >= 0)
		{
			*p = *p + 1;
			write(1, " ", 1);
		}
		*i = *i + 1;
		ft_putnbr_pf(output, p);
	}
	else
		check_flags(args, str, i, p);
}

void	add_plus(int *p)
{
	*p = *p + 1;
	write(1, "+", 1);
}

void	plus_flags(va_list args, int *p, const char *str, int *i)
{
	int output;

	if (str[*i + 1] == 'd' || str[*i + 1] == 'i')
	{
		output = va_arg(args, int);
		if (output >= 0)
			add_plus(p);
		*i = *i + 1;
		ft_putnbr_pf(output, p);
	}
	else if (str[*i + 1] == '0')
	{
		add_plus(p);
		*i = *i + 1;
		check_pr_zero(i, str, args, p);
	}
	else if (str[*i + 1] == '-')
		check_leftpalign(i, str, args, p);
	else if (str[*i + 1] > '0' || str[*i + 1] <= '9')
		check_rightpalign(i, str, args, p);
	else
		check_flags(args, str, i, p);
}

void	hashtag_flags(va_list args, int *p, const char *str, int *i)
{
	unsigned int output;

	if (str[*i + 1] == 'o')
	{
		*i = *i + 1;
		output = va_arg(args, unsigned int);
		*p = *p + 1;
		write(1, "0", 1);
		if (output != 0)
			ft_oct(output, p);
	}
	else if (str[*i + 1] == 'x')
	{
		*i = *i + 2;
		write(1, "0x", 2);
		check_flags(args, str, i, p);
	}
	else if (str[*i + 1] == 'X')
	{
		*p = *p + 2;
		write(1, "0X", 2);
		check_flags(args, str, i, p);
	}
}

void	dot_flags(const char *str, int *i)
{
	if (str[*i] == '.')
	{
		*i = *i + 1;
		ft_atoi(&str[*i]);
	}
	while (str[*i] && str[*i] >= '0' && str[*i] <= '9')
		*i = *i + 1;
}
