SRC		:=	$(shell find src -name '*.c')

DEP		=	$(patsubst %.c,%.d,${SRC})
OBJ		=	$(patsubst %.c,%.o,${SRC})
HDR		=	includes/hello.h
INC		=	-I includes

NAME	=	test

CC		=	cc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror
DFLAGS	=	-MMD -MP

%.o:	%.c ${HDR}
	${CC} ${CFLAGS} ${DFLAGS} ${INC} -c $< -o $@

all:	${NAME}

${NAME}:	${OBJ} ${HDR}
	${CC} ${CFLAGS} ${OBJ} -o $@

-include ${DEPS}

clean:
	${RM} ${OBJ} ${DEP}

fclean:	clean
	${RM} ${NAME}

re:	clean all

.PHONY:	all clean fclean re