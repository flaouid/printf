
NAME = libftprint.a

SRC = libft/...

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror -Iincludes

all: $(NAME) includes/

$(NAME): $(OBJ)
	@ar rcs $(NAME) $^

test: all
	gcc main.c $(NAME) -Iincludes && ./a.out

%.o: %.c
	@gcc $(FLAGS) -o $@ -c $<

re: fclean all

clean:
	@/bin/rm -Rf $(OBJ)

fclean: clean
	@/bin/rm -Rf $(NAME)
