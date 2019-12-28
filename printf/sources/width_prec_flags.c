#include "printf.h"

int	width_prec_flags(t_params *args, const char *str, unsigned int i)
{
	if (str[i] >= '0' && str[i] <= '9')
		args->width = ft_atoi(str + i);
	while (str[i] >= '0' && str[i] <= '9')
		i = i + 1;
	if (str[i] == '*')
		args->is_width_in_arg = 1;
	if (str[i] == '*')
		i = i + 1;
	if (str[i] == '.')
		args->is_precision = 1;
	if (str[i] == '.' && str[i + 1] == '*')
		args->is_precision_in_args = 1;
	else if (str[i] == '.')
		args->precision = ft_atoi(str + i + 1);
	return (i);
}
