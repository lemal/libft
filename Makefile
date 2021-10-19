NAME	=	libft.a
HDR		= libft.h

SRCS	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
			ft_memcmp.c ft_strnstr.c ft_atoi.c \
			ft_striteri.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
			# ft_itoa.c

OBJS	=	${SRCS:.c=.o}

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I${HDR}

RM		= rm -f

.PHONY:	all clean fclean re

all:	${NAME}

${NAME}	:	${OBJS} ${HDR}
	ar rc  ${NAME} $?
	ranlib ${NAME}

clean:	
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re:		fclean all