#include "libft.h"

void	ft_putnbr_pf(int n, int *i)
{
	if (n < 0)
	{
		*i = *i + 1;
		ft_putchar('-');
		n = -n;
	}
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*i = *i + 11;
		return ;
	}
	if (n >= 10)
	{
		ft_putnbr_pf((n / 10), i);
		ft_putnbr_pf((n % 10), i);
	}
	else
	{
		*i = *i + n;
		ft_putchar(n + '0');
	}
}
