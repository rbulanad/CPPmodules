# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 13:32:16 by rbulanad          #+#    #+#              #
#    Updated: 2024/04/30 13:07:53 by rbulanad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		Phonebook

SRCS	=		main.cpp \
				Contact.cpp \
				PhoneBook.cpp

OBJS	=		${SRCS:.cpp=.o}
CC		=		c++
FLAGS	=		-Wall -Werror -Wextra -std=c++98 -g
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
