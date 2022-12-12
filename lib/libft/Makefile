NAME=		libft.a

CC=				gcc

CC_FLAGS=		-Wall     \
                -Wextra   \
                -Werror

LIB1=			ar -rcs
LIB2=			ranlib

RM=				/bin/rm -f

C_SOURCE=		ft_atoi.c\
				ft_bzero.c\
				ft_calloc.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_itoa.c\
				ft_memccpy.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_putchar_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_putstr_fd.c\
				ft_split.c\
				ft_strchr.c\
				ft_strdup.c\
				ft_strjoin.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strlen.c\
				ft_strmapi.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_strtrim.c\
				ft_substr.c\
				ft_tolower.c\
				ft_toupper.c\
				ft_uuitoa.c\
				ft_atol.c\
				ft_strcmp.c

OBJS=			$(C_SOURCE:.c=.o)

all:			$(NAME)
				@echo "LIBFT has been compiled"

$(NAME):		$(OBJS)
				@$(LIB1) $(NAME) $(OBJS)
				@$(LIB2) $(NAME)

%.o:			%.c
				@$(CC) $(CC_FLAGS) -c $< -o $@

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
