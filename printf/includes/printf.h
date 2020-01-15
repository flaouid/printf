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

typedef struct	s_params
{
	int	width;
	int	is_width_in_arg;
	int	is_precision;
	int	is_precision_in_arg;
	int	precision;
}		t_params;

void	check_flags_sp(int *i, const char *str, va_list args, int *p);
void	check_flags(va_list args, const char *str, int *i, int *p);

void	check_rightalign(int *i, const char *str, va_list args, int *p);
void	check_leftalign(int *i, const char *str, va_list args, int *p);

void	check_rightpalign(int *i, const char *str, va_list args, int *p);
void	check_leftpalign(int *i, const char *str, va_list args, int *p);

void	check_pr_zero(int *i, const char *str, va_list args, int *p);
void	check_zero(int *i, const char *str, va_list args, int *p);

void	flags_int(va_list args, int *i);
void	flags_oct(va_list args, int *i);
void	flags_unint(va_list args, int *i);
void	flags_hexupp(va_list args, int *i);
void	flags_hex(va_list args, int *i);

void	address_flags(va_list args, int *i);
void	percent_flags(int *i);

void	char_flags(va_list args, int *i);
void	str_flags(va_list args, int *i);

void	whitespace_flags(va_list, int *p, const char *str, int *i);
void	add_plus(int *i);
void	plus_flags(va_list args, int *p, const char *str, int *i);
int		width_prec_flags(t_params *args, const char *str, int *i);
void	check_zero(int *i, const char *str, va_list args, int *p);
void	mod_flags(int *i);
void	mem_add_flags(va_list args, int *i);
int		ft_printf(const char *str, ...);
void	hashtag_flags(va_list args, int *p, const char *str, int *i);
void	dot_flags(const char *str, int *i);
void	width_bref(va_list args, const char *str, int *i, int *p);

#endif
