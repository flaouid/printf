#include "libft.h"

void	ft_putnbruni(unsigned int n, int *i)
{
	if (n > 9)
	{
		ft_putnbruni((n / 10), i);
		ft_putnbruni((n % 10), i);
	}
	else
	{
		*i = *i + 1;
		ft_putchar(n + '0');
	}
}
