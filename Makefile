CC= 			gcc
CFLAGS= 		-Wall -Wextra -Werror
RM=				rm -rf
NAME=			push_swap
SRC=			./src/push_swap.c \
				./src/parse.c \
				./src/build_stack.c \
				./src/print_stacks.c \
				./src/swap.c \
				./src/push.c \
				./src/free_all.c \
				./src/rotate.c \
				./src/reverse_rotate.c \
				./src/sort_three.c \
				./src/get_smallest_position.c \
				./src/push_smallest_b.c \
				./src/big_stack.c \
				./src/put_position.c \
				./src/sort.c
OBJ=			$(SRC:.c=.o)
LIBFT=			./lib/printf/libftprintf.a
INCLUDE=		./include/push_swap.h

all:			$(NAME)
				@echo "PUSH_SWAP has been compiled"

$(NAME):		libftprintf.a
				@$(CC) $(CFLAGS) $(SRC) $(LIBFT) -o $@

libftprintf.a:
				@make -C ./lib/printf

clean:
				@make clean -C ./lib/printf
				@$(RM) $(OBJ)

fclean:			clean
				@make fclean -C ./lib/printf
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
