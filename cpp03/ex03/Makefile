# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 17:12:29 by jeongwle          #+#    #+#              #
#    Updated: 2021/09/16 14:41:21 by jeongwle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out
SRCS	= ./main.cpp \
		  ./ClapTrap.cpp \
		  ./ScavTrap.cpp \
		  ./FragTrap.cpp \
		  ./DiamondTrap.cpp


OBJS	= $(SRCS:.cpp=.o)
RM		= rm -f
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror

.cpp.o :
	$(CC) $(CFLAGS) -Wshadow -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -Wshadow -o $@ $^

all : $(NAME)

fclean : clean
	$(RM) $(NAME)

clean :
	$(RM) $(OBJS)

re : fclean all

.PHONY : all clean fclean re
