# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/18 19:51:49 by dcyprien          #+#    #+#              #
#    Updated: 2022/09/08 17:05:29 by dcyprien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.cpp\
			Span.cpp

NAME	=	span

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

