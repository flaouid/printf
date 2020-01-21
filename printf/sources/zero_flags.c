#include "../includes/printf.h"

/* Gère le cas du Zero. */

int	pf_alignz;

void	ft_putspacezero(int s, int size, int *i)
{
	int count;

	if (!size)
		return ;
	count = 0;
	if (s > size)
	{
		count = s - size;
		while (--count >= 0)
		{
			write(1, "0", 1);
			*i = *i + 1;
		}
	}
}

void	ralignzero_flag(const char *str, va_list args, int *i, int *p)
{
	void	*check;

	check = va_arg(args, void*);
	if (str[*i] == 'd' || str[*i] == 'i')
	{
		ft_putspacezero(pf_alignz, ft_nbrlen((int)check), p);
		ft_putnbr_pf((int)check, p);
	}
}

void	check_zero(int *i, const char *str, va_list args, int *p)
{
	int count;

	if (!str)
		return ;
	count = *p;
	pf_alignz = 0;
	if (str[*i + 1] == '+')
	{
		*i = *i + 1;
		plus_flags(args, p, str, i);
	}
	else
	{
		while (str[*i] >= '0' && str[*i] <= '9')
		{
			if (str[*i] >= '0' && str[*i] <= '9')
				pf_alignz = pf_alignz * 10 + (str[*i] - '0');
			*i = *i + 1;
		}
		ralignzero_flag(str, args, i, p);
	}
}

void	pralignzero_flag(const char *str, va_list args, int *i, int *p)
{
	void	*check;

	if (!str)
		return;
	check = va_arg(args, void*);
	pf_alignz = pf_alignz - 1;
	if (str[*i] == 'd' || str[*i] == 'i')
	{
		ft_putspacezero(pf_alignz, ft_nbrlen((int)check), p);
		ft_putnbr_pf((int)check, p);
	}
}

void	check_pr_zero(int *i, const char *str, va_list args, int *p)
{
	int count;

	if (!str)
		return ;
	count = *p;
	pf_alignz = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		if (str[*i] >= '0' && str[*i] <= '9')
			pf_alignz = pf_alignz * 10 + (str[*i] - '0');
		*i = *i + 1;
	}
	pralignzero_flag(str, args, i, p);
}
