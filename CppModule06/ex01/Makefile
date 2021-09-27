# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 10:55:48 by abiari            #+#    #+#              #
#    Updated: 2021/09/24 07:48:20 by abiari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialization
CC = clang++
CFLAGS = -Wall -Werror -Wextra
SRC = main.cpp serialization.cpp
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
