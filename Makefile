# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 12:48:09 by spetrosy          #+#    #+#              #
#    Updated: 2022/03/30 13:41:36 by spetrosy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= $(wildcard *.c)

OBJS		= ${SRCS:.c=.o}

CC			= cc

CFLAGS		= -Wall -Werror -Wextra

RM			= rm -f

all:		${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

%.o:%.c
			${CC} ${CFLAGS} -c $< -o $@

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
