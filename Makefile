# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmuniz-s <pmuniz-s@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/06 20:27:59 by pmuniz-s          #+#    #+#              #
#    Updated: 2021/09/08 11:42:04 by pmuniz-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang

FLAGS = -Wall -Werror -Wextra

SRCS = ft_atoi.c ft_bzero.c ft_islanum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
 ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
 ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
 ft_strrchr.c ft_tolower.c ft_toupper.c

OBJS = ${SRCS:.c=.o}  #substitui .c por .o na variavel SRCS

DIR = include

RM = rm -f

.c.o:
	${CC} ${FLAGS} -c ${SRCS}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re