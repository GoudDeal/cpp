# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/18 19:51:49 by dcyprien          #+#    #+#              #
#    Updated: 2022/08/12 14:32:26 by dcyprien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	Fixed.cpp\
			main.cpp

NAME	=	fixed

CCXX		=	c++ 

CXXFLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98

OBJS		= ${SRCS:.cpp=.o}

RM		=	rm -f

%.o: %.cpp
	$(CCXX) $(CXXFLAGS) -c $< -o $@
	
$(NAME):	$(OBJS)
	${CCXX} ${CXXFLAGS} ${OBJS} -o ${NAME} 

all:		${NAME}

clean:		
	${RM} $(OBJS)

fclean:		clean
	${RM} ${NAME}

re:			fclean all


.PHONY = all clean fclean re

