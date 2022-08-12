NAME=			push_swap

all:			libftprintf.a

libftprintf.a:
				@make -C ./lib/printf

clean:
				@make clean -C ./lib/printf

fclean:
				@make fclean -C ./lib/printf

re:				fclean all

.PHONY:			all clean fclean re
