NAME = libftprintf.a


SRC = ./sources/ft_printf.c\
./sources/address_flags.c\
      ./sources/alignpr_flags.c\
	./sources/convert_flags.c\
	./sources/modulo_flags.c\
	./sources/str_flags.c\
	./sources/zero_flags.c\
	./sources/align_flags.c\
	./sources/check_flags.c\
	./sources/int_flags.c\
	./sources/specifier_flags.c\
	./sources/width_prec_flags.c\
	./libft/ft_atoi.c\
	./libft/ft_hex.c\
	./libft/ft_itoa.c\
	./libft/ft_nbrlen.c\
	./libft/ft_oct.c\
	./libft/ft_putaddress.c\
	./libft/ft_putchar_fd.c\
	./libft/ft_putchar.c\
	./libft/ft_putnbr_pf.c\
	./libft/ft_putnbri.c\
	./libft/ft_putnbruni.c\
	./libft/ft_putstr_pf.c\
	./libft/ft_strdup.c\
	./libft/ft_strjoin.c\
	./libft/ft_strlen.c\
	./libft/ft_hexup.c\
	./libft/ft_nbrulen.c\

OBJ = $(SRC:.c=.o)
LIB_OBJ = ./libft/*.o
INCLUDES = ../includes/printf.h
LIB = ./libft/libft.a

FLAGS = -Wall -Wextra -Werror -g3

all: $(NAME)

.c.o : $(SRC)
	@(gcc -c $(FLAGS) -I $(INCLUDES) $^ -o $(^:.c=.o))

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ) $^

clean :
	@/bin/rm -Rf $(OBJ)

fclean: clean
	@/bin/rm -Rf $(NAME)

re : fclean all
