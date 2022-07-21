# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/18 19:51:49 by dcyprien          #+#    #+#              #
#    Updated: 2022/06/15 13:33:38 by dcyprien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	Phonebook.cpp\
			Contact.cpp

NAME	=	phonebook

CCXX		=	c++ 

CXXFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

OBJS	= 	${SRCS:.cpp=.o}

RM		=	rm -f

$(NAME):	$(OBJS)
	${CCXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:			
	${RM} ${OBJS} ${OBJSBONUS}

fclean:		clean
	${RM} ${NAME}

re:			fclean all


.PHONY = all clean fclean re

