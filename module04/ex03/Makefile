# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/18 19:51:49 by dcyprien          #+#    #+#              #
#    Updated: 2022/07/31 05:09:53 by dcyprien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	Materia.cpp\
			Cure.cpp\
			Ice.cpp\
			Character.cpp\
			MateriaSource.cpp\
			main.cpp

NAME	=	materia

CCXX		=	c++ 

CXXFLAGS	=	-Wall -Wextra -Werror -g3 -std=c++98

OBJS		= ${SRCS:.cpp=.o}

RM		=	rm -f

$(NAME):	$(OBJS) $(DFILES)
	${CCXX} ${CXXFLAGS}  ${OBJS} -o ${NAME}

%.o: %.cpp
	$(CCXX) $(CXXFLAGS) -c $< -o $@

all:		${NAME}

clean:		
	${RM} $(OBJS) $(DFILES)

fclean:		clean
	${RM} ${NAME} $(DFILES)

re:			fclean all


.PHONY: all clean fclean re

