#include "../includes/printf.h"
#include "../libft/libft.h"

void	width_bref(va_list args, const char *str, int *i, int *p)
{
	unsigned int output;

	if (!str)
		return ;
	if (str[*i] == '*')
	{
		output = va_arg(args, unsigned int);
	//	ft_strlen(str);
		write(1, " ", 1);
		if (str[*i - 1] == '-')
			check_rightpalign(i, str, args, p);
		else if (str[*i + 1] == '-')
		{
			check_leftpalign(i, str, args, p);
			//*p = *p + 1;
			write(1, " ", 1);
		//write(1, "*", 1);
		}
		check_flags(args, str, i, p);

	}
	if (str[*i - 1] == '0')
	{
		output = va_arg(args, unsigned int);
		ft_strlen(str);
		ft_putspacezero((int)str, ft_strlen(str), i);
		*p = *p + 1;
	}
}

void	dot_flags(va_list args, const char *str, int *i, int *p)
{
	unsigned int output;

	output = va_arg(args, unsigned int);
	//if (!output)
//	{
	//	*i = *i + 6;
	//	write(1, "(null)", 6);
//	}
	if (str[*i] == '.')
	{
		if (str[*i + 1] == ft_isdigit(*i) && str[*i] != '\0')
		{
			*p = *p + 1;
			ft_putstr_pf(str, p);
		}
		else
		{
			i++;
			align_flag(str, args, i, p);
		}
	}
}
