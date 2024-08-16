# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 13:32:16 by rbulanad          #+#    #+#              #
#    Updated: 2024/08/16 15:56:22 by rbulanad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		RPN

SRCS	=		main.cpp \
				RPN.cpp

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
