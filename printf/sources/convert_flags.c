#include "../includes/printf.h"

int	isparameter(const char *str)
{
	unsigned int i;

	i = 0;
	if (str[i] == '%')
		i = i + 1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		i = i + 1;
	if (i > 0 && str[i] == '$' && str[i - 1] != '%')
		return (i);
	return (0);
}

unsigned int	check_last_char(const char *str, unsigned int i)
{
	if (i == 0 && str[1] == '$')
		return (0);
	if (str[i] == 'c' || str[i] == 's' || str[i] == 'd' || str[i] == 'i'
		|| str[i] == 'u' || str[i] == 'x' || str[i] == 'x' || str[i] == 'X'
		|| str[i] == '%')
		return (i);
	return (0);
}

unsigned int	convert_flags(const char *str)
{
	unsigned int i;

	i = 0;
	if (isparameter(str) > 0)
		i = isparameter(str) + 1;
	if (str[i] == '%')
		i = i + 1;
	while (str[i] == '-' || str[i] == '0')
		i = i + 1;
	if (str[i] == '*')
		i = i + 1;
	while (str[i] >= '0' && str[i] <= '9')
		i = i + 1;
	if (str[i] == '.')
	{
		i = i + 1;
		if (str[i] == '*')
			i = i + 1;
		while (str[i] >= '0' && str[i] <= '9')
			i = i + 1;
	}
	return (check_last_char(str, i));
}
