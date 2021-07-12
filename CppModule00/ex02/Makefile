# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/12 11:53:42 by abiari            #+#    #+#              #
#    Updated: 2021/07/12 12:22:56 by abiari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bank
CC = clang++
CFLAGS = -Wall -Werror -Wextra
SRC = Account.cpp tests.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
