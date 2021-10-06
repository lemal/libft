NAME	=	libft.a

SRCS	=	first_five.c
OBJS	=	${SRCS:.c=.o}

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

RM		= rm -f

${NAME}	:	${OBJS}
	ar rc  ${NAME} ${OBJS} libft.h
	ranlib ${NAME}

#remove this!!
compsource:	${NAME} main.c
	${CC} ${CFLAGS} -c main.c
	${CC} ${CFLAGS} main.o -L. -lft -o test_prog
#remove this!!

all:	${NAME}

clean:	
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re