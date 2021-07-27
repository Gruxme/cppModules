# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 10:55:48 by abiari            #+#    #+#              #
#    Updated: 2021/07/25 14:29:12 by abiari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals
CC = clang++
CFLAGS = -Wall -Werror -Wextra 
SRC = main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
