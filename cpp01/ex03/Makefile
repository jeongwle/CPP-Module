# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeongwle <jeongwle@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/06 12:04:21 by jeongwle          #+#    #+#              #
#    Updated: 2021/09/06 12:04:22 by jeongwle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= weapon
SRCS	= ./Weapon.cpp \
		  ./HumanA.cpp \
		  ./HumanB.cpp \
		  ./main.cpp


OBJS	= $(SRCS:.cpp=.o)
RM		= rm -f
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror

.cpp.o :
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

all : $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(OBJS)

re : fclean all

.PHONY : all clean fclean re
