#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "../includes/printf.h"
# include "../libft/libft.h"

int		ft_atoi(const char *str);
void	ft_hex(unsigned int n, int *i);
void	ft_hexup(unsigned int n, int *i);
char	*ft_itoa(int n);
int		ft_isdigit(int c);
int		ft_nbrlen(int nbr);
void	ft_oct(unsigned int n, int *i);
void	ft_putaddress(unsigned long n, int *i);
void	ft_putchar(char c);
void	ft_putchar_fd(int c, int fd);
void	ft_putnbr_pf(int n, int *i);
void	ft_putnbri(int n, int *i);
void	ft_putnbruni(unsigned int n, int *i);
void	ft_putstr_pf(char const *s, int *p);
char	*ft_strdup(char *src);
//static void	*ft_strcpy(char *dst, const char *src);
char	*ft_strjoin(const char *separator, const char *s2);
size_t	ft_strlen(const char *s);
size_t	ft_nbrulen(unsigned int n);
void	ft_putld(long n, int *p);
void	ft_putllup(unsigned long long n, int *p);





#endif
