#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <inttypes.h>

# include "../libft/libft.h"
# include "../includes/printf.h"

void	check_flags_sp(int *i, const char *str, va_list args, int *p);
void	check_flags(va_list args, const char *str, int *i, int *p);

void	check_rightalign(int *i, const char *str, va_list args, int *p);
void	check_leftalign(int *i, const char *str, va_list args, int *p);

void	check_rightpalign(int *i, const char *str, va_list args, int *p);
void	check_leftpalign(int *i, const char *str, va_list args, int *p);
void	rpalign_flags(const char *str, va_list args, int *i, int *p);
void	align_flag(const char *str, va_list args, int *i, int *p);

void	check_pr_zero(int *i, const char *str, va_list args, int *p);
void	check_zero(int *i, const char *str, va_list args, int *p);
void	ft_putspacepr(int s, int size, int *p);

void	flags_int(va_list args, int *i);
void	flags_oct(va_list args, int *i);
void	flags_unint(va_list args, int *i);
void	flags_hexupp(va_list args, int *i);
void	flags_hex(va_list args, int *i);
void	flags_hexhup(va_list args, int *p);
void	flags_hexh(va_list args, int *p);
void	flags_octh(va_list args, int *p);
void	flags_inthupp(va_list args, int *p);
void	flags_inth(va_list args, int *p);
void	flags_hexhhup(va_list args, int *p);
void	flags_hexhh(va_list args, int *p);
void	flags_octhh(va_list args, int *p);
void	flags_inthhup(va_list args, int *p);
void	flags_inthh(va_list args, int *p);
void	flags_uhexll(va_list args, int *p);
void	flags_uhexl(va_list args, int *p);
void	flags_uintl(va_list args, int *p);
void	flags_hexll(va_list args, int *p);
void	flags_octll(va_list args, int *p);
void	flags_uintll(va_list args, int *p);
void	flags_intll(va_list args, int *p);
void	flags_intllup(va_list args, int *p);
void	flags_hexllup(va_list args, int *p);
void	flags_intlup(va_list args, int *p);
void	flags_octl(va_list args, int *p);
void	flags_hexlup(va_list args, int *p);
void	flags_intl(va_list args, int *p);
void	flags_hexl(va_list args, int *p);


void	address_flags(va_list args, int *i);
void	percent_flags(int *i);

void	char_flags(va_list args, int *i);
void	str_flags(va_list args, int *i);

void	whitespace_flags(va_list, int *p, const char *str, int *i);
void	ft_putspacezero(int s, int size, int *i);
void	add_plus(int *i);
void	plus_flags(va_list args, int *p, const char *str, int *i);
void	check_zero(int *i, const char *str, va_list args, int *p);
void	mod_flags(int *i);
void	mem_add_flags(va_list args, int *i);
int		ft_printf(const char *str, ...);
void	hashtag_flags(va_list args, int *p, const char *str, int *i);
void	dot_flags(va_list args, const char *str, int *i, int *p);
void	width_bref(va_list args, const char *str, int *i, int *p);
void	check_ll(va_list args, int *p, const char *str, int *i);
void	check_l(va_list args, int *p, const char *str, int *i);
void	check_hh(va_list args, int *p, const char *str, int *i);
void	check_h(va_list args, int *p, const char *str, int *i);

#endif
