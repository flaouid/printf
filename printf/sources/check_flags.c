/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <laouid.ferdaous@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:27:52 by flaouid           #+#    #+#             */
/*   Updated: 2020/01/15 13:20:40 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"
/* Check : c s p d i u x X %
 * A voir : h hh ll l
 *
 * Utilise le ternaire pour aider à checker le char passé par la fonction
 * printf de sorte à ce que le flag pour être utilisé dans la fonction */


void	check_hh(va_list args, int *p, const char *str, int *i)
{
	*i = *i + 2;
	str[*i] == 'd' ? flags_inthh(args, p) : 0;
	str[*i] == 'i' ? flags_inthh(args, p) : 0;
	str[*i] == 'u' ? flags_inthhup(args, p) : 0;
	str[*i] == 'o' ? flags_octhh(args, p) : 0;
	str[*i] == 'x' ? flags_hexhh(args, p) : 0;
	str[*i] == 'X' ? flags_hexhhup(args, p) : 0;
}

void	check_h(va_list args, int *p, const char *str, int *i)
{
	*i = *i + 1;
	str[*i] == 'd' ? flags_inth(args, p) : 0;
	str[*i] == 'i' ? flags_inth(args, p) : 0;
	str[*i] == 'u' ? flags_inthupp(args, p) : 0;
	str[*i] == 'o' ? flags_octh(args, p) : 0;
	str[*i] == 'x' ? flags_hexh(args, p) : 0;
	str[*i] == 'X' ? flags_hexhupp(args, p) : 0;
}


void	check_flags_sp(int *i, const char *str, va_list args, int *p)
{
	str[*i] == '0' ? check_zero(i, str, args, p) : 0;
	str[*i] > '0' && str[*i] <= '9' ? check_rightalign(i, str, args, p) : 0;
	str[*i] == '-' ? check_leftalign(i, str, args, p) : 0;
	str[*i} == 'O' ? check_l(args, p, str, i) : 0;
	str[*i] == ' ' ? whitespace_flags(args, p, str, i) : 0;
	str[*i] == '#' ? hashtag_flags(args, p, str, i) : 0;
	str[*i] == '*' ? width_bref(args, str, i, p) : 0;
	str[*i] == '.' ? width_bref(args, str, i, p) : 0;
	str[*i] == '+' ? plus_flags(args, p, str, i) : 0;
}

void	check_flags(va_list args, const char *str, int *i, int *p)
{
	*i = *i + 1;
	str[*i] == 'd' ? flags_int(args, p) : 0;
	str[*i] == 'i' ? flags_int(args, p) : 0;
	str[*i] == 'o' ? flags_oct(args, i) : 0;
	str[*i] == 'u' ? flags_unint(args, p) : 0;
	str[*i] == 'x' ? flags_hex(args, p) : 0;
	str[*i] == 'X' ? flags_hexupp(args, p) : 0;
	str[*i] == '%' ? mod_flags(p) : 0;
	str[*i] == 'p' ? mem_add_flags(args, p) : 0;
	str[*i] == 'c' ? char_flags(args, p) : 0;
	str[*i] == 's' ? str_flags(args, p) : 0;
	str[*i] == 'h' && str[*i + 1] == 'h' ? check_hh(args, p, str, i) : 0;
	str[*i] == 'h' && str[*i + 1] != 'h' ? check_h(args, p, str, i) : 0;
	str[*i] == 'l' && str[*i + 1] == 'l' ? check_ll(args, p, str, i) : 0;
	str[*i] == 'l' && str[*i + 1] != 'l' ? check_l(args, p, str, i) : 0;
	str[*i] == 'D' && str[*i + 1] == 'U' ? check_l(args, p, str, i) : 0;
	check_flags_sp(i, str, args, p);

}
