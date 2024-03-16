# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 13:43:15 by ndesprez          #+#    #+#              #
#    Updated: 2024/03/16 14:51:20 by ndesprez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp ABC.cpp Base.cpp

NAME = rat

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-pedantic

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
		$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re