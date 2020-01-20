#include "../libft/libft.h"
#include "../includes/printf.h"

void	ft_putllup(unsigned long long n, int *p)
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
