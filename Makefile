CC = gcc

CFLAGS = -Werror -Wall -Wextra 

SRCS = $(shell find . -name "ft_*.c")

OBJS = ${SRCS:.c=.o}

NAME = libft.a

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f $(shell find . -name "*.o")

fclean:	clean
	rm -f ${NAME}
re:	fclean all

.PHONY = all clean fclean re
