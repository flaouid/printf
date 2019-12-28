#include "printf.h"

/*Flags pour chaine de caractères
 * %s sorties dans str_flags
 * %c sortie dans char_flags */ 

void	char_flags(va_list args, int *i)
{
	char output;

	output = (char)va_arg(args, int)
	*i = *i + 1;
	ft_putchar(output);
}

void	str_flags(va_list args, int *i)
{
	char *output;

	output = va_arg(args, char*);
	if (output != NULL)
		ft_putstr(output, i);
	else
	{
		*i = i* + 6;
		write(1, "(null)", 6);
	}
}