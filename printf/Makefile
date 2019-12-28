NAME = libftprint.a


SRC = ./sources/address_flags.c\
      	./sources/alignpr_flags.c\
	./sources/convert_flags.c\
	./sources/modulo_flags.c\
	./sources/str_flags.c\
	./sources/zero_flags.c\
	./sources/align_flags.c\
	./sources/check_flags.c\
	./sources/int_flags.c\
	./sources/specifier_flags.c\
	./sources/width_prec_flags.c

OBJ = $(SRC:.c=.o)
LIB_OBJ = ./libft/*.o
INCLUDES = ./printf.h
LIB = ./libft/libft.a

FLAGS = -Wall -Wextra -Werror -g3

all: $(NAME)

.c.o : $(SRC)
	@(gcc -c $(FLAGS) -I $(INCLUDES) $^ -o $(^:.c=.o))

$(NAME): $(OBJ)
	@(make -C libft)
	@ar rcs $(NAME) $(OBJ) $^

ex : $(NAME)
	@(gcc $(CFLAGS) $(NAME) sources/main.c -I $(INCLUDES))
	@(./a.out)

clean :
	@/bin/rm -Rf $(OBJ)

fclean: clean
	@/bin/rm -Rf $(NAME)

re : fclean all
