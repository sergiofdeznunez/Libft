CC = gcc

CFLAGS = -Werror -Wall -Wextra 

SRCS = ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_memcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putnbr_base.c ft_putnbr_base_long.c ft_free_double_pointer.c ft_get_next_line.c catch_error.c catch_verror.c

SRCS_BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}

NAME = libft.a

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

bonus:	${OBJS} ${OBJS_BONUS}
	ar rc ${NAME} ${OBJS} ${OBJS_BONUS}

all: ${NAME}

clean:
	rm -f ${OBJS} ${OBJS_BONUS}

fclean:	clean
	rm -f ${NAME}
re:	fclean all

.PHONY = all clean fclean re bonus
