# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/18 19:51:49 by dcyprien          #+#    #+#              #
#    Updated: 2022/07/30 19:43:15 by dcyprien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	Animal.cpp\
			Cat.cpp\
			Dog.cpp\
			Brain.cpp\
			main.cpp

NAME	=	animals

CCXX		=	c++ 

CXXFLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98

OBJS		= ${SRCS:.cpp=.o}

RM		=	rm -f

$(NAME):	$(OBJS)
	${CCXX} ${CXXFLAGS} ${OBJS} -o ${NAME} 

%.o: %.cpp
	$(CCXX) $(CXXFLAGS) -c $< -o $@

all:		${NAME}

clean:		
	${RM} $(OBJS)

fclean:		clean
	${RM} ${NAME}

re:			fclean all


.PHONY: all clean fclean re

