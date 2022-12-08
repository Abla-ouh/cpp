# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 14:29:50 by abouhaga          #+#    #+#              #
#    Updated: 2022/12/08 01:32:12 by abouhaga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= loser
SRCS		= main.cpp Sed.cpp

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