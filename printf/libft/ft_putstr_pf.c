#include "libft.h"

void	ft_putstr_pf(char const *s, int *p)
{
	int i;

	i = -1;
	while (s[++i] != '\0')
	{
		ft_putchar(s[i]);
		*p = *p + 1;
	}
}
