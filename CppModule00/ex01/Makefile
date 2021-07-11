# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abiari <abiari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/03 12:59:14 by abiari            #+#    #+#              #
#    Updated: 2021/07/11 15:06:51 by abiari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = YellowPages
CC = clang++
CFLAGS = -Wall -Werror -Wextra
SRC = PhoneBook.cpp YellowPages.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
