#include "libft.h"

void	ft_putld(long n, int *p)
{
	if (n < 0)
	{
		*p = *p + 1;
		ft_putchar('-');
		n = -n;
	}
	if (n == -4294967295)
	{
		ft_putchar('4');
		n %= 1000000000;
		n = -n;
	}
	if (n >= 10)
	{
		ft_putld((n / 10), p);
		ft_putld((n % 10), p);
	}
	else
	{
		*p = *p + 1;
		ft_putchar(n + '0');
	}
}
