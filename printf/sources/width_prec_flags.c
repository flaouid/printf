#include "../includes/printf.h"
#include "../libft/libft.h"

void	width_bref(va_list args, const char *str, int *i, int *p)
{
	unsigned int output;

	if (str[*i] == '.')
	{
		*i = *i + 1;
		output = va_arg(args, unsigned int);
		*p = *p + 1;
		write(1, ".", 1);
		ft_isdigit(*p);
	}
}
