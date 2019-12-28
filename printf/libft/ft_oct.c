#include "libft.h"

void	ft_oct(unsigned int n, int *i)
{
	if (n > 7)
	{
		ft_oct((n / 8), i);
		ft_oct((n % 8), i);
	}
	else
	{
		*i = *i + 1;
		ft_putchar(n + '0');
	}
}
