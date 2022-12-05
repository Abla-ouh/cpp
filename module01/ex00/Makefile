# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 14:29:50 by abouhaga          #+#    #+#              #
#    Updated: 2022/11/29 12:01:26 by abouhaga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie
SRCS		= main.cpp \
			Zombie.cpp \
			NewZombie.cpp \
			randomChump.cpp

CC	= c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME)	: $(OBJS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean:	clean
		rm -rf $(NAME)

re:	fclean all