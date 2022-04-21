SRC		:=	$(shell find src -name '*.c')

DEP		=	$(patsubst %.c,%.d,${SRC})
OBJ		=	$(patsubst %.c,%.o,${SRC})

HDR		=	includes/libft.h
NAME	=	libft.a
INC		=	-I includes

CFLAGS	=	-Wall -Wextra -Werror
DFLAGS	=	-MMD -MP
RM		=	rm -f
CC		=	cc

%.o:	%.c ${HDR}
	${CC} ${CFLAGS} ${DFLAGS} ${INC} -c $< -o $@

all:	${NAME}

${NAME}:	${OBJ} ${HDR}
	ar rc libft.a ${OBJ}

-include ${DEPS}

clean:	
	${RM} ${OBJ} ${DEP}

fclean:		clean
	${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
