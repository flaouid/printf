#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <inttypes.h>

# include "../libft/libft.h"

typedef struct	s_params
{
	int	width;
	int	is_width_in_arg;
	int	is_precision;
	int	is_precision_in_arg;
	int	precision;
}		t_params;

void	check_flags(int *i, const char *str, va_list args, int *p);

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
int	width_prec_flags(t_params *params, const char *str, unsigned int i);

#endif