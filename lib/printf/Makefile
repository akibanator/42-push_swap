# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 16:47:02 by akenji-a          #+#    #+#              #
#    Updated: 2022/11/21 11:46:14 by akenji-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=			libftprintf.a
CC=				gcc
CC_FLAGS=		-Wall -Wextra -Werror
RM=				/bin/rm -f
SRC= 			ft_printf.c ft_print_helper.c
AR=				ar rcs
LIBFT=			../libft/libft.a

all:			$(NAME)
				@echo "FT_PRINTF has been compiled"

$(NAME):		libft.a
				@$(CC) $(CC_FLAGS) -c $(SRC)
				@$(AR) $(NAME) $(SRC:.c=.o)

libft.a:
				@make -C ../libft
				@cp $(LIBFT) $(NAME)

clean:
				@make clean -C ../libft
				@$(RM) $(SRC:.c=.o)

fclean:			clean
				@$(RM) $(LIBFT) $(NAME)

re: 			fclean all

.PHONY: all clean fclean re libft.a
