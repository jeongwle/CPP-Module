# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/12 21:50:57 by jeongwle          #+#    #+#              #
#    Updated: 2021/09/15 15:16:32 by jeongwle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out
SRCS	= ./main.cpp \
		  ./ClapTrap.cpp \
		  ./ScavTrap.cpp


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
