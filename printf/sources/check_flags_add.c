#include "printf.h"

void	parse_ll(va_list args, int *p, const char *str, int *i)
{
	*i = *i + 2;
	str[*i] == 'd' ? flags_intll(args, p) : 0;
	str[*i] == 'i' ? flags_intll(args, p) : 0;
	str[*i] == 'u' ? flags_intllup(args, p) : 0;
	str[*i] == 'o' ? flags_octll(args, p) : 0;
	str[*i] == 'x' ? flags_hexll(args, p) : 0;
	str[*i] == 'X' ? flags_hexllup(args, p) : 0;
}

void	parse_l(va_list args, int *p, const char *str, int *i)
{
	*i = *i + 1;
	str[*i] == 'd' ? flags_intl(args, p) : 0;
	str[*i] == 'i' ? flags_intl(args, p) : 0;
	str[*i] == 'u' ? flags_intlup(args, p) : 0;
	str[*i] == 'o' ? flags_octl(args, p) : 0;
	str[*i] == 'x' ? flags_hexl(args, p) : 0;
	str[*i] == 'X' ? flags_hexlup(args, p) : 0;
	if (str[*i - 1] == 'D' || str[*i - 1] == 'O' || str[*i - 1] == 'U')
	{
		*i = *i - 1;
		str[*i] == 'D' ? flags_intl(args, p) : 0;
		str[*i] == 'U' ? flags_intlup(args, p) : 0;
		str[*i] == 'O' ? flags_octl(args, p) : 0;									}
}
