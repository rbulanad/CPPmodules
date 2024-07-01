# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 13:32:16 by rbulanad          #+#    #+#              #
#    Updated: 2024/06/28 14:25:01 by rbulanad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		exec

SRCS	=		main.cpp \
				Base.cpp

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
