# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spetrosy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 12:48:09 by spetrosy          #+#    #+#              #
#    Updated: 2022/04/04 18:37:23 by spetrosy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= $(wildcard *.c)

BONUS_SRCS	= $(wildcard ft_lst*.c)

FILTER		= $(filter-out $(BONUS_SRCS), $(SRCS))

OBJS		= $(patsubst %.c,%.o,$(FILTER))

OBJS_B		= $(patsubst %.c,%.o,$(BONUS_SRCS))

CC			= cc

CFLAGS		= -Wall -Werror -Wextra

AR			= ar rcs

RM			= rm -f

all:		${NAME}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

bonus:		${OBJS_B}
			${AR} ${NAME} ${OBJS_B}

clean:		
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all fclean ${NAME} clean bonus
