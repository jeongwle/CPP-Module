# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeongwle <jeongwle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 15:43:42 by jeongwle          #+#    #+#              #
#    Updated: 2021/09/20 20:57:08 by jeongwle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= a.out
SRCS	= ./main.cpp \
		  ./Animal.cpp \
		  ./Dog.cpp \
		  ./Cat.cpp \
		  ./WrongAnimal.cpp \
		  ./WrongDog.cpp \
		  ./WrongCat.cpp
		  
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
