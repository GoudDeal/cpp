# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/18 19:51:49 by dcyprien          #+#    #+#              #
#    Updated: 2022/08/21 08:57:28 by dcyprien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp\
			Classes.cpp

NAME	=	data

CXX		=	c++

CXXFLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98

OBJS		= ${SRCS:.cpp=.o}

RM		=	rm -f

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
	
$(NAME):	$(OBJS)
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:		
	${RM} $(OBJS)

fclean:		clean
	${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re

