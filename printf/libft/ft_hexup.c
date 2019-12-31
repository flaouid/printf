#include "libft.h"

void	ft_hexup(unsigned int n, int *i)
{
	if (n > 15)
	{
		ft_hexup((n / 16), i);
		ft_hexup((n % 16), i);
	}
	else if (n < 10)
	{
		*i = *i + 1;
		ft_putchar(n + '0');
	}
	else
	{
		*i = *i + 1;
		n == 10 ? ft_putchar('A') : 0;
		n == 11 ? ft_putchar('B') : 0;
		n == 12 ? ft_putchar('C') : 0;
		n == 13 ? ft_putchar('D') : 0;
		n == 14 ? ft_putchar('E') : 0;
		n == 15 ? ft_putchar('F') : 0;
	}
}
