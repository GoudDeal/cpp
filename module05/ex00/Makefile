# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/18 19:51:49 by dcyprien          #+#    #+#              #
#    Updated: 2022/08/12 15:58:44 by dcyprien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp\
			Bureaucrat.cpp

NAME	=	Bureaucrat

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

