CFLAGS =-Wall -Werror -Wextra
EXEC =exec
PATH =srcs/
SRC_FILE =ft_bzero.c \
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

SRC = ${addprefix ${PATH}, ${SRC_FILE}} ${MAIN}
OBJS = ${SRC:.c=.o}
MAIN = ../../mes_mains/main_strnstr.c

all: ${EXEC}

${EXEC}: ${OBJS}
	gcc ${CFLAGS} ${OBJS} -o ${EXEC}

.c.o:  ${SRC}
	gcc ${CFLAGS} -c -Iincludes $< -o ${<:.c=.o}

clean:
	rm -f ${OBJS}

fclean: clean

	rm exec

re: fclean all