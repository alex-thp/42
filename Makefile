CFLAGS =-Wall -Werror -Wextra
EXEC =libft.a
PATH =srcs/
SRC_FILE = ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strchr.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_tolower.c \
ft_toupper.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \

SRC = ${SRC_FILE}
OBJS = ${SRC:.c=.o}
FUNCTION=strmapi

all: ${EXEC}

${EXEC}: ${OBJS}
	ar rcs ${EXEC} ${OBJS}
	ranlib ${EXEC}

.c.o:  ${SRC}
	gcc ${CFLAGS} -c -Iincludes $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean: clean

	rm ${EXEC}

re: fclean all
