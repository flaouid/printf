#include "printf.h"
/* Check : c s p d i u x X %
 * A voir : h hh ll l
 *
 * Utilise le ternaire pour aider à checker le char passé par la fonction
 * printf de sorte à ce que le flag pour être utilisé dans la fonction */

void	check_flags_sp(int *i, const char *str, va_list args, int *p)
{
	str[*i] == '0' ? check_zero(i, str, args, p) : 0;
	str[*i] > '0' && str[*i] <= '9' ? chek_rightalign(i, str, args, p) : 0;
	str[*i] == '-' ? check_leftalign(i, str, args, p) : 0;
	str[*i] == ' ' ? whitespace_flags(args, p, str, i) : 0;
	str[*i] == '*' ? width_prec_flags(args, str, i) : 0;
	str[*i] == '.' ? dot_flags(params, str, i) : 0 ;
}


void	check_flags(va_list args, const char *str, int *i)
{
	*i = *i + 1; 
	str[*i] == 'd' ? flags_int(args, i) : 0; 
	str[*i] == 'i' ? flags_int(args, i) : 0;
	str[*i] == 'u' ? flags_uint(args, i) : 0;
	str[*i] == 'x' ? flags_hex(args, i) : 0;
	str[*i] == 'X' ? flags_upphex(args, i) : 0;
	str[*i] == '%' ? modulo_flags(i) : 0;
	str[*i] == 'p' ? mem_add_flags(args, i) : 0;
	str[*i] == 'c' ? char_flags(args, i) : 0;
	str[*i] == 's' ? str_flags(args, i) : 0;

}
