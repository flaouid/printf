#include "../libft/libft.h"

void	ft_putaddress(unsigned long n, int *i)
{
	if (n > 15)
	{
		ft_putaddress((n / 16), i);
		ft_putaddress((n % 16), i);
	}
	else if (n < 10)
	{
		*i = *i + 1;
		ft_putchar(n + '0');
	}
	else
	{
		*i = *i + 1;
		n == 10 ? ft_putchar('a') : 0;
		n == 11 ? ft_putchar('b') : 0;
		n == 12 ? ft_putchar('c') : 0;
		n == 13 ? ft_putchar('d') : 0;
		n == 14 ? ft_putchar('e') : 0,
		n == 15 ? ft_putchar('f') : 0;
	}
}
