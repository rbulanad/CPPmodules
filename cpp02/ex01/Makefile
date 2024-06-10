# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 13:32:16 by rbulanad          #+#    #+#              #
#    Updated: 2024/05/13 15:50:04 by rbulanad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		exec

SRCS	=		main.cpp \
				Fixed.cpp

OBJS	=		${SRCS:.cpp=.o}
CC		=		c++
FLAGS	=		-Wall -Werror -Wextra -std=c++98
RM		=		rm -f

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

all:	${NAME}

${NAME}:	${OBJS}
	${CC} ${FLAGS} ${SRCS} -o $@

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
