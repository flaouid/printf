#include "libft.h"

void	ft_putllup(unsigned long long ,, int *p)
{
	if (n >= 10)
	{
		ft_putllup((n / 10), p);
		ft_putllup((n % 10), p);
	}
	else
	{
		*p = *p + 1;
		ft_putchar(n + '0');
	}
}
